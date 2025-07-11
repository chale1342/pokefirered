@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/CeladonCity_PokemonCenter_1F/map.json
@

	.align 2

CeladonCity_PokemonCenter_1F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_NURSE, 7, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, CeladonCity_PokemonCenter_1F_EventScript_Nurse, 0
	object_event 2, OBJ_EVENT_GFX_GENTLEMAN, 4, 4, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, CeladonCity_PokemonCenter_1F_EventScript_Gentleman, 0
	object_event 3, OBJ_EVENT_GFX_COOLTRAINER_F, 10, 6, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 2, 1, TRAINER_TYPE_NONE, 0, CeladonCity_PokemonCenter_1F_EventScript_CooltrainerF, 0
	object_event 4, OBJ_EVENT_GFX_YOUNGSTER, 12, 5, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, CeladonCity_PokemonCenter_1F_EventScript_Youngster, 0

CeladonCity_PokemonCenter_1F_MapWarps:
	warp_def 6, 8, 3, 4, MAP_CELADON_CITY
	warp_def 7, 8, 3, 4, MAP_CELADON_CITY
	warp_def 8, 8, 3, 4, MAP_CELADON_CITY
	warp_def 1, 6, 4, 0, MAP_CELADON_CITY_POKEMON_CENTER_2F

CeladonCity_PokemonCenter_1F_MapEvents::
	map_events CeladonCity_PokemonCenter_1F_ObjectEvents, CeladonCity_PokemonCenter_1F_MapWarps, NULL, NULL

