@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/PewterCity_Mart/map.json
@

	.align 2

PewterCity_Mart_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_YOUNGSTER, 8, 2, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, PewterCity_Mart_EventScript_Youngster, 0
	object_event 2, OBJ_EVENT_GFX_BOY, 6, 4, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, PewterCity_Mart_EventScript_Boy, 0
	object_event 3, OBJ_EVENT_GFX_CLERK, 2, 3, 0, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, PewterCity_Mart_EventScript_Clerk, 0

PewterCity_Mart_MapWarps:
	warp_def 3, 7, 3, 3, MAP_PEWTER_CITY
	warp_def 4, 7, 3, 3, MAP_PEWTER_CITY
	warp_def 5, 7, 3, 3, MAP_PEWTER_CITY

PewterCity_Mart_MapEvents::
	map_events PewterCity_Mart_ObjectEvents, PewterCity_Mart_MapWarps, NULL, NULL

