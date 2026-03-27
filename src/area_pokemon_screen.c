#include "global.h"
#include "gflib.h"
#include "area_pokemon_screen.h"
#include "data.h"
#include "menu.h"
#include "new_menu_helpers.h"
#include "pokemon_icon.h"
#include "region_map.h"
#include "strings.h"
#include "wild_pokemon_area.h"
#include "constants/songs.h"

#define AREA_POKEMON_VISIBLE_ROWS 3

enum
{
    WIN_TITLE,
    WIN_PANEL,
    WIN_COUNT
};

struct AreaPokemonScreen
{
    MainCallback returnCallback;
    u16 bg0TilemapBuffer[BG_SCREEN_SIZE];
    u16 speciesList[NUM_SPECIES];
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
        .tilemapTop = 2,
        .width = 28,
        .height = 3,
        .paletteNum = 15,
        .baseBlock = 1
    },
    [WIN_PANEL] = {
        .bg = 0,
        .tilemapLeft = 1,
        .tilemapTop = 5,
        .width = 28,
        .height = 14,
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
                                                                           ARRAY_COUNT(sAreaPokemonScreen->speciesList));
    }
    else
    {
        sAreaPokemonScreen->speciesCount = BuildSpeciesListForMapsec(sAreaPokemonScreen->mapsec,
                                                                     sAreaPokemonScreen->speciesList,
                                                                     ARRAY_COUNT(sAreaPokemonScreen->speciesList));
    }
    DrawAreaPokemonScreen();
    PutWindowTilemap(WIN_TITLE);
    PutWindowTilemap(WIN_PANEL);
    CopyWindowToVram(WIN_TITLE, COPYWIN_FULL);
    CopyWindowToVram(WIN_PANEL, COPYWIN_FULL);
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
    DrawStdWindowFrame(WIN_TITLE, FALSE);
    if (sAreaPokemonScreen->useEncounterMap)
        StringCopy(areaName, sAreaPokemonScreen->title);
    else
        GetMapNameGeneric(areaName, sAreaPokemonScreen->mapsec);
    AddTextPrinterParameterized(WIN_TITLE, FONT_NORMAL, areaName, 8, 4, 0, NULL);
    countEnd = ConvertIntToDecimalStringN(countText, sAreaPokemonScreen->speciesCount, STR_CONV_MODE_RIGHT_ALIGN, 3);
    StringCopy(countEnd, gText_PokedexPokemon);
    AddTextPrinterParameterized(WIN_TITLE, FONT_SMALL, countText, 140, 8, 0, NULL);

    FillWindowPixelBuffer(WIN_PANEL, PIXEL_FILL(1));
    DrawStdWindowFrame(WIN_PANEL, FALSE);
    PrintAreaPokemonRows();
    AddTextPrinterParameterized(WIN_PANEL, FONT_SMALL, gText_AreaPokemonControls, 8, 92, 0, NULL);
    CopyWindowToVram(WIN_TITLE, COPYWIN_FULL);
    CopyWindowToVram(WIN_PANEL, COPYWIN_FULL);
    CreateVisibleIcons();
}

static void PrintAreaPokemonRows(void)
{
    static const u8 sRowYCoords[AREA_POKEMON_VISIBLE_ROWS] = {4, 36, 68};
    u8 row;

    DestroyVisibleIcons();
    if (sAreaPokemonScreen->speciesCount == 0)
    {
        AddTextPrinterParameterized(WIN_PANEL, FONT_NORMAL, gText_NoPokemonFound, 48, 44, 0, NULL);
        return;
    }

    for (row = 0; row < AREA_POKEMON_VISIBLE_ROWS; row++)
    {
        u16 listIndex = sAreaPokemonScreen->topIndex + row;

        if (listIndex >= sAreaPokemonScreen->speciesCount)
            break;

        sAreaPokemonScreen->visibleSpecies[row] = sAreaPokemonScreen->speciesList[listIndex];
        AddTextPrinterParameterized(WIN_PANEL, FONT_NORMAL, gSpeciesNames[sAreaPokemonScreen->visibleSpecies[row]], 48, sRowYCoords[row] + 12, 0, NULL);
    }
}

static void CreateVisibleIcons(void)
{
    static const s16 sIconYCoords[AREA_POKEMON_VISIBLE_ROWS] = {59, 91, 123};
    u8 row;

    for (row = 0; row < AREA_POKEMON_VISIBLE_ROWS; row++)
    {
        u16 species = sAreaPokemonScreen->visibleSpecies[row];

        if (species == SPECIES_NONE)
            continue;

        SafeLoadMonIconPalette(species);
        sAreaPokemonScreen->iconSpriteIds[row] = CreateMonIcon_HandleDeoxys(species, SpriteCallbackDummy, 36, sIconYCoords[row], 0, FALSE);
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
