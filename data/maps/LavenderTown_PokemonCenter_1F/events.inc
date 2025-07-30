@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/LavenderTown_PokemonCenter_1F/map.json
@

	.align 2

LavenderTown_PokemonCenter_1F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_NURSE, 7, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, LavenderTown_PokemonCenter_1F_EventScript_Nurse, 0
	object_event 2, OBJ_EVENT_GFX_GENTLEMAN, 9, 4, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, LavenderTown_PokemonCenter_1F_EventScript_Gentleman, 0
	object_event 3, OBJ_EVENT_GFX_LASS, 5, 6, 3, MOVEMENT_TYPE_WANDER_UP_AND_DOWN, 1, 2, TRAINER_TYPE_NONE, 0, LavenderTown_PokemonCenter_1F_EventScript_Lass, 0
	object_event 4, OBJ_EVENT_GFX_YOUNGSTER, 2, 2, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, LavenderTown_PokemonCenter_1F_EventScript_Youngster, 0
	object_event 5, OBJ_EVENT_GFX_BALDING_MAN, 14, 6, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, LavenderTown_PokemonCenter_1F_EventScript_BaldingMan, FLAG_HIDE_POSTGAME_GOSSIPERS

LavenderTown_PokemonCenter_1F_MapWarps:
	warp_def 6, 8, 3, 1, MAP_LAVENDER_TOWN
	warp_def 7, 8, 3, 1, MAP_LAVENDER_TOWN
	warp_def 8, 8, 3, 1, MAP_LAVENDER_TOWN
	warp_def 1, 6, 4, 0, MAP_LAVENDER_TOWN_POKEMON_CENTER_2F

LavenderTown_PokemonCenter_1F_MapEvents::
	map_events LavenderTown_PokemonCenter_1F_ObjectEvents, LavenderTown_PokemonCenter_1F_MapWarps, NULL, NULL

