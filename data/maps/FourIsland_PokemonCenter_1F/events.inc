@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/FourIsland_PokemonCenter_1F/map.json
@

	.align 2

FourIsland_PokemonCenter_1F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_NURSE, 7, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, FourIsland_PokemonCenter_1F_EventScript_Nurse, 0
	object_event 2, OBJ_EVENT_GFX_MAN, 10, 6, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, FourIsland_PokemonCenter_1F_EventScript_Man, 0
	object_event 3, OBJ_EVENT_GFX_WOMAN_3, 5, 5, 3, MOVEMENT_TYPE_FACE_DOWN_AND_UP, 1, 1, TRAINER_TYPE_NONE, 0, FourIsland_PokemonCenter_1F_EventScript_Woman, 0
	object_event 4, OBJ_EVENT_GFX_GENTLEMAN, 2, 2, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NONE, 0, FourIsland_PokemonCenter_1F_EventScript_Gentleman, 0

FourIsland_PokemonCenter_1F_MapWarps:
	warp_def 7, 8, 3, 0, MAP_FOUR_ISLAND
	warp_def 1, 6, 4, 0, MAP_FOUR_ISLAND_POKEMON_CENTER_2F

FourIsland_PokemonCenter_1F_MapBGEvents:
	bg_sign_event 3, 1, 0, BG_EVENT_PLAYER_FACING_NORTH, FourIsland_PokemonCenter_1F_EventScript_PokemonJournal
	bg_sign_event 2, 1, 0, BG_EVENT_PLAYER_FACING_NORTH, FourIsland_PokemonCenter_1F_EventScript_PokemonJournal

FourIsland_PokemonCenter_1F_MapEvents::
	map_events FourIsland_PokemonCenter_1F_ObjectEvents, FourIsland_PokemonCenter_1F_MapWarps, NULL, FourIsland_PokemonCenter_1F_MapBGEvents

