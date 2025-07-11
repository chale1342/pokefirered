@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/CeruleanCity_PokemonCenter_1F/map.json
@

	.align 2

CeruleanCity_PokemonCenter_1F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_NURSE, 7, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, CeruleanCity_PokemonCenter_1F_EventScript_Nurse, 0
	object_event 2, OBJ_EVENT_GFX_GENTLEMAN, 12, 5, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, CeruleanCity_PokemonCenter_1F_EventScript_Gentleman, 0
	object_event 3, OBJ_EVENT_GFX_ROCKER, 5, 4, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, CeruleanCity_PokemonCenter_1F_EventScript_Rocker, 0
	object_event 4, OBJ_EVENT_GFX_YOUNGSTER, 4, 8, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, CeruleanCity_PokemonCenter_1F_EventScript_Youngster, 0
	object_event 5, OBJ_EVENT_GFX_LASS, 3, 3, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, CeruleanCity_PokemonCenter_1F_EventScript_Lass, 0
	object_event 6, 0, 2, 1, 0, MOVEMENT_TYPE_INVISIBLE, 1, 1, TRAINER_TYPE_NONE, 0, CeruleanCity_PokemonCenter_1F_EventScript_PokemonJournalMisty, FLAG_HIDE_POSTGAME_GOSSIPERS
	object_event 7, 0, 3, 1, 0, MOVEMENT_TYPE_INVISIBLE, 1, 1, TRAINER_TYPE_NONE, 0, CeruleanCity_PokemonCenter_1F_EventScript_PokemonJournalMisty, FLAG_HIDE_POSTGAME_GOSSIPERS

CeruleanCity_PokemonCenter_1F_MapWarps:
	warp_def 6, 8, 0, 3, MAP_CERULEAN_CITY
	warp_def 7, 8, 0, 3, MAP_CERULEAN_CITY
	warp_def 8, 8, 0, 3, MAP_CERULEAN_CITY
	warp_def 1, 6, 4, 0, MAP_CERULEAN_CITY_POKEMON_CENTER_2F

CeruleanCity_PokemonCenter_1F_MapEvents::
	map_events CeruleanCity_PokemonCenter_1F_ObjectEvents, CeruleanCity_PokemonCenter_1F_MapWarps, NULL, NULL

