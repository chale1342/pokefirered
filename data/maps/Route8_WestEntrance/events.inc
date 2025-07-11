@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Route8_WestEntrance/map.json
@

	.align 2

Route8_WestEntrance_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_POLICEMAN, 6, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, Route8_WestEntrance_EventScript_Guard, 0

Route8_WestEntrance_MapWarps:
	warp_def 1, 4, 3, 10, MAP_SAFFRON_CITY
	warp_def 1, 5, 3, 10, MAP_SAFFRON_CITY
	warp_def 11, 5, 3, 1, MAP_ROUTE8
	warp_def 11, 6, 3, 1, MAP_ROUTE8

Route8_WestEntrance_MapCoordEvents:
	coord_event 6, 4, 3, VAR_MAP_SCENE_ROUTE5_ROUTE6_ROUTE7_ROUTE8_GATES, 0, Route8_WestEntrance_EventScript_GuardTriggerTop
	coord_event 6, 5, 3, VAR_MAP_SCENE_ROUTE5_ROUTE6_ROUTE7_ROUTE8_GATES, 0, Route8_WestEntrance_EventScript_GuardTriggerMid
	coord_event 6, 6, 3, VAR_MAP_SCENE_ROUTE5_ROUTE6_ROUTE7_ROUTE8_GATES, 0, Route8_WestEntrance_EventScript_GuardTriggerBottom

Route8_WestEntrance_MapEvents::
	map_events Route8_WestEntrance_ObjectEvents, Route8_WestEntrance_MapWarps, Route8_WestEntrance_MapCoordEvents, NULL

