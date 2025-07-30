@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/ThreeIsland_Mart/map.json
@

	.align 2

ThreeIsland_Mart_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_CLERK, 2, 3, 0, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, ThreeIsland_Mart_EventScript_Clerk, 0
	object_event 2, OBJ_EVENT_GFX_PICNICKER, 2, 7, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NONE, 0, ThreeIsland_Mart_EventScript_Picnicker, 0
	object_event 3, OBJ_EVENT_GFX_BUG_CATCHER, 7, 2, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NONE, 0, ThreeIsland_Mart_EventScript_BugCatcher, 0
	object_event 4, OBJ_EVENT_GFX_YOUNGSTER, 6, 5, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, ThreeIsland_Mart_EventScript_Youngster, 0

ThreeIsland_Mart_MapWarps:
	warp_def 4, 7, 3, 2, MAP_THREE_ISLAND

ThreeIsland_Mart_MapEvents::
	map_events ThreeIsland_Mart_ObjectEvents, ThreeIsland_Mart_MapWarps, NULL, NULL

