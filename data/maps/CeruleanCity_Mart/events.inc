@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/CeruleanCity_Mart/map.json
@

	.align 2

CeruleanCity_Mart_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_CLERK, 2, 3, 0, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, CeruleanCity_Mart_EventScript_Clerk, 0
	object_event 2, OBJ_EVENT_GFX_WOMAN_1, 9, 2, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 4, 1, TRAINER_TYPE_NONE, 0, CeruleanCity_Mart_EventScript_Woman, 0
	object_event 3, OBJ_EVENT_GFX_YOUNGSTER, 1, 7, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NONE, 0, CeruleanCity_Mart_EventScript_Youngster, 0

CeruleanCity_Mart_MapWarps:
	warp_def 3, 7, 3, 6, MAP_CERULEAN_CITY
	warp_def 4, 7, 3, 6, MAP_CERULEAN_CITY
	warp_def 5, 7, 3, 6, MAP_CERULEAN_CITY

CeruleanCity_Mart_MapEvents::
	map_events CeruleanCity_Mart_ObjectEvents, CeruleanCity_Mart_MapWarps, NULL, NULL

