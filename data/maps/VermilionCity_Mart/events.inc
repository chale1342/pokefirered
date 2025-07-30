@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/VermilionCity_Mart/map.json
@

	.align 2

VermilionCity_Mart_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_CLERK, 2, 3, 0, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, VermilionCity_Mart_EventScript_Clerk, 0
	object_event 2, OBJ_EVENT_GFX_COOLTRAINER_F, 4, 2, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, VermilionCity_Mart_EventScript_CooltrainerF, 0
	object_event 3, OBJ_EVENT_GFX_BALDING_MAN, 9, 4, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 2, TRAINER_TYPE_NONE, 0, VermilionCity_Mart_EventScript_BaldingMan, 0

VermilionCity_Mart_MapWarps:
	warp_def 3, 7, 3, 7, MAP_VERMILION_CITY
	warp_def 4, 7, 3, 7, MAP_VERMILION_CITY
	warp_def 5, 7, 3, 7, MAP_VERMILION_CITY

VermilionCity_Mart_MapEvents::
	map_events VermilionCity_Mart_ObjectEvents, VermilionCity_Mart_MapWarps, NULL, NULL

