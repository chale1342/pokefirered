@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/ThreeIsland_PokemonCenter_1F/map.json
@

	.align 2

ThreeIsland_PokemonCenter_1F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_NURSE, 7, 2, 0, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, ThreeIsland_PokemonCenter_1F_EventScript_Nurse, 0
	object_event 2, OBJ_EVENT_GFX_ROCKER, 12, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, ThreeIsland_PokemonCenter_1F_EventScript_Rocker, 0
	object_event 3, OBJ_EVENT_GFX_LASS, 3, 4, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, ThreeIsland_PokemonCenter_1F_EventScript_Lass, 0
	object_event 4, OBJ_EVENT_GFX_SAILOR, 11, 5, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, ThreeIsland_PokemonCenter_1F_EventScript_Sailor, 0

ThreeIsland_PokemonCenter_1F_MapWarps:
	warp_def 7, 8, 3, 1, MAP_THREE_ISLAND
	warp_def 1, 6, 4, 0, MAP_THREE_ISLAND_POKEMON_CENTER_2F

ThreeIsland_PokemonCenter_1F_MapEvents::
	map_events ThreeIsland_PokemonCenter_1F_ObjectEvents, ThreeIsland_PokemonCenter_1F_MapWarps, NULL, NULL

