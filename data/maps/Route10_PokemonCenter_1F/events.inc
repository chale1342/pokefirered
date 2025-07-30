@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Route10_PokemonCenter_1F/map.json
@

	.align 2

Route10_PokemonCenter_1F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_NURSE, 7, 2, 0, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, Route10_PokemonCenter_1F_EventScript_Nurse, 0
	object_event 2, OBJ_EVENT_GFX_GENTLEMAN, 9, 4, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, Route10_PokemonCenter_1F_EventScript_Gentleman, 0
	object_event 3, OBJ_EVENT_GFX_FAT_MAN, 2, 3, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, Route10_PokemonCenter_1F_EventScript_FatMan, 0
	object_event 4, OBJ_EVENT_GFX_YOUNGSTER, 14, 6, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, Route10_PokemonCenter_1F_EventScript_Youngster, 0
	object_event 5, OBJ_EVENT_GFX_SCIENTIST, 12, 5, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, Route10_PokemonCenter_1F_EventScript_Aide, 0

Route10_PokemonCenter_1F_MapWarps:
	warp_def 6, 8, 3, 3, MAP_ROUTE10
	warp_def 7, 8, 3, 3, MAP_ROUTE10
	warp_def 8, 8, 3, 3, MAP_ROUTE10
	warp_def 1, 6, 4, 0, MAP_ROUTE10_POKEMON_CENTER_2F

Route10_PokemonCenter_1F_MapEvents::
	map_events Route10_PokemonCenter_1F_ObjectEvents, Route10_PokemonCenter_1F_MapWarps, NULL, NULL

