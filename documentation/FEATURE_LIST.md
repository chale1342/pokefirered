# Pokemon FireRed Enhanced - Complete Feature List

**Version**: 1.5+  
**Base**: pokefirered decomp project  
**Author**: chale1342

---

## Table of Contents
1. [Experience & Training](#1-experience--training)
2. [Battle Enhancements](#2-battle-enhancements)
3. [UI & Quality of Life](#3-ui--quality-of-life)
4. [Movement & Navigation](#4-movement--navigation)
5. [Pokemon Availability](#5-pokemon-availability)
6. [Difficulty & Balance](#6-difficulty--balance)
7. [Post-Game Content](#7-post-game-content)
8. [Bug Fixes & Improvements](#8-bug-fixes--improvements)

---

## 1. Experience & Training

### 1.1 Enhanced Exp. Share
- **Full XP Distribution**: Both the active battler AND all Pokemon holding Exp. Share receive **full experience points**
- **No XP Division**: Unlike vanilla where XP is split, now both get 100% of the battle rewards
- **Same Behavior as Modern Games**: Matches the Exp. Share mechanics from Gen 6+
- **Files**: `src/battle_script_commands.c`, `include/global.h`

### 1.2 Capture Experience (Let's Go Style)
- **XP on Catch**: Pokemon in your party gain experience when you successfully catch wild Pokemon
- **Inspired by Pokemon Let's Go**: Encourages catching Pokemon for training
- **Files**: Battle script commands

---

## 2. Battle Enhancements

### 2.1 Physical/Special Split
- **Gen 4+ Mechanics**: Moves are categorized by Physical/Special/Status individually, not by type
- **Visual Split Icons**: During move selection, icons show whether each move is Physical, Special, or Status
- **Icon Display**: Appears next to PP counter in battle UI
- **Better Move Balance**: Makes many Pokemon more viable (e.g., Gyarados can now use physical Water moves)
- **Files**: `src/battle_controller_player.c`, `src/battle_bg.c`, `graphics/interface/split_*.png`

### 2.2 Type Effectiveness Indicators
- **Color-Coded Arrows**: Move selection screen shows effectiveness against current opponent
  - **Red Down Arrow**: Not very effective
  - **Green Up Arrow**: Super effective
  - **White/Neutral**: Normal effectiveness
- **Instant Feedback**: No need to memorize type charts
- **Files**: `src/battle_controller_player.c`

### 2.3 Battle Speed Options
- **Three Speed Settings**: Normal / Fast (2x) / Ultra Fast (4x)
- **Configurable in Options**: Added to options menu
- **Affects**:
  - Battle message delays
  - Animation speeds
  - Pause command timing
- **Persistent**: Setting saved to save file
- **Files**: `src/option_menu.c`, `src/battle_script_commands.c`, `src/strings.c`

### 2.4 Move Info Popup (START button)
- **Compact Info Window**: Press START during move selection to see PWR/ACC popup
- **Non-Intrusive**: Toggles on/off with START
- **Files**: Battle UI code

---

## 3. UI & Quality of Life

### 3.1 Options Menu Pagination (L/R Navigation)
- **Multiple Pages**: Options menu expanded with L/R button page switching
- **More Options Available**: Room for additional settings without cramming
- **Smooth Navigation**: L = previous page, R = next page
- **Files**: `src/option_menu.c`

### 3.2 Enhanced Text Speed
- **FASTER Option Added**: New fastest text speed option beyond vanilla "Fast"
- **Options**: Slow / Normal / Fast / **Faster**
- **Files**: `src/option_menu.c`

### 3.3 Auto Scroll Text
- **Auto-Advance Dialogue**: Text automatically advances without button presses
- **Optional Toggle**: On/Off in options menu
- **Useful for**: Speedruns, rereading dialogues
- **Files**: `src/option_menu.c`, text system

### 3.4 Nature Stat Indicators (Summary Screen)
- **Colored Stats**: Pokemon summary screen shows nature-boosted stats in **red** and lowered stats in **blue**
- **Instant Recognition**: No need to memorize which nature affects which stats
- **Files**: Pokemon summary screen code

### 3.5 Party Menu Improvements
- **Move Held Items (SELECT)**: Use SELECT button to move/swap held items between party Pokemon directly
- **Faster Item Management**: No need to take items out and give them again
- **Files**: Party menu code

### 3.6 Help System Disabled
- **Memory Optimization**: Disabled Help System feature to reclaim ~16KB EWRAM
- **Better Performance**: Freed memory improves stability (now 244,184B / 256KB = ~93.15% used)
- **Behind Compile Flag**: `DISABLE_HELP_SYSTEM` stubs
- **Files**: Memory management

---

## 4. Movement & Navigation

### 4.1 Indoor Running
- **Run Everywhere**: Running enabled in ALL indoor locations
- **No Restrictions**: Pokemon Centers, Gyms, houses, caves, etc.
- **262 Maps Modified**: All indoor map types updated
- **Popular ROM Hack Feature**: Commonly requested QoL improvement
- **Files**: All `data/maps/*/map.json` files with `MAP_TYPE_INDOOR`

### 4.2 Auto-Run Toggle
- **Optional Auto-Run**: Toggle always-running mode in options menu
- **No Need to Hold B**: Run by default, walk by holding B (reversed controls)
- **Configurable**: Can be turned on/off
- **Files**: `src/option_menu.c`, movement code

### 4.3 Running Shoes NPC Relocated
- **Earlier Access**: Running Shoes given by NPC relocated for easier early-game access
- **Prevents Duplicates**: Fixed issues with duplicate aides
- **Files**: Map event scripts

### 4.4 Permanent Cut Trees
- **Trees Stay Cut**: Once you cut a tree, it stays cut permanently
- **No Respawn**: Uses permanent flags instead of temporary flags
- **All Cut Trees Updated**: Applied to every cuttable tree across Kanto
- **Convenience**: No need to re-cut trees every time
- **Files**: Map scripts, flag definitions

---

## 5. Pokemon Availability

### 5.1 LeafGreen Exclusives Added to FireRed
- **Version Exclusives Available**: All LeafGreen-exclusive Pokemon added to FireRed wild encounters
- **Specific Pokemon**:
  - Slowpoke, Slowbro, Slowking
  - Staryu, Starmie
  - Azumarill line
  - Magmar
  - Pinsir
  - Misdreavus
  - Others
- **Locations Adjusted**: Placed in lore-appropriate locations
- **Files**: `src/data/wild_encounters.h`

### 5.2 Trade Evolution Fixes
- **Alternative Evolution Methods**: Trade evolutions can now evolve without trading
- **Specific Changes**:
  - Alakazam, Machamp, Golem, Gengar: Level-up alternatives
  - Item evolutions adjusted
- **Preserves Single-Player Experience**: No need for second game or trading
- **Files**: Evolution data

### 5.3 Early Water Encounter Improvements
- **Help for Charmander Players**: Improved early fishing encounters to help against Brock
- **Better Old Rod Encounters**:
  - Tentacool and other water types available before Pewter Gym
  - Slots 0-1 optimized for useful Pokemon
- **Locations**: Viridian City, Pallet Town
- **Files**: `src/data/wild_encounters.h`

### 5.4 Lower Fishing Encounter Levels
- **Max Level 6**: Early fishing Pokemon capped at level 6
- **Easier Early Training**: Prevents over-leveling from fishing
- **Files**: Wild encounter data

### 5.5 Fishing Guru Relocation
- **Old Rod NPC**: Moved to Viridian City Pokemon Center for earlier access
- **Good Rod NPC**: Brother restored to Vermilion house
- **Flavor Text**: Updated dialogues explaining the move
- **Files**: Map events, NPC scripts

### 5.6 Missing Pokemon Added
- **Jynx**: Added to Seafoam Islands B1F to complete gift/trade alternatives
- **Others**: Various Pokemon made catchable that were previously trade/gift-only
- **Files**: Wild encounter tables

---

## 6. Difficulty & Balance

### 6.1 Gym Leader Difficulty Buffs
- **All 8 Gym Leaders Enhanced**:
  - **Higher IVs**: 25-31 IVs instead of 0-15
  - **Better Movesets**: Optimized moves, better coverage
  - **Expanded Teams**: Some leaders have 5-6 Pokemon instead of 3-4
  - **Held Items**: Mid-late game leaders have held items
  - **Level Increases**: Slight level bumps for end-game leaders

- **Specific Leaders Buffed**:
  - **Brock**: Improved team
  - **Misty**: Better movesets
  - **Lt. Surge**: Expanded team
  - **Erika**: Coverage moves added
  - **Koga**: 6 Pokemon team, held items
  - **Sabrina**: Better team composition, held items
  - **Blaine**: Full 6 Pokemon team, held items
  - **Giovanni**: Enhanced final team

- **Restored Trainers**: Fixed missing trainer definitions (GentlemanThomas, GentlemanArthur, GentlemanTucker)
- **Files**: Trainer data files

### 6.2 Shop Improvements (Let's Go Style)
- **TM Availability**: TMs available for purchase in shops
- **Better Shop Inventory**: Improved Poke Mart stock
- **Quality of Life**: Less grinding for TMs
- **Files**: Shop data

---

## 7. Post-Game Content

### 7.1 Mew Encounter (Post-Pokédex Reward)
- **Unlock Condition**: Catch all 150 Pokemon (excludes Mew) and show Oak
- **Oak's Hint**: Professor Oak tells you about his research in Guyana and hints at Cerulean Cave
- **Location**: Cerulean Cave B1F, far eastern side (opposite Mewtwo)
- **Level**: 30
- **Behavior**: Wanders in a 3x3 area (playful movement)
- **Respawnable**: Can be fought again if defeated or fled from
- **Lore-Friendly**: References Oak's canonical South American research
- **New Flags**:
  - `FLAG_OAK_MENTIONED_MEW` (0x4A8)
  - `FLAG_FOUGHT_MEW` (0x4A9)
  - `FLAG_HIDE_MEW` (0x4AA)
- **Files**: 
  - `include/constants/flags.h`
  - `data/maps/PalletTown_ProfessorOaksLab/text.inc`
  - `data/maps/PalletTown_ProfessorOaksLab/scripts.inc`
  - `data/maps/CeruleanCave_B1F/scripts.inc`
  - `data/maps/CeruleanCave_B1F/map.json`

### 7.2 SS Anne Healing NPC
- **Permanent Healing**: Added healing NPC to SS Anne Room 3
- **Convenience**: Don't have to leave ship to heal
- **Files**: SS Anne map events

---

## 8. Bug Fixes & Improvements

### 8.1 Intro Sequence Fixes
- **Restored Textbox**: Fixed intro textbox display and positioning
- **Fixed Player Name**: Player name properly set
- **Fixed Rival Name**: Rival defaults to "Shane" (skip rival naming)
- **Files**: Intro sequence code

### 8.2 Flag Definition Fixes
- **Removed Duplicates**: Fixed `FLAG_CUT_TREE_ROUTE2_2` duplicate definition
- **Clean Flags**: No conflicting flag IDs
- **Files**: `include/constants/flags.h`

### 8.3 Type Effectiveness Arrow Display
- **Fixed for Long Names**: Type effectiveness arrows now work correctly even with longer type names
- **Files**: Battle UI code

### 8.4 Fishing Encounter Table Fixes
- **Pallet Town**: Fixed early fishing encounters
- **Viridian City**: Fixed fishing spawn tables
- **Files**: Wild encounter data

---

## Building the ROM

```bash
# Clean build
make clean

# Build (use all CPU cores)
make -j$(nproc)

# Output: pokefirered.gba
```

---

## Compatibility

- ✅ **Save Compatible**: Maintains compatibility with vanilla FireRed saves
- ✅ **Emulator Support**: Works on all standard GBA emulators (VBA, mGBA, etc.)
- ✅ **Flash Cart Compatible**: Fully functional on GBA flash cartridges
- ✅ **Settings Persistent**: Options menu settings saved to save file
- ✅ **Original Mechanics Preserved**: Core gameplay unchanged

---

## Technical Notes

### Memory Usage
- **EWRAM**: 244,184 B / 256 KB (~93.15%)
- **IWRAM**: 29,832 B / 32 KB (~91.04%)
- **ROM**: 15.4 MB / 32 MB (~45.89%)

### Build Requirements
- **agbcc compiler** (included)
- **make** build system
- **Python 3** (for build tools)
- **libpng** (for graphics conversion)

### Graphics Formats
- **Sprites**: 4bpp (16-color) .png files
- **Palettes**: .gbapal files (auto-generated from .pal)
- **Auto-compilation**: Build system handles conversions

---

## Credits

- **Base Project**: [pret/pokefirered](https://github.com/pret/pokefirered) decomp team
- **Enhancements**: chale1342
- **Physical/Special Split**: Community implementation
- **Testing & Feedback**: Community contributors

---

## Version History

- **v1.5**: Mew encounter, options menu pagination, enhanced features
- **v1.0**: Initial enhanced release with Exp. Share, battle speed, indoor running
- **Pre-1.0**: Progressive feature additions and testing

---

**Last Updated**: November 7, 2025
