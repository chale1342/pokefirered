#!/usr/bin/env python3
"""
Generate a comprehensive "How to Obtain Every Pokemon" guide
Includes wild encounters, evolutions, gifts, legendaries, starters, trades, etc.
"""

import json
from collections import defaultdict
import re

# Evolution method constants (from the game code)
EVO_METHODS = {
    'EVO_FRIENDSHIP': 'Friendship (220+)',
    'EVO_FRIENDSHIP_DAY': 'Friendship (220+) during Day',
    'EVO_FRIENDSHIP_NIGHT': 'Friendship (220+) during Night',
    'EVO_LEVEL': 'Level',
    'EVO_TRADE': 'Trade',
    'EVO_TRADE_ITEM': 'Trade while holding',
    'EVO_ITEM': 'Use item',
    'EVO_LEVEL_ATK_GT_DEF': 'Level (Attack > Defense)',
    'EVO_LEVEL_ATK_LT_DEF': 'Level (Attack < Defense)',
    'EVO_LEVEL_ATK_EQ_DEF': 'Level (Attack = Defense)',
    'EVO_LEVEL_SILCOON': 'Level (Personality-based)',
    'EVO_LEVEL_CASCOON': 'Level (Personality-based)',
    'EVO_LEVEL_NINJASK': 'Level',
    'EVO_LEVEL_SHEDINJA': 'Level 20 (auto-created if party space)',
    'EVO_BEAUTY': 'Beauty stat'
}

ITEMS = {
    'ITEM_THUNDER_STONE': 'Thunder Stone',
    'ITEM_WATER_STONE': 'Water Stone',
    'ITEM_FIRE_STONE': 'Fire Stone',
    'ITEM_LEAF_STONE': 'Leaf Stone',
    'ITEM_MOON_STONE': 'Moon Stone',
    'ITEM_SUN_STONE': 'Sun Stone',
    'ITEM_KINGS_ROCK': "King's Rock",
    'ITEM_METAL_COAT': 'Metal Coat',
    'ITEM_DRAGON_SCALE': 'Dragon Scale',
    'ITEM_UP_GRADE': 'Up-Grade',
}

# Parse evolution data
evolution_data = {}
with open('src/data/pokemon/evolution.h', 'r') as f:
    content = f.read()
    
    # Extract evolution entries
    pattern = r'\[SPECIES_(\w+)\]\s*=\s*\{\{(.*?)\}\}'
    matches = re.findall(pattern, content, re.DOTALL)
    
    for species, evos in matches:
        evolutions = []
        # Parse individual evolutions  
        evo_pattern = r'(\w+),\s*(\w+),\s*SPECIES_(\w+)'
        evo_matches = re.findall(evo_pattern, evos)
        
        for method, param, target in evo_matches:
            evolutions.append({
                'method': method,
                'param': param,
                'target': target
            })
        
        if evolutions:
            evolution_data[species] = evolutions

# Load wild encounters
pokemon_locations = defaultdict(list)
with open('src/data/wild_encounters.json', 'r') as f:
    data = json.load(f)

for group in data['wild_encounter_groups']:
    if 'encounters' in group:
        for encounter in group['encounters']:
            map_name = encounter.get('map', 'Unknown').replace('MAP_', '').replace('_', ' ').title()
            
            # Process all encounter types
            for encounter_type in ['land_mons', 'water_mons', 'fishing_mons', 'rock_smash_mons']:
                if encounter_type in encounter:
                    enc_data = encounter[encounter_type]
                    if 'mons' in enc_data:
                        for i, mon in enumerate(enc_data['mons']):
                            species = mon['species'].replace('SPECIES_', '')
                            min_level = mon['min_level']
                            max_level = mon['max_level']
                            level_str = f"{min_level}-{max_level}" if min_level != max_level else str(min_level)
                            
                            method = 'Walking/Grass'
                            if encounter_type == 'water_mons':
                                method = 'Surfing'
                            elif encounter_type == 'rock_smash_mons':
                                method = 'Rock Smash'
                            elif encounter_type == 'fishing_mons':
                                rod = 'Fishing'
                                if 'groups' in enc_data:
                                    groups = enc_data['groups']
                                    if 'old_rod' in groups and i in groups['old_rod']:
                                        rod = 'Old Rod'
                                    elif 'good_rod' in groups and i in groups['good_rod']:
                                        rod = 'Good Rod'
                                    elif 'super_rod' in groups and i in groups['super_rod']:
                                        rod = 'Super Rod'
                                method = rod
                            
                            pokemon_locations[species].append({
                                'location': map_name,
                                'method': method,
                                'levels': level_str
                            })

# Known gift/special Pokemon (based on FireRed game knowledge)
SPECIAL_POKEMON = {
    # Starters
    'BULBASAUR': [{'method': 'Starter', 'location': 'Pallet Town (Professor Oak)', 'details': 'Choose as starter Pokemon'}],
    'CHARMANDER': [{'method': 'Starter', 'location': 'Pallet Town (Professor Oak)', 'details': 'Choose as starter Pokemon'}],
    'SQUIRTLE': [{'method': 'Starter', 'location': 'Pallet Town (Professor Oak)', 'details': 'Choose as starter Pokemon'}],
    
    # Fossils
    'OMANYTE': [{'method': 'Fossil', 'location': 'Mt. Moon (Helix Fossil)', 'details': 'Revive at Cinnabar Island Lab'}],
    'KABUTO': [{'method': 'Fossil', 'location': 'Mt. Moon (Dome Fossil)', 'details': 'Revive at Cinnabar Island Lab'}],
    'AERODACTYL': [{'method': 'Fossil', 'location': 'Pewter City Museum (Old Amber)', 'details': 'Revive at Cinnabar Island Lab'}],
    
    # Gifts
    'EEVEE': [{'method': 'Gift', 'location': 'Celadon City (Mansion)', 'details': 'Receive from man on top floor'}],
    'HITMONLEE': [{'method': 'Gift', 'location': 'Saffron City (Fighting Dojo)', 'details': 'Choose after defeating Dojo'}],
    'HITMONCHAN': [{'method': 'Gift', 'location': 'Saffron City (Fighting Dojo)', 'details': 'Choose after defeating Dojo'}],
    'LAPRAS': [{'method': 'Gift', 'location': 'Silph Co. 7F', 'details': 'Receive from Silph employee'}],
    'TOGEPI': [{'method': 'Gift', 'location': 'Five Island (Water Labyrinth)', 'details': 'Receive egg from man'}],
    
    # Legendaries
    'ARTICUNO': [{'method': 'Legendary', 'location': 'Seafoam Islands (B4F)', 'details': 'Lv. 50, can only catch one'}],
    'ZAPDOS': [{'method': 'Legendary', 'location': 'Power Plant', 'details': 'Lv. 50, can only catch one'}],
    'MOLTRES': [{'method': 'Legendary', 'location': 'Mt. Ember (Summit)', 'details': 'Lv. 50, can only catch one'}],
    'MEWTWO': [{'method': 'Legendary', 'location': 'Cerulean Cave (B1F)', 'details': 'Lv. 70, can only catch one, requires defeating Elite Four'}],
    'RAIKOU': [{'method': 'Legendary Roaming', 'location': 'Kanto (Roaming)', 'details': 'Lv. 50, roams after choosing Squirtle, use Repels + Route encounter'}],
    'ENTEI': [{'method': 'Legendary Roaming', 'location': 'Kanto (Roaming)', 'details': 'Lv. 50, roams after choosing Bulbasaur, use Repels + Route encounter'}],
    'SUICUNE': [{'method': 'Legendary Roaming', 'location': 'Kanto (Roaming)', 'details': 'Lv. 50, roams after choosing Charmander, use Repels + Route encounter'}],
    'LUGIA': [{'method': 'Event', 'location': 'Navel Rock', 'details': 'Lv. 70, requires Mystery Gift event item (MysticTicket)'}],
    'HO_OH': [{'method': 'Event', 'location': 'Navel Rock', 'details': 'Lv. 70, requires Mystery Gift event item (MysticTicket)'}],
    'DEOXYS': [{'method': 'Event', 'location': 'Birth Island', 'details': 'Lv. 30, requires Mystery Gift event item (AuroraTicket)'}],
    
    # Snorlax
    'SNORLAX': [{'method': 'Static Encounter', 'location': 'Route 12 or Route 16', 'details': 'Lv. 30, wake with Poke Flute, two available'}],
}

# Game Corner prizes (FireRed)
GAME_CORNER_PRIZES = {
    'ABRA': [{'method': 'Game Corner Prize', 'location': 'Celadon City Game Corner', 'details': '230 Coins'}],
    'CLEFAIRY': [{'method': 'Game Corner Prize', 'location': 'Celadon City Game Corner', 'details': '500 Coins'}],
    'DRATINI': [{'method': 'Game Corner Prize', 'location': 'Celadon City Game Corner', 'details': '2100 Coins (FireRed) or 4600 Coins (LeafGreen)'}],
    'SCYTHER': [{'method': 'Game Corner Prize', 'location': 'Celadon City Game Corner', 'details': '5500 Coins (FireRed only)'}],
    'PORYGON': [{'method': 'Game Corner Prize', 'location': 'Celadon City Game Corner', 'details': '9999 Coins'}],
}

# In-game trades
IN_GAME_TRADES = {
    'FARFETCHD': [{'method': 'In-Game Trade', 'location': 'Vermilion City', 'details': "Trade Spearow for Farfetch'd (nicknamed DUX)"}],
    'MR_MIME': [{'method': 'In-Game Trade', 'location': 'Route 2', 'details': 'Trade Abra for Mr. Mime (nicknamed MARCEL)'}],
    'JYNX': [{'method': 'In-Game Trade', 'location': 'Cerulean City', 'details': 'Trade Poliwhirl for Jynx (nicknamed ZYNX)'}],
    'LICKITUNG': [{'method': 'In-Game Trade', 'location': 'Route 18', 'details': 'Trade Slowbro for Lickitung (nicknamed MARC)'}],
    'ELECTRODE': [{'method': 'In-Game Trade', 'location': 'Cinnabar Island', 'details': 'Trade Raichu for Electrode (nicknamed DORIS)'}],
    'TANGELA': [{'method': 'In-Game Trade', 'location': 'Cinnabar Island', 'details': 'Trade Venonat for Tangela (nicknamed CRINKLES)'}],
    'SEEL': [{'method': 'In-Game Trade', 'location': 'Cinnabar Island', 'details': 'Trade Ponyta for Seel (nicknamed SAILOR)'}],
}

# Combine special encounters
for species, encounters in GAME_CORNER_PRIZES.items():
    if species in SPECIAL_POKEMON:
        SPECIAL_POKEMON[species].extend(encounters)
    else:
        SPECIAL_POKEMON[species] = encounters

for species, encounters in IN_GAME_TRADES.items():
    if species in SPECIAL_POKEMON:
        SPECIAL_POKEMON[species].extend(encounters)
    else:
        SPECIAL_POKEMON[species] = encounters

# Build complete Pokemon list
all_species = set()
all_species.update(pokemon_locations.keys())
all_species.update(evolution_data.keys())
all_species.update(SPECIAL_POKEMON.keys())

# Add evolved forms to the list
for species, evos in evolution_data.items():
    for evo in evos:
        all_species.add(evo['target'])

# Generate comprehensive guide
with open('COMPLETE_POKEMON_GUIDE.txt', 'w') as f:
    f.write("=" * 100 + "\n")
    f.write(" " * 25 + "POKEMON FIRE RED - COMPLETE OBTAINABILITY GUIDE\n")
    f.write("=" * 100 + "\n\n")
    f.write("This guide shows how to obtain EVERY Pokemon in Fire Red, including:\n")
    f.write("- Wild Encounters (walking, surfing, fishing, rock smash)\n")
    f.write("- Evolution methods and requirements\n")
    f.write("- Gift Pokemon and special encounters\n")
    f.write("- Legendary Pokemon locations\n")
    f.write("- Starter Pokemon choices\n")
    f.write("- Fossil Pokemon\n")
    f.write("- Game Corner prizes\n")
    f.write("- In-game trades\n")
    f.write("\n" + "=" * 100 + "\n\n")
    
    for species in sorted(all_species):
        if species == 'NONE':
            continue
            
        f.write("=" * 100 + "\n")
        f.write(f"{species.upper()}\n")
        f.write("-" * 100 + "\n")
        
        has_method = False
        
        # Wild encounters
        if species in pokemon_locations:
            f.write("\n>>> WILD ENCOUNTERS:\n")
            location_groups = defaultdict(list)
            for loc in pokemon_locations[species]:
                key = (loc['location'], loc['method'])
                location_groups[key].append(loc)
            
            for (location, method), encounters in sorted(location_groups.items()):
                f.write(f"    Location: {location}\n")
                f.write(f"    Method:   {method}\n")
                for enc in encounters:
                    f.write(f"      Levels: {enc['levels']:>6}\n")
            has_method = True
        
        # Evolution methods
        # Find who evolves INTO this species
        evolves_from = []
        for base_species, evos in evolution_data.items():
            for evo in evos:
                if evo['target'] == species:
                    evolves_from.append({
                        'from': base_species,
                        'method': evo['method'],
                        'param': evo['param']
                    })
        
        if evolves_from:
            f.write("\n>>> EVOLUTION:\n")
            for evo_info in evolves_from:
                method_name = EVO_METHODS.get(evo_info['method'], evo_info['method'])
                from_species = evo_info['from'].title()
                
                if evo_info['method'] == 'EVO_LEVEL':
                    f.write(f"    Evolves from: {from_species} at Level {evo_info['param']}\n")
                elif evo_info['method'] == 'EVO_ITEM':
                    item_name = ITEMS.get(evo_info['param'], evo_info['param'])
                    f.write(f"    Evolves from: {from_species} using {item_name}\n")
                elif evo_info['method'] == 'EVO_TRADE':
                    f.write(f"    Evolves from: {from_species} when traded\n")
                elif evo_info['method'] == 'EVO_TRADE_ITEM':
                    item_name = ITEMS.get(evo_info['param'], evo_info['param'])
                    f.write(f"    Evolves from: {from_species} when traded while holding {item_name}\n")
                elif evo_info['method'] in ['EVO_FRIENDSHIP', 'EVO_FRIENDSHIP_DAY', 'EVO_FRIENDSHIP_NIGHT']:
                    f.write(f"    Evolves from: {from_species} with {method_name}\n")
                elif evo_info['method'] in ['EVO_LEVEL_ATK_GT_DEF', 'EVO_LEVEL_ATK_LT_DEF', 'EVO_LEVEL_ATK_EQ_DEF']:
                    f.write(f"    Evolves from: {from_species} at Level {evo_info['param']} ({method_name})\n")
                elif evo_info['method'] == 'EVO_BEAUTY':
                    f.write(f"    Evolves from: {from_species} with Beauty stat {evo_info['param']}+\n")
                elif evo_info['method'] == 'EVO_LEVEL_SHEDINJA':
                    f.write(f"    Special: Automatically created when Nincada evolves if you have a free party slot\n")
                else:
                    f.write(f"    Evolves from: {from_species} via {method_name} (param: {evo_info['param']})\n")
            has_method = True
        
        # Special encounters
        if species in SPECIAL_POKEMON:
            f.write("\n>>> SPECIAL ENCOUNTER:\n")
            for encounter in SPECIAL_POKEMON[species]:
                f.write(f"    Method:   {encounter['method']}\n")
                f.write(f"    Location: {encounter['location']}\n")
                f.write(f"    Details:  {encounter['details']}\n")
                f.write("\n")
            has_method = True
        
        if not has_method:
            f.write("\n    >>> NO OBTAINABILITY DATA FOUND <<<\n")
        
        f.write("\n")

# Generate CSV version
with open('COMPLETE_POKEMON_GUIDE.csv', 'w') as f:
    f.write("Pokemon,Obtainability Method,Location/Details,Level/Requirement\n")
    
    for species in sorted(all_species):
        if species == 'NONE':
            continue
        
        # Wild encounters
        if species in pokemon_locations:
            for loc in pokemon_locations[species]:
                location = loc['location'].replace(',', ';')
                method = f"Wild - {loc['method']}".replace(',', ';')
                f.write(f"{species},{method},{location},Lv {loc['levels']}\n")
        
        # Evolutions
        evolves_from = []
        for base_species, evos in evolution_data.items():
            for evo in evos:
                if evo['target'] == species:
                    method_name = EVO_METHODS.get(evo['method'], evo['method'])
                    from_species = base_species.title()
                    
                    if evo['method'] == 'EVO_LEVEL':
                        f.write(f"{species},Evolution,From {from_species},Level {evo['param']}\n")
                    elif evo['method'] == 'EVO_ITEM':
                        item_name = ITEMS.get(evo['param'], evo['param'])
                        f.write(f"{species},Evolution,From {from_species} + {item_name},Use Stone\n")
                    elif evo['method'] == 'EVO_TRADE':
                        f.write(f"{species},Evolution,From {from_species},Trade\n")
                    elif evo['method'] == 'EVO_TRADE_ITEM':
                        item_name = ITEMS.get(evo['param'], evo['param'])
                        f.write(f"{species},Evolution,From {from_species} + {item_name},Trade\n")
                    else:
                        f.write(f"{species},Evolution,From {from_species},{method_name}\n")
        
        # Special
        if species in SPECIAL_POKEMON:
            for encounter in SPECIAL_POKEMON[species]:
                method = encounter['method'].replace(',', ';')
                location = encounter['location'].replace(',', ';')
                details = encounter['details'].replace(',', ';')
                f.write(f"{species},{method},{location},{details}\n")

print("=" * 80)
print("COMPLETE POKEMON GUIDE GENERATED!")
print("=" * 80)
print(f"Files created:")
print(f"  - COMPLETE_POKEMON_GUIDE.txt (detailed text format)")
print(f"  - COMPLETE_POKEMON_GUIDE.csv (Excel-compatible)")
print(f"\nCoverage:")
print(f"  - {len(pokemon_locations)} species with wild encounters")
print(f"  - {len(evolution_data)} species with evolution data")
print(f"  - {len(SPECIAL_POKEMON)} special encounters (gifts, legendaries, trades, etc.)")
print(f"  - {len(all_species)} total unique species documented")
print("=" * 80)
