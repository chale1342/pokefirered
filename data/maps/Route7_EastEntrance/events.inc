@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Route7_EastEntrance/map.json
@

	.align 2

Route7_EastEntrance_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_POLICEMAN, 6, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, Route7_EastEntrance_EventScript_Guard, 0

Route7_EastEntrance_MapWarps:
	warp_def 1, 5, 3, 1, MAP_ROUTE7
	warp_def 1, 6, 3, 1, MAP_ROUTE7
	warp_def 11, 5, 3, 8, MAP_SAFFRON_CITY
	warp_def 11, 6, 3, 8, MAP_SAFFRON_CITY

Route7_EastEntrance_MapCoordEvents:
	coord_event 6, 4, 3, VAR_MAP_SCENE_ROUTE5_ROUTE6_ROUTE7_ROUTE8_GATES, 0, Route7_EastEntrance_EventScript_GuardTriggerTop
	coord_event 6, 5, 3, VAR_MAP_SCENE_ROUTE5_ROUTE6_ROUTE7_ROUTE8_GATES, 0, Route7_EastEntrance_EventScript_GuardTriggerMid
	coord_event 6, 6, 3, VAR_MAP_SCENE_ROUTE5_ROUTE6_ROUTE7_ROUTE8_GATES, 0, Route7_EastEntrance_EventScript_GuardTriggerBottom

Route7_EastEntrance_MapEvents::
	map_events Route7_EastEntrance_ObjectEvents, Route7_EastEntrance_MapWarps, Route7_EastEntrance_MapCoordEvents, NULL

