@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Route5_SouthEntrance/map.json
@

	.align 2

Route5_SouthEntrance_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_POLICEMAN, 1, 5, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, Route5_SouthEntrance_EventScript_Guard, 0

Route5_SouthEntrance_MapWarps:
	warp_def 3, 9, 3, 9, MAP_SAFFRON_CITY
	warp_def 4, 1, 3, 2, MAP_ROUTE5
	warp_def 4, 9, 3, 9, MAP_SAFFRON_CITY
	warp_def 5, 1, 0, 3, MAP_ROUTE5

Route5_SouthEntrance_MapCoordEvents:
	coord_event 3, 5, 3, VAR_MAP_SCENE_ROUTE5_ROUTE6_ROUTE7_ROUTE8_GATES, 0, Route5_SouthEntrance_EventScript_GuardTriggerLeft
	coord_event 4, 5, 3, VAR_MAP_SCENE_ROUTE5_ROUTE6_ROUTE7_ROUTE8_GATES, 0, Route5_SouthEntrance_EventScript_GuardTriggerMid
	coord_event 5, 5, 3, VAR_MAP_SCENE_ROUTE5_ROUTE6_ROUTE7_ROUTE8_GATES, 0, Route5_SouthEntrance_EventScript_GuardTriggerRight

Route5_SouthEntrance_MapEvents::
	map_events Route5_SouthEntrance_ObjectEvents, Route5_SouthEntrance_MapWarps, Route5_SouthEntrance_MapCoordEvents, NULL

