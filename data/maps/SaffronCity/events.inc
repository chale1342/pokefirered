@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SaffronCity/map.json
@

	.align 2

SaffronCity_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_ROCKET_M, 22, 15, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SaffronCity_EventScript_RocketGrunt1, FLAG_HIDE_SAFFRON_ROCKETS
	object_event 2, OBJ_EVENT_GFX_ROCKET_M, 26, 16, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 4, 1, TRAINER_TYPE_NONE, 0, SaffronCity_EventScript_RocketGrunt2, FLAG_HIDE_SAFFRON_ROCKETS
	object_event 3, OBJ_EVENT_GFX_ROCKET_M, 46, 13, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SaffronCity_EventScript_RocketGrunt3, FLAG_HIDE_SAFFRON_ROCKETS
	object_event 4, OBJ_EVENT_GFX_ROCKET_M, 27, 22, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SaffronCity_EventScript_RocketGrunt4, FLAG_HIDE_SAFFRON_ROCKETS
	object_event 5, OBJ_EVENT_GFX_ROCKET_M, 25, 33, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 7, 1, TRAINER_TYPE_NONE, 0, SaffronCity_EventScript_RocketGrunt5, FLAG_HIDE_SAFFRON_ROCKETS
	object_event 6, OBJ_EVENT_GFX_ROCKET_M, 34, 31, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SaffronCity_EventScript_DoorGuardGrunt, FLAG_HIDE_SAFFRON_ROCKETS
	object_event 7, OBJ_EVENT_GFX_ROCKET_M, 30, 39, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 5, 1, TRAINER_TYPE_NONE, 0, SaffronCity_EventScript_RocketGrunt7, FLAG_HIDE_SAFFRON_ROCKETS
	object_event 8, OBJ_EVENT_GFX_ROCKET_M, 48, 24, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 4, 1, TRAINER_TYPE_NONE, 0, SaffronCity_EventScript_RocketGrunt6, FLAG_HIDE_SAFFRON_ROCKETS
	object_event 9, OBJ_EVENT_GFX_YOUNGSTER, 37, 32, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, SaffronCity_EventScript_Youngster, FLAG_HIDE_SAFFRON_CIVILIANS
	object_event 10, OBJ_EVENT_GFX_WORKER_M, 21, 23, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, SaffronCity_EventScript_WorkerM, FLAG_HIDE_SAFFRON_CIVILIANS
	object_event 11, OBJ_EVENT_GFX_MAN, 39, 16, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NONE, 0, SaffronCity_EventScript_Man, FLAG_HIDE_SAFFRON_CIVILIANS
	object_event 12, OBJ_EVENT_GFX_BOY, 44, 22, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SaffronCity_EventScript_Boy, FLAG_HIDE_SAFFRON_CIVILIANS
	object_event 13, OBJ_EVENT_GFX_PIDGEOT, 45, 22, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SaffronCity_EventScript_Pidgeot, FLAG_HIDE_SAFFRON_CIVILIANS
	object_event 14, OBJ_EVENT_GFX_LASS, 32, 39, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 5, 1, TRAINER_TYPE_NONE, 0, SaffronCity_EventScript_Lass, FLAG_HIDE_SAFFRON_CIVILIANS
	object_event 15, OBJ_EVENT_GFX_BATTLE_GIRL, 47, 24, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, SaffronCity_EventScript_BattleGirl, FLAG_HIDE_POSTGAME_GOSSIPERS

SaffronCity_MapWarps:
	warp_def 33, 30, 0, 1, MAP_SILPH_CO_1F
	warp_def 22, 14, 0, 1, MAP_SAFFRON_CITY_COPYCATS_HOUSE_1F
	warp_def 40, 12, 0, 1, MAP_SAFFRON_CITY_DOJO
	warp_def 46, 12, 0, 1, MAP_SAFFRON_CITY_GYM
	warp_def 27, 21, 0, 1, MAP_SAFFRON_CITY_HOUSE
	warp_def 40, 21, 0, 1, MAP_SAFFRON_CITY_MART
	warp_def 24, 38, 0, 1, MAP_SAFFRON_CITY_POKEMON_CENTER_1F
	warp_def 43, 38, 0, 1, MAP_SAFFRON_CITY_MR_PSYCHICS_HOUSE
	warp_def 8, 27, 3, 2, MAP_ROUTE7_EAST_ENTRANCE
	warp_def 34, 5, 3, 2, MAP_ROUTE5_SOUTH_ENTRANCE
	warp_def 58, 27, 3, 1, MAP_ROUTE8_WEST_ENTRANCE
	warp_def 34, 46, 3, 0, MAP_ROUTE6_NORTH_ENTRANCE
	warp_def 35, 46, 3, 0, MAP_ROUTE6_NORTH_ENTRANCE
	warp_def 35, 5, 3, 2, MAP_ROUTE5_SOUTH_ENTRANCE
	warp_def 47, 21, 0, 0, MAP_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB

SaffronCity_MapBGEvents:
	bg_sign_event 29, 14, 0, BG_EVENT_PLAYER_FACING_ANY, SaffronCity_EventScript_CitySign
	bg_sign_event 42, 14, 0, BG_EVENT_PLAYER_FACING_ANY, SaffronCity_EventScript_DojoSign
	bg_sign_event 13, 25, 0, BG_EVENT_PLAYER_FACING_ANY, SaffronCity_EventScript_SilphProductSign
	bg_sign_event 18, 30, 0, BG_EVENT_PLAYER_FACING_ANY, SaffronCity_EventScript_TrainerTips2
	bg_sign_event 29, 31, 0, BG_EVENT_PLAYER_FACING_ANY, SaffronCity_EventScript_SilphCoSign
	bg_sign_event 54, 25, 0, BG_EVENT_PLAYER_FACING_ANY, SaffronCity_EventScript_TrainerTips1
	bg_sign_event 50, 14, 0, BG_EVENT_PLAYER_FACING_ANY, SaffronCity_EventScript_GymSign
	bg_sign_event 40, 38, 0, BG_EVENT_PLAYER_FACING_ANY, SaffronCity_EventScript_MrPsychicsHouseSign
	bg_sign_event 49, 22, 0, BG_EVENT_PLAYER_FACING_ANY, SaffronCity_EventScript_TrainerFanClubSign

SaffronCity_MapEvents::
	map_events SaffronCity_ObjectEvents, SaffronCity_MapWarps, NULL, SaffronCity_MapBGEvents

