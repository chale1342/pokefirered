@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/VermilionCity_Gym/map.json
@

	.align 2

VermilionCity_Gym_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_LT_SURGE, 5, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, VermilionCity_Gym_EventScript_LtSurge, 0
	object_event 2, OBJ_EVENT_GFX_BALDING_MAN, 2, 11, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NORMAL, 3, VermilionCity_Gym_EventScript_Baily, 0
	object_event 3, OBJ_EVENT_GFX_SAILOR, 8, 13, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NORMAL, 3, VermilionCity_Gym_EventScript_Dwayne, 0
	object_event 4, OBJ_EVENT_GFX_GYM_GUY, 4, 17, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, VermilionCity_Gym_EventScript_GymGuy, 0
	object_event 5, OBJ_EVENT_GFX_GENTLEMAN, 7, 8, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NORMAL, 3, VermilionCity_Gym_EventScript_Tucker, 0

VermilionCity_Gym_MapWarps:
	warp_def 4, 19, 3, 9, MAP_VERMILION_CITY
	warp_def 5, 19, 3, 9, MAP_VERMILION_CITY
	warp_def 6, 19, 3, 9, MAP_VERMILION_CITY

VermilionCity_Gym_MapBGEvents:
	bg_sign_event 3, 17, 0, BG_EVENT_PLAYER_FACING_ANY, VermilionCity_Gym_EventScript_GymStatue
	bg_sign_event 7, 17, 0, BG_EVENT_PLAYER_FACING_ANY, VermilionCity_Gym_EventScript_GymStatue
	bg_sign_event 1, 10, 0, BG_EVENT_PLAYER_FACING_ANY, VermilionCity_Gym_EventScript_TrashCan1
	bg_sign_event 3, 10, 0, BG_EVENT_PLAYER_FACING_ANY, VermilionCity_Gym_EventScript_TrashCan2
	bg_sign_event 5, 10, 0, BG_EVENT_PLAYER_FACING_ANY, VermilionCity_Gym_EventScript_TrashCan3
	bg_sign_event 7, 10, 0, BG_EVENT_PLAYER_FACING_ANY, VermilionCity_Gym_EventScript_TrashCan4
	bg_sign_event 9, 10, 0, BG_EVENT_PLAYER_FACING_ANY, VermilionCity_Gym_EventScript_TrashCan5
	bg_sign_event 1, 12, 0, BG_EVENT_PLAYER_FACING_ANY, VermilionCity_Gym_EventScript_TrashCan6
	bg_sign_event 3, 12, 0, BG_EVENT_PLAYER_FACING_ANY, VermilionCity_Gym_EventScript_TrashCan7
	bg_sign_event 5, 12, 0, BG_EVENT_PLAYER_FACING_ANY, VermilionCity_Gym_EventScript_TrashCan8
	bg_sign_event 7, 12, 0, BG_EVENT_PLAYER_FACING_ANY, VermilionCity_Gym_EventScript_TrashCan9
	bg_sign_event 9, 12, 0, BG_EVENT_PLAYER_FACING_ANY, VermilionCity_Gym_EventScript_TrashCan10
	bg_sign_event 1, 14, 0, BG_EVENT_PLAYER_FACING_ANY, VermilionCity_Gym_EventScript_TrashCan11
	bg_sign_event 3, 14, 0, BG_EVENT_PLAYER_FACING_ANY, VermilionCity_Gym_EventScript_TrashCan12
	bg_sign_event 5, 14, 0, BG_EVENT_PLAYER_FACING_ANY, VermilionCity_Gym_EventScript_TrashCan13
	bg_sign_event 7, 14, 0, BG_EVENT_PLAYER_FACING_ANY, VermilionCity_Gym_EventScript_TrashCan14
	bg_sign_event 9, 14, 0, BG_EVENT_PLAYER_FACING_ANY, VermilionCity_Gym_EventScript_TrashCan15

VermilionCity_Gym_MapEvents::
	map_events VermilionCity_Gym_ObjectEvents, VermilionCity_Gym_MapWarps, NULL, VermilionCity_Gym_MapBGEvents

