@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/ThreeIsland_House2/map.json
@

	.align 2

ThreeIsland_House2_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_ROCKER, 4, 4, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, ThreeIsland_House2_EventScript_Rocker, 0
	object_event 2, OBJ_EVENT_GFX_MAN, 7, 4, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, ThreeIsland_House2_EventScript_Man, 0

ThreeIsland_House2_MapWarps:
	warp_def 4, 7, 3, 3, MAP_THREE_ISLAND

ThreeIsland_House2_MapEvents::
	map_events ThreeIsland_House2_ObjectEvents, ThreeIsland_House2_MapWarps, NULL, NULL

