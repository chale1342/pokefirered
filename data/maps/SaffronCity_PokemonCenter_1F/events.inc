@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SaffronCity_PokemonCenter_1F/map.json
@

	.align 2

SaffronCity_PokemonCenter_1F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_NURSE, 7, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SaffronCity_PokemonCenter_1F_EventScript_Nurse, 0
	object_event 2, OBJ_EVENT_GFX_GENTLEMAN, 14, 6, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, SaffronCity_PokemonCenter_1F_EventScript_Gentleman, 0
	object_event 3, OBJ_EVENT_GFX_WOMAN_3, 4, 4, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, SaffronCity_PokemonCenter_1F_EventScript_Woman, 0
	object_event 4, OBJ_EVENT_GFX_YOUNGSTER, 9, 6, 3, MOVEMENT_TYPE_WANDER_UP_AND_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SaffronCity_PokemonCenter_1F_EventScript_Youngster, 0
	object_event 5, 0, 2, 1, 0, MOVEMENT_TYPE_INVISIBLE, 1, 1, TRAINER_TYPE_NONE, 0, SaffronCity_PokemonCenter_1F_EventScript_PokemonJournalSabrina, FLAG_HIDE_SAFFRON_CITY_POKECENTER_SABRINA_JOURNALS
	object_event 6, 0, 3, 1, 0, MOVEMENT_TYPE_INVISIBLE, 1, 1, TRAINER_TYPE_NONE, 0, SaffronCity_PokemonCenter_1F_EventScript_PokemonJournalSabrina, FLAG_HIDE_SAFFRON_CITY_POKECENTER_SABRINA_JOURNALS

SaffronCity_PokemonCenter_1F_MapWarps:
	warp_def 6, 8, 3, 6, MAP_SAFFRON_CITY
	warp_def 7, 8, 3, 6, MAP_SAFFRON_CITY
	warp_def 8, 8, 3, 6, MAP_SAFFRON_CITY
	warp_def 1, 6, 4, 0, MAP_SAFFRON_CITY_POKEMON_CENTER_2F

SaffronCity_PokemonCenter_1F_MapEvents::
	map_events SaffronCity_PokemonCenter_1F_ObjectEvents, SaffronCity_PokemonCenter_1F_MapWarps, NULL, NULL

