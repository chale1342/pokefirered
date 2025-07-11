@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Route16_NorthEntrance_1F/map.json
@

	.align 2

Route16_NorthEntrance_1F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_POLICEMAN, 6, 8, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, Route16_NorthEntrance_1F_EventScript_Guard, 0
	object_event 2, OBJ_EVENT_GFX_OLD_MAN_1, 7, 4, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, Route16_NorthEntrance_1F_EventScript_OldMan, 0

Route16_NorthEntrance_1F_MapWarps:
	warp_def 1, 3, 3, 1, MAP_ROUTE16
	warp_def 11, 3, 3, 2, MAP_ROUTE16
	warp_def 1, 12, 3, 3, MAP_ROUTE16
	warp_def 11, 12, 3, 4, MAP_ROUTE16
	warp_def 9, 16, 3, 0, MAP_ROUTE16_NORTH_ENTRANCE_2F

Route16_NorthEntrance_1F_MapCoordEvents:
	coord_event 10, 12, 3, VAR_MAP_SCENE_ROUTE16, 1, EventScript_SetExitingCyclingRoad
	coord_event 2, 12, 3, VAR_MAP_SCENE_ROUTE16, 0, EventScript_SetEnteringCyclingRoad
	coord_event 6, 10, 3, VAR_TEMP_1, 0, Route16_NorthEntrance_1F_EventScript_NeedBikeTriggerTop
	coord_event 6, 11, 3, VAR_TEMP_1, 0, Route16_NorthEntrance_1F_EventScript_NeedBikeTriggerMidTop
	coord_event 1, 13, 3, VAR_MAP_SCENE_ROUTE16, 0, EventScript_SetEnteringCyclingRoad
	coord_event 1, 11, 3, VAR_MAP_SCENE_ROUTE16, 0, EventScript_SetEnteringCyclingRoad
	coord_event 11, 11, 3, VAR_MAP_SCENE_ROUTE16, 1, EventScript_SetExitingCyclingRoad
	coord_event 11, 13, 3, VAR_MAP_SCENE_ROUTE16, 1, EventScript_SetExitingCyclingRoad
	coord_event 6, 12, 3, VAR_TEMP_1, 0, Route16_NorthEntrance_1F_EventScript_NeedBikeTriggerMid
	coord_event 6, 13, 3, VAR_TEMP_1, 0, Route16_NorthEntrance_1F_EventScript_NeedBikeTriggerMidBottom
	coord_event 6, 14, 3, VAR_TEMP_1, 0, Route16_NorthEntrance_1F_EventScript_NeedBikeTriggerBottom

Route16_NorthEntrance_1F_MapEvents::
	map_events Route16_NorthEntrance_1F_ObjectEvents, Route16_NorthEntrance_1F_MapWarps, Route16_NorthEntrance_1F_MapCoordEvents, NULL

