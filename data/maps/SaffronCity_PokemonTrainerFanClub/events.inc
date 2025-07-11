@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SaffronCity_PokemonTrainerFanClub/map.json
@

	.align 2

SaffronCity_PokemonTrainerFanClub_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_BATTLE_GIRL, 7, 13, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirl, 0
	object_event 2, OBJ_EVENT_GFX_LITTLE_GIRL, 6, 11, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirl, 0
	object_event 3, OBJ_EVENT_GFX_YOUNGSTER, 3, 13, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, SaffronCity_PokemonTrainerFanClub_EventScript_Youngster, 0
	object_event 4, OBJ_EVENT_GFX_GENTLEMAN, 3, 12, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, SaffronCity_PokemonTrainerFanClub_EventScript_Gentleman, 0
	object_event 5, OBJ_EVENT_GFX_WOMAN_3, 9, 11, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SaffronCity_PokemonTrainerFanClub_EventScript_Woman, FLAG_HIDE_SAFFRON_FAN_CLUB_WOMAN
	object_event 6, OBJ_EVENT_GFX_ROCKER, 7, 12, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, SaffronCity_PokemonTrainerFanClub_EventScript_Rocker, FLAG_HIDE_SAFFRON_FAN_CLUB_ROCKER
	object_event 7, OBJ_EVENT_GFX_BEAUTY, 9, 12, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NONE, 0, SaffronCity_PokemonTrainerFanClub_EventScript_Beauty, FLAG_HIDE_SAFFRON_FAN_CLUB_BEAUTY
	object_event 8, OBJ_EVENT_GFX_BLACKBELT, 5, 11, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SaffronCity_PokemonTrainerFanClub_EventScript_BlackBelt, FLAG_HIDE_SAFFRON_FAN_CLUB_BLACKBELT
	object_event 9, 0, 2, 1, 0, MOVEMENT_TYPE_INVISIBLE, 1, 1, TRAINER_TYPE_NONE, 0, SaffronCity_PokemonTrainerFanClub_EventScript_PokemonJournalBruno, FLAG_HIDE_POSTGAME_GOSSIPERS
	object_event 10, 0, 3, 1, 0, MOVEMENT_TYPE_INVISIBLE, 1, 1, TRAINER_TYPE_NONE, 0, SaffronCity_PokemonTrainerFanClub_EventScript_PokemonJournalBruno, FLAG_HIDE_POSTGAME_GOSSIPERS

SaffronCity_PokemonTrainerFanClub_MapWarps:
	warp_def 5, 15, 3, 14, MAP_SAFFRON_CITY

SaffronCity_PokemonTrainerFanClub_MapEvents::
	map_events SaffronCity_PokemonTrainerFanClub_ObjectEvents, SaffronCity_PokemonTrainerFanClub_MapWarps, NULL, NULL

