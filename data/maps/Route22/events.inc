@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Route22/map.json
@

	.align 2

Route22_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_BLUE, 25, 4, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, 0x0, FLAG_HIDE_ROUTE_22_RIVAL

Route22_MapWarps:
	warp_def 8, 5, 0, 2, MAP_ROUTE22_NORTH_ENTRANCE
	warp_def 9, 5, 0, 2, MAP_ROUTE22_NORTH_ENTRANCE

Route22_MapCoordEvents:
	coord_event 33, 4, 3, VAR_MAP_SCENE_ROUTE22, 1, Route22_EventScript_EarlyRivalTriggerTop
	coord_event 33, 5, 3, VAR_MAP_SCENE_ROUTE22, 1, Route22_EventScript_EarlyRivalTriggerMid
	coord_event 33, 6, 0, VAR_MAP_SCENE_ROUTE22, 1, Route22_EventScript_EarlyRivalTriggerBottom
	coord_event 33, 4, 3, VAR_MAP_SCENE_ROUTE22, 3, Route22_EventScript_LateRivalTriggerTop
	coord_event 33, 5, 3, VAR_MAP_SCENE_ROUTE22, 3, Route22_EventScript_LateRivalTriggerMid
	coord_event 33, 6, 0, VAR_MAP_SCENE_ROUTE22, 3, Route22_EventScript_LateRivalTriggerBottom

Route22_MapBGEvents:
	bg_sign_event 7, 12, 0, BG_EVENT_PLAYER_FACING_ANY, Route22_EventScript_LeagueGateSign

Route22_MapEvents::
	map_events Route22_ObjectEvents, Route22_MapWarps, Route22_MapCoordEvents, Route22_MapBGEvents

