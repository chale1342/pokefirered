@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Route2_House/map.json
@

	.align 2

Route2_House_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_SCIENTIST, 4, 5, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, Route2_House_EventScript_Scientist, 0
	object_event 2, OBJ_EVENT_GFX_GBA_KID, 7, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, Route2_House_EventScript_Reyley, 0

Route2_House_MapWarps:
	warp_def 3, 7, 0, 4, MAP_ROUTE2
	warp_def 4, 7, 0, 4, MAP_ROUTE2
	warp_def 5, 7, 0, 4, MAP_ROUTE2

Route2_House_MapEvents::
	map_events Route2_House_ObjectEvents, Route2_House_MapWarps, NULL, NULL

