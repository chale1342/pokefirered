@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SaffronCity_Mart/map.json
@

	.align 2

SaffronCity_Mart_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_CLERK, 2, 3, 0, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, SaffronCity_Mart_EventScript_Clerk, 0
	object_event 2, OBJ_EVENT_GFX_YOUNGSTER, 1, 7, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, SaffronCity_Mart_EventScript_Youngster, 0
	object_event 3, OBJ_EVENT_GFX_LASS, 9, 5, 3, MOVEMENT_TYPE_WANDER_UP_AND_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SaffronCity_Mart_EventScript_Lass, 0

SaffronCity_Mart_MapWarps:
	warp_def 3, 7, 3, 5, MAP_SAFFRON_CITY
	warp_def 4, 7, 3, 5, MAP_SAFFRON_CITY
	warp_def 5, 7, 3, 5, MAP_SAFFRON_CITY

SaffronCity_Mart_MapEvents::
	map_events SaffronCity_Mart_ObjectEvents, SaffronCity_Mart_MapWarps, NULL, NULL

