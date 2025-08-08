#ifndef GUARD_HELP_SYSTEM_H
#define GUARD_HELP_SYSTEM_H

#include "global.h"
#include "list_menu.h"
#include "blit.h"
#include "constants/help_system.h"

#ifdef DISABLE_HELP_SYSTEM

// Use real list_menu.h types; provide lightweight placeholder of HelpSystemListMenu
struct HelpSystemListMenu { struct { struct ListMenuItem * items; u16 totalItems; u16 maxShowed; u8 left; u8 top; } sub; u8 itemsAbove; u8 cursorPos; u8 state; };

// Minimal stubs when help system is disabled.
static inline void SetHelpContextDontCheckBattle(u8 a) {(void)a;}
void SetHelpContextForMap(void);
static inline void SetHelpContext(u8 a) {(void)a;}
static inline bool8 HelpSystem_UpdateHasntSeenIntro(void) {return FALSE;}
static inline bool8 HelpSystem_IsSinglePlayer(void) {return TRUE;}
void HelpSystem_Disable(void);
void HelpSystem_Enable(void);
static inline void HelpSystem_EnableToggleWithRButton(void) {}
static inline bool8 RunHelpMenuSubroutine(struct HelpSystemListMenu * a, struct ListMenuItem * b) {(void)a;(void)b; return FALSE;}
static inline bool8 HelpSystemSubroutine_PrintWelcomeMessage(struct HelpSystemListMenu * a, struct ListMenuItem * b){(void)a;(void)b; return FALSE;}
static inline bool8 HelpSystemSubroutine_WelcomeWaitButton(struct HelpSystemListMenu * a, struct ListMenuItem * b){(void)a;(void)b; return FALSE;}
static inline bool8 HelpSystemSubroutine_WelcomeEndGotoMenu(struct HelpSystemListMenu * a, struct ListMenuItem * b){(void)a;(void)b; return FALSE;}
static inline bool8 HelpSystemSubroutine_MenuInputHandlerMain(struct HelpSystemListMenu * a, struct ListMenuItem * b){(void)a;(void)b; return FALSE;}
static inline bool8 HelpMenuSubroutine_InitSubmenu(struct HelpSystemListMenu * a, struct ListMenuItem * b){(void)a;(void)b; return FALSE;}
static inline bool8 HelpMenuSubroutine_ReturnFromSubmenu(struct HelpSystemListMenu * a, struct ListMenuItem * b){(void)a;(void)b; return FALSE;}
static inline bool8 HelpMenuSubroutine_SubmenuInputHandler(struct HelpSystemListMenu * a, struct ListMenuItem * b){(void)a;(void)b; return FALSE;}
static inline void HelpSystem_PrintTopicLabel(void) {}
static inline bool8 HelpMenuSubroutine_HelpItemPrint(struct HelpSystemListMenu * a, struct ListMenuItem * b){(void)a;(void)b; return FALSE;}
static inline bool8 HelpMenuSubroutine_ReturnFromHelpItem(struct HelpSystemListMenu * a, struct ListMenuItem * b){(void)a;(void)b; return FALSE;}
static inline bool8 HelpMenuSubroutine_HelpItemWaitButton(struct HelpSystemListMenu * a, struct ListMenuItem * b){(void)a;(void)b; return FALSE;}
static inline bool8 GetHelpSystemMenuLevel(void){return 0;}
static inline bool8 RunHelpSystemCallback(void){return 0;}
static inline void SaveCallbacks(void){}
static inline void SaveMapGPURegs(void){}
static inline void SaveMapTiles(void){}
static inline void SaveMapTextColors(void){}
static inline void RestoreCallbacks(void){}
static inline void RestoreGPURegs(void){}
static inline void RestoreMapTiles(void){}
static inline void RestoreMapTextColors(void){}
static inline void CommitTilemap(void){}
static inline void HS_BufferFillMapWithTile1FF(void){}
static inline void HS_ShowOrHideWordHELPinTopLeft(u8 m){(void)m;}
static inline void HS_ShowOrHideControlsGuideInTopRight(u8 m){(void)m;}
static inline void HS_ShowOrHideMainWindowText(u8 m){(void)m;}
static inline void HS_SetMainWindowBgBrightness(u8 m){(void)m;}
static inline void HS_ShowOrHideToplevelTooltipWindow(u8 m){(void)m;}
static inline void HS_ShowOrHideHeaderAndFooterLines_Lighter(u8 m){(void)m;}
static inline void HS_ShowOrHideHeaderAndFooterLines_Darker(u8 m){(void)m;}
static inline void HS_ShowOrHideVerticalBlackBarsAlongSides(u8 m){(void)m;}
static inline void HS_ShowOrHideHeaderLine_Darker_FooterStyle(u8 m){(void)m;}
static inline void HS_ShowOrHideScrollArrows(u8 w,u8 m){(void)w;(void)m;}
static inline void HelpSystem_PrintTextRightAlign_Row52(const u8 *s){(void)s;}
static inline void HelpSystem_PrintTextAt(const u8 *s,u8 a,u8 b){(void)s;(void)a;(void)b;}
static inline void HelpSystem_PrintQuestionAndAnswerPair(const u8 *a,const u8 *b){(void)a;(void)b;}
static inline void HelpSystem_PrintTopicMouseoverDescription(const u8 *s){(void)s;}
static inline void HelpSystem_FillPanel2(void){}
static inline void HelpSystem_FillPanel1(void){}
static inline void HelpSystem_InitListMenuController(struct HelpSystemListMenu *a,u8 b,u8 c){(void)a;(void)b;(void)c;}
static inline void HelpSystem_SetInputDelay(u8 a){(void)a;}
static inline s32 HelpSystem_GetMenuInput(void){return 0;}
static inline void HS_UpdateMenuScrollArrows(void){}
static inline void DecompressAndRenderGlyph(u8 a,u16 b, struct Bitmap *c, struct Bitmap *d, u8 *e,u8 f,u8 g,u8 h,u8 i){(void)a;(void)b;(void)c;(void)d;(void)e;(void)f;(void)g;(void)h;(void)i;}
static inline void HelpSystem_PrintTextInTopLeftCorner(const u8 *s){(void)s;}
static inline void HelpSystem_FillPanel3(void){}
static inline void PrintListMenuItems(void){}
static inline void PlaceListMenuCursor(void){}
static inline bool8 MoveCursor(u8 by,u8 dirn){(void)by;(void)dirn;return FALSE;}
void BackupHelpContext(void);
void RestoreHelpContext(void);
static inline void HelpSystemRenderText(u8 a,u8 *b,const u8 *c,u8 d,u8 e,u8 f,u8 g){(void)a;(void)b;(void)c;(void)d;(void)e;(void)f;(void)g;}
static inline void HelpSystem_DisableToggleWithRButton(void){}

extern bool8 gHelpSystemEnabled;
extern bool8 gHelpSystemToggleWithRButtonDisabled;

#else /* DISABLE_HELP_SYSTEM */

struct HelpSystemListMenu_sub
{
    struct ListMenuItem * items;
    u16 totalItems;
    u16 maxShowed;
    u8 left;
    u8 top;
};

struct HelpSystemListMenu
{
    struct HelpSystemListMenu_sub sub;
    u8 itemsAbove;
    u8 cursorPos;
    u8 state;
    u8 filler_10[0xC];
};

extern struct HelpSystemListMenu gHelpSystemListMenu;
extern struct ListMenuItem gHelpSystemListMenuItems[];
extern bool8 gHelpSystemEnabled;
extern bool8 gHelpSystemToggleWithRButtonDisabled;

// help_system_812B1E0
void SetHelpContextDontCheckBattle(u8);
void SetHelpContextForMap(void);
void SetHelpContext(u8);
bool8 HelpSystem_UpdateHasntSeenIntro(void);
bool8 HelpSystem_IsSinglePlayer(void);
void HelpSystem_Disable(void);
void HelpSystem_Enable(void);
void HelpSystem_EnableToggleWithRButton(void);
bool8 RunHelpMenuSubroutine(struct HelpSystemListMenu * helpListMenu, struct ListMenuItem * listMenuItemsBuffer);
bool8 HelpSystemSubroutine_PrintWelcomeMessage(struct HelpSystemListMenu * helpListMenu, struct ListMenuItem * listMenuItemsBuffer);
bool8 HelpSystemSubroutine_WelcomeWaitButton(struct HelpSystemListMenu * helpListMenu, struct ListMenuItem * listMenuItemsBuffer);
bool8 HelpSystemSubroutine_WelcomeEndGotoMenu(struct HelpSystemListMenu * helpListMenu, struct ListMenuItem * listMenuItemsBuffer);
bool8 HelpSystemSubroutine_MenuInputHandlerMain(struct HelpSystemListMenu * helpListMenu, struct ListMenuItem * listMenuItemsBuffer);
bool8 HelpMenuSubroutine_InitSubmenu(struct HelpSystemListMenu * helpListMenu, struct ListMenuItem * listMenuItemsBuffer);
bool8 HelpMenuSubroutine_ReturnFromSubmenu(struct HelpSystemListMenu * helpListMenu, struct ListMenuItem * listMenuItemsBuffer);
bool8 HelpMenuSubroutine_SubmenuInputHandler(struct HelpSystemListMenu * helpListMenu, struct ListMenuItem * listMenuItemsBuffer);
void HelpSystem_PrintTopicLabel(void);
bool8 HelpMenuSubroutine_HelpItemPrint(struct HelpSystemListMenu * helpListMenu, struct ListMenuItem * listMenuItemsBuffer);
bool8 HelpMenuSubroutine_ReturnFromHelpItem(struct HelpSystemListMenu * helpListMenu, struct ListMenuItem * listMenuItemsBuffer);
bool8 HelpMenuSubroutine_HelpItemWaitButton(struct HelpSystemListMenu * helpListMenu, struct ListMenuItem * listMenuItemsBuffer);
bool8 GetHelpSystemMenuLevel(void);

// help_system
bool8 RunHelpSystemCallback(void);
void SaveCallbacks(void);
void SaveMapGPURegs(void);
void SaveMapTiles(void);
void SaveMapTextColors(void);
void RestoreCallbacks(void);
void RestoreGPURegs(void);
void RestoreMapTiles(void);
void RestoreMapTextColors(void);
void CommitTilemap(void);
void HS_BufferFillMapWithTile1FF(void);
void HS_ShowOrHideWordHELPinTopLeft(u8 mode);
void HS_ShowOrHideControlsGuideInTopRight(u8 mode);
void HS_ShowOrHideMainWindowText(u8 mode);
void HS_SetMainWindowBgBrightness(u8 mode);
void HS_ShowOrHideToplevelTooltipWindow(u8 mode);
void HS_ShowOrHideHeaderAndFooterLines_Lighter(u8 mode);
void HS_ShowOrHideHeaderAndFooterLines_Darker(u8 mode);
void HS_ShowOrHideVerticalBlackBarsAlongSides(u8 mode);
void HS_ShowOrHideHeaderLine_Darker_FooterStyle(u8 mode);
void HS_ShowOrHideScrollArrows(u8 which, u8 mode);
void HelpSystem_PrintTextRightAlign_Row52(const u8 *str);
void HelpSystem_PrintTextAt(const u8 *, u8, u8);
void HelpSystem_PrintQuestionAndAnswerPair(const u8 *a0, const u8 *a1);
void HelpSystem_PrintTopicMouseoverDescription(const u8 *str);
void HelpSystem_FillPanel2(void);
void HelpSystem_FillPanel1(void);
void HelpSystem_InitListMenuController(struct HelpSystemListMenu *, u8, u8);
void HelpSystem_SetInputDelay(u8);
s32 HelpSystem_GetMenuInput(void);
void HS_UpdateMenuScrollArrows(void);

void DecompressAndRenderGlyph(u8 fontId, u16 glyph, struct Bitmap *srcBlit, struct Bitmap *destBlit, u8 *destBuffer, u8 x, u8 y, u8 width, u8 height);
void HelpSystem_PrintTextInTopLeftCorner(const u8 * str);
void HelpSystem_FillPanel3(void);
void PrintListMenuItems(void);
void PlaceListMenuCursor(void);
bool8 MoveCursor(u8 by, u8 dirn);
void BackupHelpContext(void);
void RestoreHelpContext(void);
void HelpSystemRenderText(u8 fontId, u8 * dest, const u8 * src, u8 x, u8 y, u8 width, u8 height);
void HelpSystem_DisableToggleWithRButton(void);

#endif /* DISABLE_HELP_SYSTEM */

#endif //GUARD_HELP_SYSTEM_H
