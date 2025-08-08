# Physical/Special Split Icons Testing Guide

## Implementation Summary

Successfully implemented **Physical/Special split icons** in battle for Pokemon Fire Red! 

### Features Added:
- **Visual indicators** during move selection showing whether moves are Physical, Special, or Status
- **Icons displayed** next to the PP counter during battle move selection
- **Integration** with existing Physical/Special split system

### Files Modified:

1. **src/battle_controller_player.c**
   - Added `MoveSelectionDisplaySplitIcon()` function
   - Added function declaration 
   - Added call to display icons in `MoveSelectionDisplayMoveType()`

2. **src/battle_bg.c**
   - Modified `B_WIN_PP` window template (repositioned and resized)
   - Modified `B_WIN_DUMMY` window template (repositioned, resized, and set palette)

3. **graphics/interface/split_physical.png** - Physical move icon (16x16)
4. **graphics/interface/split_special.png** - Special move icon (16x16)  
5. **graphics/interface/split_status.png** - Status move icon (16x16)

## How to Test In-Game:

### 1. Start a Battle
- Enter any wild Pokemon battle or trainer battle
- When you select "Fight", you'll see the move selection screen

### 2. Look for Split Icons
- **Physical moves** will show a sword/attack icon
- **Special moves** will show a starburst/special icon  
- **Status moves** will show a different status icon
- Icons appear in the **B_WIN_DUMMY** window (left of PP counter)

### 3. Test Different Move Types
Try these moves to verify correct icons:

**Physical Moves (should show physical icon):**
- Tackle, Bite, Earthquake, Body Slam, Double-Edge
- Scratch, Slash, Mega Punch, Karate Chop

**Special Moves (should show special icon):**
- Thunderbolt, Flamethrower, Ice Beam, Surf, Psychic
- Shadow Ball, Energy Ball, Mud Bomb

**Status Moves (should show status icon):**
- Sleep Powder, Thunder Wave, Toxic, Swords Dance
- Recover, Light Screen, Reflect

### 4. Visual Verification
- Icons should be **clearly visible** and **properly aligned**
- Icons should **change** when you cursor between different moves
- Icons should **load properly** without graphical glitches
- **Palette should be correct** (not displaying wrong colors)

## Technical Details:

### Icon Mapping:
- **SPLIT_PHYSICAL (0)** = `split_physical.4bpp/.gbapal`
- **SPLIT_SPECIAL (1)** = `split_special.4bpp/.gbapal`  
- **SPLIT_STATUS (2)** = `split_status.4bpp/.gbapal`

### Window Configuration:
- **B_WIN_DUMMY**: Left side (tilemapLeft: 21), Palette 10, 2x2 size
- **B_WIN_PP**: Right side (tilemapLeft: 23), Palette 5, 2x2 size

### Graphics Format:
- **Individual .4bpp files**: 4-bit per pixel graphics for each icon
- **Individual .gbapal files**: 16-color palette for each icon
- **Icon size**: 16x16 pixels each

## Expected Results:
✅ **Success**: Icons display correctly and change based on move split
✅ **Success**: No graphical glitches or palette issues
✅ **Success**: Icons positioned properly relative to PP counter
✅ **Success**: Consistent behavior across all battle types

## Troubleshooting:
- If icons don't appear: Check that graphics files compiled correctly
- If wrong colors: Verify palette 10 is loading properly
- If positioning issues: Check window template configuration in battle_bg.c
- If crashes: Verify move data has valid split values

The implementation is complete and should be fully functional in-game!
