#include "global.h"
#include "gflib.h"
#include "area_pokemon_screen.h"
#include "characters.h"
#include "data.h"
#include "menu.h"
#include "new_menu_helpers.h"
#include "pokedex.h"
#include "pokemon.h"
#include "pokemon_icon.h"
#include "pokemon_storage_system.h"
#include "region_map.h"
#include "string_util.h"
#include "strings.h"
#include "wild_pokemon_area.h"
#include "constants/items.h"
#include "constants/songs.h"

#define AREA_POKEMON_VISIBLE_ROWS 5
#define ROW_HEIGHT 20
#define CAUGHT_ICON_SIZE 8
#define FIRST_BALL_ITEM ITEM_MASTER_BALL
#define LAST_BALL_ITEM ITEM_PREMIER_BALL

enum
{
    WIN_TITLE,
    WIN_LIST,
    WIN_COUNT
};

struct AreaPokemonScreen
{
    MainCallback returnCallback;
    u16 bg0TilemapBuffer[BG_SCREEN_SIZE];
    u16 speciesList[NUM_SPECIES];
    u8 minLevels[NUM_SPECIES];
    u8 maxLevels[NUM_SPECIES];
    u8 caughtBalls[NUM_SPECIES];
    u16 mapsec;
    u16 speciesCount;
    u16 topIndex;
    u8 mapGroup;
    u8 mapNum;
    bool8 useEncounterMap;
    s16 iconSpriteIds[AREA_POKEMON_VISIBLE_ROWS];
    u16 visibleSpecies[AREA_POKEMON_VISIBLE_ROWS];
    u8 windowIds[WIN_COUNT];
    u8 state;
    u8 title[32];
};

// 8x8 icons for each ball type, in item id order (ITEM_MASTER_BALL..ITEM_PREMIER_BALL)
static const u8 sBallIcons_Gfx[] = INCBIN_U8("graphics/interface/area_pokemon_ball_icons.4bpp");

// Loaded over indices 5-14 of the list window's palette (unused by its text and frame),
// giving the ball icons colors the standard text palette lacks
static const u16 sBallIconPalette[] = {
    RGB(31, 28, 4),   // 5: yellow
    RGB(4, 19, 1),    // 6: green
    RGB(18, 8, 25),   // 7: purple
    RGB(6, 10, 25),   // 8: blue
    RGB(30, 16, 22),  // 9: pink
    RGB(9, 24, 28),   // 10: cyan
    RGB(4, 4, 4),     // 11: black
    RGB(30, 18, 6),   // 12: orange
    RGB(15, 18, 6),   // 13: olive
    RGB(18, 18, 18),  // 14: gray
};

static EWRAM_DATA struct AreaPokemonScreen *sAreaPokemonScreen = NULL;

static void CB2_InitAreaPokemonScreen(void);
static void CB2_AreaPokemonScreen(void);
static void VBlankCB_AreaPokemonScreen(void);
static bool8 SetupAreaPokemonScreen(void);
static void FreeAreaPokemonScreen(void);
static void DrawAreaPokemonScreen(void);
static void DestroyVisibleIcons(void);
static void CreateVisibleIcons(void);
static void PrintAreaPokemonRows(void);
static void BuildCaughtBallList(void);
static void StartExitAreaPokemonScreen(void);
static bool8 IsExitAreaPokemonScreenComplete(void);

static const struct BgTemplate sAreaPokemonBgTemplates[] = {
    {
        .bg = 0,
        .charBaseIndex = 0,
        .mapBaseIndex = 31,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 0,
        .baseTile = 0
    }
};

static const struct WindowTemplate sAreaPokemonWindowTemplates[] = {
    [WIN_TITLE] = {
        .bg = 0,
        .tilemapLeft = 1,
        .tilemapTop = 1,
        .width = 28,
        .height = 2,
        .paletteNum = 15,
        .baseBlock = 1
    },
    [WIN_LIST] = {
        .bg = 0,
        .tilemapLeft = 1,
        .tilemapTop = 4,
        .width = 28,
        .height = 15,
        .paletteNum = 15,
        .baseBlock = 0x39
    },
    DUMMY_WIN_TEMPLATE
};

void InitAreaPokemonScreen(u16 mapsec, MainCallback returnCallback)
{
    InitAreaPokemonScreenForEncounterMap(mapsec, 0, 0, NULL, returnCallback);
}

void InitAreaPokemonScreenForEncounterMap(u16 mapsec, u8 mapGroup, u8 mapNum, const u8 *title, MainCallback returnCallback)
{
    sAreaPokemonScreen = AllocZeroed(sizeof(*sAreaPokemonScreen));
    if (sAreaPokemonScreen == NULL)
    {
        SetMainCallback2(returnCallback);
        return;
    }

    sAreaPokemonScreen->mapsec = mapsec;
    sAreaPokemonScreen->mapGroup = mapGroup;
    sAreaPokemonScreen->mapNum = mapNum;
    sAreaPokemonScreen->useEncounterMap = (title != NULL);
    sAreaPokemonScreen->returnCallback = returnCallback;
    if (title != NULL)
        StringCopy(sAreaPokemonScreen->title, title);
    SetMainCallback2(CB2_InitAreaPokemonScreen);
}

static void CB2_InitAreaPokemonScreen(void)
{
    if (!SetupAreaPokemonScreen())
        return;

    BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
    SetVBlankCallback(VBlankCB_AreaPokemonScreen);
    SetMainCallback2(CB2_AreaPokemonScreen);
}

static bool8 SetupAreaPokemonScreen(void)
{
    u8 i;

    SetVBlankCallback(NULL);
    ResetSpriteData();
    FreeAllSpritePalettes();
    ResetPaletteFade();
    ResetBgsAndClearDma3BusyFlags(FALSE);
    InitBgsFromTemplates(0, sAreaPokemonBgTemplates, ARRAY_COUNT(sAreaPokemonBgTemplates));
    SetBgTilemapBuffer(0, sAreaPokemonScreen->bg0TilemapBuffer);
    SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_MODE_0 | DISPCNT_BG0_ON | DISPCNT_OBJ_ON | DISPCNT_OBJ_1D_MAP);
    FillBgTilemapBufferRect_Palette0(0, 0, 0, 0, 32, 32);
    InitWindows(sAreaPokemonWindowTemplates);
    DeactivateAllTextPrinters();
    LoadStdWindowFrameGfx();
    Menu_LoadStdPal();
    for (i = 0; i < WIN_COUNT; i++)
        sAreaPokemonScreen->windowIds[i] = i;
    for (i = 0; i < AREA_POKEMON_VISIBLE_ROWS; i++)
        sAreaPokemonScreen->iconSpriteIds[i] = -1;

    if (sAreaPokemonScreen->useEncounterMap)
    {
        sAreaPokemonScreen->speciesCount = BuildSpeciesListForEncounterMap(sAreaPokemonScreen->mapGroup,
                                                                           sAreaPokemonScreen->mapNum,
                                                                           sAreaPokemonScreen->speciesList,
                                                                           sAreaPokemonScreen->minLevels,
                                                                           sAreaPokemonScreen->maxLevels,
                                                                           ARRAY_COUNT(sAreaPokemonScreen->speciesList));
    }
    else
    {
        sAreaPokemonScreen->speciesCount = BuildSpeciesListForMapsec(sAreaPokemonScreen->mapsec,
                                                                     sAreaPokemonScreen->speciesList,
                                                                     sAreaPokemonScreen->minLevels,
                                                                     sAreaPokemonScreen->maxLevels,
                                                                     ARRAY_COUNT(sAreaPokemonScreen->speciesList));
    }
    BuildCaughtBallList();
    LoadPalette(sBallIconPalette, BG_PLTT_ID(15) + 5, sizeof(sBallIconPalette));
    DrawStdWindowFrame(WIN_TITLE, FALSE);
    DrawStdWindowFrame(WIN_LIST, FALSE);
    DrawAreaPokemonScreen();
    CopyBgTilemapBufferToVram(0);
    ShowBg(0);
    return TRUE;
}

static void CB2_AreaPokemonScreen(void)
{
    switch (sAreaPokemonScreen->state)
    {
    case 0:
        if (!gPaletteFade.active)
            sAreaPokemonScreen->state = 1;
        break;
    case 1:
        if (JOY_NEW(B_BUTTON))
        {
            PlaySE(SE_SELECT);
            StartExitAreaPokemonScreen();
        }
        else if (JOY_NEW(DPAD_UP) && sAreaPokemonScreen->topIndex > 0)
        {
            sAreaPokemonScreen->topIndex--;
            PlaySE(SE_SELECT);
            DrawAreaPokemonScreen();
        }
        else if (JOY_NEW(DPAD_DOWN)
              && sAreaPokemonScreen->topIndex + AREA_POKEMON_VISIBLE_ROWS < sAreaPokemonScreen->speciesCount)
        {
            sAreaPokemonScreen->topIndex++;
            PlaySE(SE_SELECT);
            DrawAreaPokemonScreen();
        }
        break;
    case 2:
        if (IsExitAreaPokemonScreenComplete())
        {
            MainCallback returnCallback = sAreaPokemonScreen->returnCallback;

            FreeAreaPokemonScreen();
            SetMainCallback2(returnCallback);
        }
        break;
    }

    AnimateSprites();
    BuildOamBuffer();
    UpdatePaletteFade();
}

static void VBlankCB_AreaPokemonScreen(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

static void DrawAreaPokemonScreen(void)
{
    u8 areaName[32];
    u8 countText[16];
    u8 *countEnd;

    FillWindowPixelBuffer(WIN_TITLE, PIXEL_FILL(1));
    if (sAreaPokemonScreen->useEncounterMap)
        StringCopy(areaName, sAreaPokemonScreen->title);
    else
        GetMapNameGeneric(areaName, sAreaPokemonScreen->mapsec);
    AddTextPrinterParameterized(WIN_TITLE, FONT_NORMAL, areaName, 4, 1, 0, NULL);
    countEnd = ConvertIntToDecimalStringN(countText, sAreaPokemonScreen->speciesCount, STR_CONV_MODE_RIGHT_ALIGN, 3);
    StringCopy(countEnd, gText_PokedexPokemon);
    AddTextPrinterParameterized(WIN_TITLE, FONT_NORMAL, countText, 140, 1, 0, NULL);

    FillWindowPixelBuffer(WIN_LIST, PIXEL_FILL(1));
    PrintAreaPokemonRows();
    {
        static const u8 sControlsTextColor[] = {TEXT_DYNAMIC_COLOR_6, TEXT_COLOR_WHITE, TEXT_COLOR_DARK_GRAY};
        FillWindowPixelRect(WIN_LIST, PIXEL_FILL(15), 0, 102, 224, 18);
        AddTextPrinterParameterized3(WIN_LIST, FONT_NORMAL, 4, 104, sControlsTextColor, 0, gText_AreaPokemonControls);
    }
    CopyWindowToVram(WIN_TITLE, COPYWIN_FULL);
    CopyWindowToVram(WIN_LIST, COPYWIN_FULL);
    CreateVisibleIcons();
}

static void SetCaughtBallForSpecies(u16 species, u16 ball)
{
    u16 i;

    if (ball < FIRST_BALL_ITEM || ball > LAST_BALL_ITEM)
        return;

    for (i = 0; i < sAreaPokemonScreen->speciesCount; i++)
    {
        if (sAreaPokemonScreen->speciesList[i] == species)
        {
            if (sAreaPokemonScreen->caughtBalls[i] == ITEM_NONE)
                sAreaPokemonScreen->caughtBalls[i] = ball;
            return;
        }
    }
}

// The pokedex only records that a species was caught, not what ball was used, so
// scan the party and boxes for a mon of each listed species. Species the player
// no longer has (traded, evolved, released) fall back to a plain poke ball.
static void BuildCaughtBallList(void)
{
    u16 i;
    u8 box, pos;

    for (i = 0; i < PARTY_SIZE; i++)
    {
        u16 species = GetMonData(&gPlayerParty[i], MON_DATA_SPECIES_OR_EGG);
        if (species != SPECIES_NONE && species != SPECIES_EGG)
            SetCaughtBallForSpecies(species, GetMonData(&gPlayerParty[i], MON_DATA_POKEBALL));
    }
    for (box = 0; box < TOTAL_BOXES_COUNT; box++)
    {
        for (pos = 0; pos < IN_BOX_COUNT; pos++)
        {
            u16 species = GetBoxMonDataAt(box, pos, MON_DATA_SPECIES_OR_EGG);
            if (species != SPECIES_NONE && species != SPECIES_EGG)
                SetCaughtBallForSpecies(species, GetBoxMonDataAt(box, pos, MON_DATA_POKEBALL));
        }
    }
}

static void PrintAreaPokemonRows(void)
{
    u8 row;

    DestroyVisibleIcons();
    if (sAreaPokemonScreen->speciesCount == 0)
    {
        AddTextPrinterParameterized(WIN_LIST, FONT_NORMAL, gText_NoPokemonFound, 48, 44, 0, NULL);
        return;
    }

    for (row = 0; row < AREA_POKEMON_VISIBLE_ROWS; row++)
    {
        u16 listIndex = sAreaPokemonScreen->topIndex + row;
        u16 yPos = row * ROW_HEIGHT + 2;

        if (listIndex >= sAreaPokemonScreen->speciesCount)
            break;

        sAreaPokemonScreen->visibleSpecies[row] = sAreaPokemonScreen->speciesList[listIndex];
        AddTextPrinterParameterized(WIN_LIST, FONT_SMALL, gSpeciesNames[sAreaPokemonScreen->visibleSpecies[row]], 36, yPos + 4, 0, NULL);

        {
            u8 catchText[8];
            u8 *dst;
            // Base catch rate as a percentage of the 255 maximum; the real chance
            // also depends on ball, HP and status, so this is a difficulty guide
            u16 pct = (gSpeciesInfo[sAreaPokemonScreen->visibleSpecies[row]].catchRate * 100 + 127) / 255;

            dst = ConvertIntToDecimalStringN(catchText, pct, STR_CONV_MODE_RIGHT_ALIGN, 3);
            *dst++ = CHAR_PERCENT;
            *dst = EOS;
            AddTextPrinterParameterized(WIN_LIST, FONT_SMALL, catchText, 118, yPos + 4, 0, NULL);
        }

        if (sAreaPokemonScreen->minLevels[listIndex] != 0 || sAreaPokemonScreen->maxLevels[listIndex] != 0)
        {
            u8 levelText[16];
            u8 *dst = StringCopy(levelText, gText_Lv);

            dst = ConvertIntToDecimalStringN(dst, sAreaPokemonScreen->minLevels[listIndex], STR_CONV_MODE_LEFT_ALIGN, 3);
            if (sAreaPokemonScreen->maxLevels[listIndex] != sAreaPokemonScreen->minLevels[listIndex])
            {
                *dst++ = CHAR_HYPHEN;
                dst = ConvertIntToDecimalStringN(dst, sAreaPokemonScreen->maxLevels[listIndex], STR_CONV_MODE_LEFT_ALIGN, 3);
            }
            *dst = EOS;
            AddTextPrinterParameterized(WIN_LIST, FONT_SMALL, levelText, 160, yPos + 4, 0, NULL);
        }

        if (GetSetPokedexFlag(SpeciesToNationalPokedexNum(sAreaPokemonScreen->visibleSpecies[row]), FLAG_GET_CAUGHT))
        {
            u16 ball = sAreaPokemonScreen->caughtBalls[listIndex];

            if (ball == ITEM_NONE)
                ball = ITEM_POKE_BALL;
            BlitBitmapToWindow(WIN_LIST, &sBallIcons_Gfx[(ball - FIRST_BALL_ITEM) * TILE_SIZE_4BPP],
                               204, yPos + 6, CAUGHT_ICON_SIZE, CAUGHT_ICON_SIZE);
        }
    }
}

static void CreateVisibleIcons(void)
{
    u8 row;

    for (row = 0; row < AREA_POKEMON_VISIBLE_ROWS; row++)
    {
        u16 species = sAreaPokemonScreen->visibleSpecies[row];
        s16 yPos = 40 + row * ROW_HEIGHT;

        if (species == SPECIES_NONE)
            continue;

        SafeLoadMonIconPalette(species);
        sAreaPokemonScreen->iconSpriteIds[row] = CreateMonIcon_HandleDeoxys(species, SpriteCallbackDummy, 20, yPos, 0, FALSE);
        gSprites[sAreaPokemonScreen->iconSpriteIds[row]].oam.priority = 0;
    }
}

static void DestroyVisibleIcons(void)
{
    u8 row;

    for (row = 0; row < AREA_POKEMON_VISIBLE_ROWS; row++)
    {
        if (sAreaPokemonScreen->iconSpriteIds[row] >= 0)
        {
            DestroyMonIcon(&gSprites[sAreaPokemonScreen->iconSpriteIds[row]]);
            SafeFreeMonIconPalette(sAreaPokemonScreen->visibleSpecies[row]);
            sAreaPokemonScreen->iconSpriteIds[row] = -1;
        }
        sAreaPokemonScreen->visibleSpecies[row] = SPECIES_NONE;
    }
}

static void StartExitAreaPokemonScreen(void)
{
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
    sAreaPokemonScreen->state = 2;
}

static bool8 IsExitAreaPokemonScreenComplete(void)
{
    return !gPaletteFade.active;
}

static void FreeAreaPokemonScreen(void)
{
    if (sAreaPokemonScreen == NULL)
        return;

    DestroyVisibleIcons();
    FreeAllWindowBuffers();
    FREE_AND_SET_NULL(sAreaPokemonScreen);
    SetVBlankCallback(NULL);
}
