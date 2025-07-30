@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SevenIsland_Mart/map.json
@

	.align 2

SevenIsland_Mart_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_CLERK, 2, 3, 0, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, SevenIsland_Mart_EventScript_Clerk, 0
	object_event 2, OBJ_EVENT_GFX_LASS, 6, 2, 3, MOVEMENT_TYPE_FACE_UP_AND_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, SevenIsland_Mart_EventScript_Lass, 0
	object_event 3, OBJ_EVENT_GFX_FISHER, 9, 5, 3, MOVEMENT_TYPE_WANDER_UP_AND_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SevenIsland_Mart_EventScript_Fisher, 0
	object_event 4, OBJ_EVENT_GFX_HIKER, 5, 4, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SevenIsland_Mart_EventScript_Hiker, 0

SevenIsland_Mart_MapWarps:
	warp_def 4, 7, 3, 1, MAP_SEVEN_ISLAND

SevenIsland_Mart_MapEvents::
	map_events SevenIsland_Mart_ObjectEvents, SevenIsland_Mart_MapWarps, NULL, NULL

