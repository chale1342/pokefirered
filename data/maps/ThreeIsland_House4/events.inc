@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/ThreeIsland_House4/map.json
@

	.align 2

ThreeIsland_House4_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_BALDING_MAN, 7, 4, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, ThreeIsland_House4_EventScript_BaldingMan, 0
	object_event 2, OBJ_EVENT_GFX_LITTLE_BOY, 6, 3, 3, MOVEMENT_TYPE_WANDER_AROUND, 2, 1, TRAINER_TYPE_NONE, 0, ThreeIsland_House4_EventScript_LittleBoy, 0

ThreeIsland_House4_MapWarps:
	warp_def 4, 7, 3, 5, MAP_THREE_ISLAND

ThreeIsland_House4_MapEvents::
	map_events ThreeIsland_House4_ObjectEvents, ThreeIsland_House4_MapWarps, NULL, NULL

