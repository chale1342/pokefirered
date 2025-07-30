@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Route11_EastEntrance_1F/map.json
@

	.align 2

Route11_EastEntrance_1F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_POLICEMAN, 6, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, Route11_EastEntrance_1F_EventScript_TopGuard, 0
	object_event 2, OBJ_EVENT_GFX_POLICEMAN, 4, 10, 0, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NONE, 0, Route11_EastEntrance_1F_EventScript_BottomGuard, 0

Route11_EastEntrance_1F_MapWarps:
	warp_def 1, 6, 3, 1, MAP_ROUTE11
	warp_def 1, 7, 3, 1, MAP_ROUTE11
	warp_def 11, 6, 3, 2, MAP_ROUTE11
	warp_def 11, 7, 3, 2, MAP_ROUTE11
	warp_def 9, 10, 3, 0, MAP_ROUTE11_EAST_ENTRANCE_2F

Route11_EastEntrance_1F_MapEvents::
	map_events Route11_EastEntrance_1F_ObjectEvents, Route11_EastEntrance_1F_MapWarps, NULL, NULL

