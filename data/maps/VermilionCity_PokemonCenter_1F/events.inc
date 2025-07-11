@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/VermilionCity_PokemonCenter_1F/map.json
@

	.align 2

VermilionCity_PokemonCenter_1F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_NURSE, 7, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, VermilionCity_PokemonCenter_1F_EventScript_Nurse, 0
	object_event 2, OBJ_EVENT_GFX_MAN, 4, 8, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, VermilionCity_PokemonCenter_1F_EventScript_Man, 0
	object_event 3, OBJ_EVENT_GFX_HIKER, 12, 5, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, VermilionCity_PokemonCenter_1F_EventScript_Hiker, 0
	object_event 4, OBJ_EVENT_GFX_YOUNGSTER, 14, 4, 3, MOVEMENT_TYPE_WANDER_UP_AND_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, VermilionCity_PokemonCenter_1F_EventScript_Youngster, 0
	object_event 5, OBJ_EVENT_GFX_COOLTRAINER_F, 6, 4, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, VermilionCity_PokemonCenter_1F_EventScript_VSSeekerWoman, 0
	object_event 6, 0, 2, 1, 0, MOVEMENT_TYPE_INVISIBLE, 1, 1, TRAINER_TYPE_NONE, 0, VermilionCity_PokemonCenter_1F_EventScript_PokemonJournalLtSurge, FLAG_HIDE_FAME_CHECKER_LT_SURGE_JOURNAL
	object_event 7, 0, 3, 1, 0, MOVEMENT_TYPE_INVISIBLE, 1, 1, TRAINER_TYPE_NONE, 0, VermilionCity_PokemonCenter_1F_EventScript_PokemonJournalLtSurge, FLAG_HIDE_FAME_CHECKER_LT_SURGE_JOURNAL

VermilionCity_PokemonCenter_1F_MapWarps:
	warp_def 6, 8, 3, 4, MAP_VERMILION_CITY
	warp_def 7, 8, 3, 4, MAP_VERMILION_CITY
	warp_def 8, 8, 3, 4, MAP_VERMILION_CITY
	warp_def 1, 6, 4, 0, MAP_VERMILION_CITY_POKEMON_CENTER_2F

VermilionCity_PokemonCenter_1F_MapEvents::
	map_events VermilionCity_PokemonCenter_1F_ObjectEvents, VermilionCity_PokemonCenter_1F_MapWarps, NULL, NULL

