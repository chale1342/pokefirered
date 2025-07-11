@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/FuchsiaCity_PokemonCenter_1F/map.json
@

	.align 2

FuchsiaCity_PokemonCenter_1F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_NURSE, 7, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, FuchsiaCity_PokemonCenter_1F_EventScript_Nurse, 0
	object_event 2, OBJ_EVENT_GFX_MAN, 12, 5, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, FuchsiaCity_PokemonCenter_1F_EventScript_Man, 0
	object_event 3, OBJ_EVENT_GFX_COOLTRAINER_F, 13, 3, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NONE, 0, FuchsiaCity_PokemonCenter_1F_EventScript_CooltrainerF, 0
	object_event 4, OBJ_EVENT_GFX_YOUNGSTER, 4, 8, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, FuchsiaCity_PokemonCenter_1F_EventScript_Youngster, 0

FuchsiaCity_PokemonCenter_1F_MapWarps:
	warp_def 6, 8, 3, 6, MAP_FUCHSIA_CITY
	warp_def 7, 8, 3, 6, MAP_FUCHSIA_CITY
	warp_def 8, 8, 3, 6, MAP_FUCHSIA_CITY
	warp_def 1, 6, 4, 0, MAP_FUCHSIA_CITY_POKEMON_CENTER_2F

FuchsiaCity_PokemonCenter_1F_MapEvents::
	map_events FuchsiaCity_PokemonCenter_1F_ObjectEvents, FuchsiaCity_PokemonCenter_1F_MapWarps, NULL, NULL

