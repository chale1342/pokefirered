#!/usr/bin/env python3
"""
Generate a comprehensive Pokemon location guide from wild_encounters.json
"""

import json
from collections import defaultdict

# Load the wild encounters data
with open('src/data/wild_encounters.json', 'r') as f:
    data = json.load(f)

# Dictionary to store pokemon locations
# Format: {species_name: [(location, encounter_type, levels, rate)]}
pokemon_locations = defaultdict(list)

# Parse encounters
for group in data['wild_encounter_groups']:
    if 'encounters' in group:
        for encounter in group['encounters']:
            map_name = encounter.get('map', 'Unknown').replace('MAP_', '').replace('_', ' ').title()
            
            # Process land encounters
            if 'land_mons' in encounter:
                land_data = encounter['land_mons']
                if 'mons' in land_data:
                    for mon in land_data['mons']:
                        species = mon['species'].replace('SPECIES_', '').title()
                        min_level = mon['min_level']
                        max_level = mon['max_level']
                        level_str = f"{min_level}-{max_level}" if min_level != max_level else str(min_level)
                        pokemon_locations[species].append({
                            'location': map_name,
                            'method': 'Walking/Grass',
                            'levels': level_str,
                            'rate': land_data.get('encounter_rate', 'N/A')
                        })
            
            # Process water encounters
            if 'water_mons' in encounter:
                water_data = encounter['water_mons']
                if 'mons' in water_data:
                    for mon in water_data['mons']:
                        species = mon['species'].replace('SPECIES_', '').title()
                        min_level = mon['min_level']
                        max_level = mon['max_level']
                        level_str = f"{min_level}-{max_level}" if min_level != max_level else str(min_level)
                        pokemon_locations[species].append({
                            'location': map_name,
                            'method': 'Surfing',
                            'levels': level_str,
                            'rate': water_data.get('encounter_rate', 'N/A')
                        })
            
            # Process fishing encounters
            if 'fishing_mons' in encounter:
                fishing_data = encounter['fishing_mons']
                if 'mons' in fishing_data:
                    for i, mon in enumerate(fishing_data['mons']):
                        species = mon['species'].replace('SPECIES_', '').title()
                        min_level = mon['min_level']
                        max_level = mon['max_level']
                        level_str = f"{min_level}-{max_level}" if min_level != max_level else str(min_level)
                        
                        # Determine rod type
                        rod_type = 'Unknown Rod'
                        if 'groups' in encounter['fishing_mons']:
                            groups = encounter['fishing_mons']['groups']
                            if 'old_rod' in groups and i in groups['old_rod']:
                                rod_type = 'Old Rod'
                            elif 'good_rod' in groups and i in groups['good_rod']:
                                rod_type = 'Good Rod'
                            elif 'super_rod' in groups and i in groups['super_rod']:
                                rod_type = 'Super Rod'
                        
                        pokemon_locations[species].append({
                            'location': map_name,
                            'method': f'Fishing ({rod_type})',
                            'levels': level_str,
                            'rate': fishing_data.get('encounter_rate', 'N/A')
                        })
            
            # Process rock smash encounters
            if 'rock_smash_mons' in encounter:
                rock_data = encounter['rock_smash_mons']
                if 'mons' in rock_data:
                    for mon in rock_data['mons']:
                        species = mon['species'].replace('SPECIES_', '').title()
                        min_level = mon['min_level']
                        max_level = mon['max_level']
                        level_str = f"{min_level}-{max_level}" if min_level != max_level else str(min_level)
                        pokemon_locations[species].append({
                            'location': map_name,
                            'method': 'Rock Smash',
                            'levels': level_str,
                            'rate': rock_data.get('encounter_rate', 'N/A')
                        })

# Generate text file
with open('POKEMON_LOCATIONS.txt', 'w') as f:
    f.write("=" * 80 + "\n")
    f.write("POKEMON FIRE RED - COMPLETE LOCATION GUIDE\n")
    f.write("=" * 80 + "\n\n")
    f.write(f"Total Pokemon with wild encounters: {len(pokemon_locations)}\n\n")
    
    # Sort pokemon alphabetically
    for species in sorted(pokemon_locations.keys()):
        locations = pokemon_locations[species]
        f.write("=" * 80 + "\n")
        f.write(f"{species.upper()}\n")
        f.write("-" * 80 + "\n")
        
        # Group by location for cleaner output
        location_groups = defaultdict(list)
        for loc in locations:
            key = (loc['location'], loc['method'])
            location_groups[key].append(loc)
        
        for (location, method), encounters in sorted(location_groups.items()):
            f.write(f"\nLocation: {location}\n")
            f.write(f"Method:   {method}\n")
            for enc in encounters:
                f.write(f"  Levels: {enc['levels']:>6}   Encounter Rate: {enc['rate']}\n")
        
        f.write("\n")

# Generate CSV file for Excel
with open('POKEMON_LOCATIONS.csv', 'w') as f:
    f.write("Pokemon,Location,Encounter Method,Level Range,Encounter Rate\n")
    
    for species in sorted(pokemon_locations.keys()):
        locations = pokemon_locations[species]
        for loc in locations:
            # Escape commas in location names
            location = loc['location'].replace(',', ';')
            method = loc['method'].replace(',', ';')
            f.write(f"{species},{location},{method},{loc['levels']},{loc['rate']}\n")

print("Generated POKEMON_LOCATIONS.txt (formatted text file)")
print("Generated POKEMON_LOCATIONS.csv (importable to Excel)")
print(f"Found {len(pokemon_locations)} unique Pokemon species with wild encounters")
