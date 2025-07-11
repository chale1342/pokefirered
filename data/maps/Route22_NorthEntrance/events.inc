@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Route22_NorthEntrance/map.json
@

	.align 2

Route22_NorthEntrance_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_POLICEMAN, 8, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, Route22_NorthEntrance_EventScript_BoulderBadgeGuard, 0

Route22_NorthEntrance_MapWarps:
	warp_def 7, 1, 3, 2, MAP_ROUTE23
	warp_def 6, 10, 3, 0, MAP_ROUTE22
	warp_def 7, 10, 3, 0, MAP_ROUTE22
	warp_def 8, 10, 3, 0, MAP_ROUTE22

Route22_NorthEntrance_MapCoordEvents:
	coord_event 7, 2, 3, VAR_MAP_SCENE_ROUTE23, 0, Route22_NorthEntrance_EventScript_BoulderBadgeGuardTrigger

Route22_NorthEntrance_MapEvents::
	map_events Route22_NorthEntrance_ObjectEvents, Route22_NorthEntrance_MapWarps, Route22_NorthEntrance_MapCoordEvents, NULL

