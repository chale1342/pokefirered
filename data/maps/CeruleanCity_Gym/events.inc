@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/CeruleanCity_Gym/map.json
@

	.align 2

CeruleanCity_Gym_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_SWIMMER_M_WATER, 10, 12, 0, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NORMAL, 1, CeruleanCity_Gym_EventScript_Luis, 0
	object_event 2, OBJ_EVENT_GFX_PICNICKER, 4, 7, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NORMAL, 4, CeruleanCity_Gym_EventScript_Diana, 0
	object_event 3, OBJ_EVENT_GFX_MISTY, 8, 6, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, CeruleanCity_Gym_EventScript_Misty, 0
	object_event 4, OBJ_EVENT_GFX_GYM_GUY, 7, 16, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, CeruleanCity_Gym_EventScript_GymGuy, 0

CeruleanCity_Gym_MapWarps:
	warp_def 7, 18, 3, 4, MAP_CERULEAN_CITY
	warp_def 8, 18, 3, 4, MAP_CERULEAN_CITY
	warp_def 9, 18, 3, 4, MAP_CERULEAN_CITY

CeruleanCity_Gym_MapBGEvents:
	bg_sign_event 6, 17, 0, BG_EVENT_PLAYER_FACING_ANY, CeruleanCity_Gym_EventScript_GymStatue
	bg_sign_event 10, 17, 0, BG_EVENT_PLAYER_FACING_ANY, CeruleanCity_Gym_EventScript_GymStatue

CeruleanCity_Gym_MapEvents::
	map_events CeruleanCity_Gym_ObjectEvents, CeruleanCity_Gym_MapWarps, NULL, CeruleanCity_Gym_MapBGEvents

