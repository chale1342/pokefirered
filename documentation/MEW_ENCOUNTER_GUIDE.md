# Mew Encounter - Implementation Guide

## Overview
Mew is now obtainable in Fire Red through a lore-friendly post-game quest that rewards players for completing their Pokédex.

## How to Unlock Mew

### Requirements:
1. **Complete the National Pokédex** - Catch all 150 obtainable Pokémon (excludes Mew)
2. **Show Professor Oak** - Visit Oak's Lab in Pallet Town and show him your completed Pokédex
3. **Listen to Oak's Story** - He will tell you about the mythical Mew and hint at its location

### Mew's Location:
- **Map**: Cerulean Cave B1F (the deepest chamber)
- **Position**: Far eastern side of the chamber (opposite side from Mewtwo)
- **Level**: 30
- **Behavior**: Mew wanders around in a 3x3 area, making it feel more alive and playful

## Story/Lore

After catching all 150 Pokémon and showing Oak your completed Pokédex, he will tell you:

> "Years ago, when I was researching in GUYANA, South America…
> I heard rumors of a mythical POKéMON said to be the ancestor of all others.
> They called it MEW.
> 
> I've spent my whole life searching, but I never found any proof…
> 
> However, I've always suspected that if MEW exists anywhere…
> It would be in a place with immense natural energy.
> Somewhere like… CERULEAN CAVE!
> 
> The psychic energy in that cave is unlike anything else in KANTO.
> 
> If you're brave enough to explore its deepest chamber…
> You might just encounter the legendary MEW yourself!"

## Technical Details

### New Flags Added:
- `FLAG_OAK_MENTIONED_MEW` (0x4A8) - Tracks if Oak has told the player about Mew
- `FLAG_FOUGHT_MEW` (0x4A9) - Tracks if player has encountered Mew
- `FLAG_HIDE_MEW` (0x4AA) - Controls Mew's sprite visibility

### Files Modified:
1. `include/constants/flags.h` - Added new flags
2. `data/maps/PalletTown_ProfessorOaksLab/text.inc` - Oak's Mew hint dialogue
3. `data/maps/PalletTown_ProfessorOaksLab/scripts.inc` - Triggers dialogue after Pokédex completion
4. `data/maps/CeruleanCave_B1F/scripts.inc` - Mew encounter battle script
5. `data/maps/CeruleanCave_B1F/map.json` - Added Mew sprite to map

### Encounter Details:
- **Graphics**: Uses `OBJ_EVENT_GFX_MEW` sprite
- **Movement**: `MOVEMENT_TYPE_WANDER_AROUND` with 3x3 range (playful behavior)
- **Battle Music**: Same as Mewtwo (Gym Leader theme)
- **Level**: 30 (matches Deoxys event level)
- **Respawn**: If defeated or fled from, Mew will reappear (can be caught later)

## Design Philosophy

This implementation keeps the spirit of the original game by:

1. **Rewarding Completion** - Only available after catching all 150 Pokémon
2. **Lore-Friendly** - References Oak's canonical research in Guyana (from the original games/anime)
3. **Appropriate Location** - Cerulean Cave is already the end-game location for Mewtwo
4. **Reasonable Level** - Level 30 makes it catchable but still challenging
5. **Non-Intrusive** - Doesn't change core gameplay, only adds content for dedicated players

## Testing Checklist

- [ ] Complete National Pokédex (catch 150 Pokémon)
- [ ] Visit Professor Oak in Pallet Town
- [ ] Verify Oak gives the Mew hint dialogue
- [ ] Travel to Cerulean Cave B1F
- [ ] Locate Mew wandering on the eastern side
- [ ] Battle Mew (Level 30)
- [ ] Test defeat scenario (Mew should reappear)
- [ ] Test flee scenario (Mew should fly away and reappear)
- [ ] Test capture scenario (Mew should be removed from map)

## Future Enhancements (Optional)

If you want to make Mew even more special:
- Add a special animation or sparkle effect when it appears
- Make it 1% shiny rate (instead of the normal ~0.01%)
- Add a Master Ball as a reward for completing the Pokédex
- Create a certificate or special item from Oak after catching Mew

---

**Branch**: `mew-encounter`
**Status**: Ready for testing
