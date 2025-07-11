@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Route15_WestEntrance_1F/map.json
@

	.align 2

Route15_WestEntrance_1F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_POLICEMAN, 6, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, Route15_WestEntrance_1F_EventScript_Guard, 0

Route15_WestEntrance_1F_MapWarps:
	warp_def 1, 6, 3, 0, MAP_ROUTE15
	warp_def 1, 7, 3, 0, MAP_ROUTE15
	warp_def 11, 6, 3, 1, MAP_ROUTE15
	warp_def 11, 7, 3, 1, MAP_ROUTE15
	warp_def 9, 10, 3, 0, MAP_ROUTE15_WEST_ENTRANCE_2F

Route15_WestEntrance_1F_MapEvents::
	map_events Route15_WestEntrance_1F_ObjectEvents, Route15_WestEntrance_1F_MapWarps, NULL, NULL

