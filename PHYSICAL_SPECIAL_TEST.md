# Physical/Special Split Testing Guide

## Quick In-Game Test

### Test Pokémon Setup:
1. **Get a Pokémon with high Attack but low Sp.Attack** (like Machamp)
2. **Get a Pokémon with high Sp.Attack but low Attack** (like Alakazam)

### Key Moves to Test:

#### Moves that changed to PHYSICAL (should use Attack stat now):
- **Bite** (Dark) - Previously used Sp.Attack
- **Crunch** (Dark) - Previously used Sp.Attack  
- **Shadow Punch** (Ghost) - Previously used Sp.Attack
- **Aerial Ace** (Flying) - Previously used Sp.Attack

#### Moves that changed to SPECIAL (should use Sp.Attack stat now):
- **Shadow Ball** (Ghost) - Previously used Attack
- **Air Cutter** (Flying) - Previously used Attack

### Test Procedure:
1. Save your game before testing
2. Find a wild Pokémon to battle
3. Use Bite with a high-Attack Pokémon → Should do good damage
4. Use Bite with a high-Sp.Attack Pokémon → Should do poor damage
5. Use Shadow Ball with high-Sp.Attack Pokémon → Should do good damage
6. Use Shadow Ball with high-Attack Pokémon → Should do poor damage

### Expected Results:
- **Before split**: Bite would use Sp.Attack (poor damage from Machamp)
- **After split**: Bite uses Attack (good damage from Machamp)

## Debug Method (Advanced)

If you want to see the split values directly in the code, you can check:
- Open battle_moves.h and search for specific moves
- Look for the `.split = SPLIT_PHYSICAL` or `.split = SPLIT_SPECIAL` field

## Example Damage Differences:

### Bite (Dark type):
- **Gen 1-3 (Type-based)**: Used Sp.Attack because Dark = Special
- **Gen 4+ (Move-based)**: Uses Attack because Bite is a physical move

### Crunch (Dark type):  
- **Gen 1-3**: Used Sp.Attack (Dark type = Special)
- **Gen 4+**: Uses Attack (Crunch is physical)

### Shadow Ball (Ghost type):
- **Gen 1-3**: Used Attack (Ghost type = Physical) 
- **Gen 4+**: Uses Sp.Attack (Shadow Ball is special)
