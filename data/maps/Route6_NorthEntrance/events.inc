@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Route6_NorthEntrance/map.json
@

	.align 2

Route6_NorthEntrance_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_POLICEMAN, 7, 5, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, Route6_NorthEntrance_EventScript_Guard, 0

Route6_NorthEntrance_MapWarps:
	warp_def 4, 1, 0, 11, MAP_SAFFRON_CITY
	warp_def 5, 1, 0, 11, MAP_SAFFRON_CITY
	warp_def 4, 9, 3, 1, MAP_ROUTE6
	warp_def 5, 9, 3, 1, MAP_ROUTE6

Route6_NorthEntrance_MapCoordEvents:
	coord_event 3, 5, 3, VAR_MAP_SCENE_ROUTE5_ROUTE6_ROUTE7_ROUTE8_GATES, 0, Route6_NorthEntrance_EventScript_GuardTriggerLeft
	coord_event 4, 5, 3, VAR_MAP_SCENE_ROUTE5_ROUTE6_ROUTE7_ROUTE8_GATES, 0, Route6_NorthEntrance_EventScript_GuardTriggerMid
	coord_event 5, 5, 3, VAR_MAP_SCENE_ROUTE5_ROUTE6_ROUTE7_ROUTE8_GATES, 0, Route6_NorthEntrance_EventScript_GuardTriggerRight

Route6_NorthEntrance_MapEvents::
	map_events Route6_NorthEntrance_ObjectEvents, Route6_NorthEntrance_MapWarps, Route6_NorthEntrance_MapCoordEvents, NULL

