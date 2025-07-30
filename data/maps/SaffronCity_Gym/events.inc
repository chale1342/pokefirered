@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SaffronCity_Gym/map.json
@

	.align 2

SaffronCity_Gym_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_COOLTRAINER_M, 24, 18, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 3, SaffronCity_Gym_EventScript_Cameron, 0
	object_event 2, OBJ_EVENT_GFX_COOLTRAINER_M, 24, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 3, SaffronCity_Gym_EventScript_Johan, 0
	object_event 3, OBJ_EVENT_GFX_COOLTRAINER_M, 4, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 3, SaffronCity_Gym_EventScript_Preston, 0
	object_event 4, OBJ_EVENT_GFX_CHANNELER, 14, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 3, SaffronCity_Gym_EventScript_Amanda, 0
	object_event 5, OBJ_EVENT_GFX_CHANNELER, 4, 10, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 3, SaffronCity_Gym_EventScript_Stacy, 0
	object_event 6, OBJ_EVENT_GFX_CHANNELER, 4, 18, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 3, SaffronCity_Gym_EventScript_Tasha, 0
	object_event 7, OBJ_EVENT_GFX_SABRINA, 14, 11, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SaffronCity_Gym_EventScript_Sabrina, 0
	object_event 8, OBJ_EVENT_GFX_COOLTRAINER_M, 24, 10, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 3, SaffronCity_Gym_EventScript_Tyron, 0
	object_event 9, OBJ_EVENT_GFX_GYM_GUY, 15, 20, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SaffronCity_Gym_EventScript_GymGuy, 0

SaffronCity_Gym_MapWarps:
	warp_def 13, 23, 3, 3, MAP_SAFFRON_CITY
	warp_def 14, 23, 3, 3, MAP_SAFFRON_CITY
	warp_def 15, 23, 3, 3, MAP_SAFFRON_CITY
	warp_def 18, 20, 3, 32, MAP_SAFFRON_CITY_GYM
	warp_def 0, 4, 3, 22, MAP_SAFFRON_CITY_GYM
	warp_def 0, 7, 3, 20, MAP_SAFFRON_CITY_GYM
	warp_def 0, 12, 3, 30, MAP_SAFFRON_CITY_GYM
	warp_def 0, 15, 3, 11, MAP_SAFFRON_CITY_GYM
	warp_def 0, 20, 3, 28, MAP_SAFFRON_CITY_GYM
	warp_def 0, 23, 3, 19, MAP_SAFFRON_CITY_GYM
	warp_def 8, 4, 3, 18, MAP_SAFFRON_CITY_GYM
	warp_def 8, 7, 3, 7, MAP_SAFFRON_CITY_GYM
	warp_def 8, 12, 3, 17, MAP_SAFFRON_CITY_GYM
	warp_def 8, 15, 3, 15, MAP_SAFFRON_CITY_GYM
	warp_def 8, 20, 3, 26, MAP_SAFFRON_CITY_GYM
	warp_def 8, 23, 3, 13, MAP_SAFFRON_CITY_GYM
	warp_def 12, 4, 3, 24, MAP_SAFFRON_CITY_GYM
	warp_def 12, 7, 3, 12, MAP_SAFFRON_CITY_GYM
	warp_def 16, 4, 3, 10, MAP_SAFFRON_CITY_GYM
	warp_def 16, 7, 3, 9, MAP_SAFFRON_CITY_GYM
	warp_def 18, 15, 3, 5, MAP_SAFFRON_CITY_GYM
	warp_def 20, 4, 3, 23, MAP_SAFFRON_CITY_GYM
	warp_def 20, 7, 3, 4, MAP_SAFFRON_CITY_GYM
	warp_def 20, 12, 3, 21, MAP_SAFFRON_CITY_GYM
	warp_def 20, 15, 3, 16, MAP_SAFFRON_CITY_GYM
	warp_def 20, 20, 3, 27, MAP_SAFFRON_CITY_GYM
	warp_def 20, 23, 3, 14, MAP_SAFFRON_CITY_GYM
	warp_def 28, 4, 3, 25, MAP_SAFFRON_CITY_GYM
	warp_def 28, 7, 3, 8, MAP_SAFFRON_CITY_GYM
	warp_def 28, 12, 3, 31, MAP_SAFFRON_CITY_GYM
	warp_def 28, 15, 3, 6, MAP_SAFFRON_CITY_GYM
	warp_def 28, 20, 3, 29, MAP_SAFFRON_CITY_GYM
	warp_def 28, 23, 3, 3, MAP_SAFFRON_CITY_GYM

SaffronCity_Gym_MapBGEvents:
	bg_sign_event 12, 20, 0, BG_EVENT_PLAYER_FACING_ANY, SaffronCity_Gym_EventScript_GymStatue
	bg_sign_event 16, 20, 0, BG_EVENT_PLAYER_FACING_ANY, SaffronCity_Gym_EventScript_GymStatue

SaffronCity_Gym_MapEvents::
	map_events SaffronCity_Gym_ObjectEvents, SaffronCity_Gym_MapWarps, NULL, SaffronCity_Gym_MapBGEvents

