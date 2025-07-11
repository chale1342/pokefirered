@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Route18_EastEntrance_1F/map.json
@

	.align 2

Route18_EastEntrance_1F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_POLICEMAN, 6, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, Route18_EastEntrance_1F_EventScript_Guard, 0

Route18_EastEntrance_1F_MapWarps:
	warp_def 1, 6, 3, 0, MAP_ROUTE18
	warp_def 11, 6, 3, 1, MAP_ROUTE18
	warp_def 9, 10, 3, 0, MAP_ROUTE18_EAST_ENTRANCE_2F

Route18_EastEntrance_1F_MapCoordEvents:
	coord_event 2, 6, 3, VAR_MAP_SCENE_ROUTE16, 0, EventScript_SetEnteringCyclingRoad
	coord_event 6, 4, 3, VAR_TEMP_1, 0, Route18_EastEntrance_1F_EventScript_NeedBikeTriggerTop
	coord_event 6, 5, 3, VAR_TEMP_1, 0, Route18_EastEntrance_1F_EventScript_NeedBikeTriggerMidTop
	coord_event 6, 6, 3, VAR_TEMP_1, 0, Route18_EastEntrance_1F_EventScript_NeedBikeTriggerMid
	coord_event 6, 7, 3, VAR_TEMP_1, 0, Route18_EastEntrance_1F_EventScript_NeedBikeTriggerMidBottom
	coord_event 6, 8, 3, VAR_TEMP_1, 0, Route18_EastEntrance_1F_EventScript_NeedBikeTriggerBottom
	coord_event 10, 6, 3, VAR_MAP_SCENE_ROUTE16, 1, EventScript_SetExitingCyclingRoad
	coord_event 11, 5, 3, VAR_MAP_SCENE_ROUTE16, 1, EventScript_SetExitingCyclingRoad
	coord_event 11, 7, 3, VAR_MAP_SCENE_ROUTE16, 1, EventScript_SetExitingCyclingRoad
	coord_event 1, 5, 3, VAR_MAP_SCENE_ROUTE16, 0, EventScript_SetEnteringCyclingRoad
	coord_event 1, 7, 3, VAR_MAP_SCENE_ROUTE16, 0, EventScript_SetEnteringCyclingRoad

Route18_EastEntrance_1F_MapEvents::
	map_events Route18_EastEntrance_1F_ObjectEvents, Route18_EastEntrance_1F_MapWarps, Route18_EastEntrance_1F_MapCoordEvents, NULL

