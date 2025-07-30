@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/TwoIsland_PokemonCenter_1F/map.json
@

	.align 2

TwoIsland_PokemonCenter_1F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_NURSE, 7, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, TwoIsland_PokemonCenter_1F_EventScript_Nurse, 0
	object_event 2, OBJ_EVENT_GFX_GBA_KID, 11, 5, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, TwoIsland_PokemonCenter_1F_EventScript_GBAKid, 0
	object_event 3, OBJ_EVENT_GFX_BUG_CATCHER, 4, 4, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, TwoIsland_PokemonCenter_1F_EventScript_BugCatcher, 0

TwoIsland_PokemonCenter_1F_MapWarps:
	warp_def 7, 8, 3, 2, MAP_TWO_ISLAND
	warp_def 1, 6, 4, 0, MAP_TWO_ISLAND_POKEMON_CENTER_2F

TwoIsland_PokemonCenter_1F_MapEvents::
	map_events TwoIsland_PokemonCenter_1F_ObjectEvents, TwoIsland_PokemonCenter_1F_MapWarps, NULL, NULL

