@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/FuchsiaCity_Gym/map.json
@

	.align 2

FuchsiaCity_Gym_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_ROCKER, 12, 16, 3, MOVEMENT_TYPE_FACE_DOWN_AND_RIGHT, 1, 1, TRAINER_TYPE_NORMAL, 4, FuchsiaCity_Gym_EventScript_Kayden, 0
	object_event 2, OBJ_EVENT_GFX_ROCKER, 2, 9, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NORMAL, 1, FuchsiaCity_Gym_EventScript_Shawn, 0
	object_event 3, OBJ_EVENT_GFX_ROCKER, 11, 11, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NORMAL, 3, FuchsiaCity_Gym_EventScript_Kirk, 0
	object_event 4, OBJ_EVENT_GFX_MAN, 13, 4, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NORMAL, 2, FuchsiaCity_Gym_EventScript_Edgar, 0
	object_event 5, OBJ_EVENT_GFX_MAN, 4, 6, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NORMAL, 2, FuchsiaCity_Gym_EventScript_Phil, 0
	object_event 6, OBJ_EVENT_GFX_ROCKER, 2, 16, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 4, FuchsiaCity_Gym_EventScript_Nate, 0
	object_event 7, OBJ_EVENT_GFX_KOGA, 7, 13, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, FuchsiaCity_Gym_EventScript_Koga, 0
	object_event 8, OBJ_EVENT_GFX_GYM_GUY, 11, 19, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, FuchsiaCity_Gym_EventScript_GymGuy, 0

FuchsiaCity_Gym_MapWarps:
	warp_def 6, 21, 3, 4, MAP_FUCHSIA_CITY
	warp_def 7, 21, 3, 4, MAP_FUCHSIA_CITY
	warp_def 8, 21, 3, 4, MAP_FUCHSIA_CITY

FuchsiaCity_Gym_MapBGEvents:
	bg_sign_event 4, 19, 0, BG_EVENT_PLAYER_FACING_ANY, FuchsiaCity_Gym_EventScript_GymStatue
	bg_sign_event 10, 19, 0, BG_EVENT_PLAYER_FACING_ANY, FuchsiaCity_Gym_EventScript_GymStatue

FuchsiaCity_Gym_MapEvents::
	map_events FuchsiaCity_Gym_ObjectEvents, FuchsiaCity_Gym_MapWarps, NULL, FuchsiaCity_Gym_MapBGEvents

