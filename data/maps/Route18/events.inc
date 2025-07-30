@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Route18/map.json
@

	.align 2

Route18_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_ROCKER, 46, 14, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NORMAL, 4, Route18_EventScript_Jacob, 0
	object_event 2, OBJ_EVENT_GFX_ROCKER, 41, 15, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NORMAL, 1, Route18_EventScript_Ramiro, 0
	object_event 3, OBJ_EVENT_GFX_ROCKER, 39, 12, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NORMAL, 6, Route18_EventScript_Wilton, 0

Route18_MapWarps:
	warp_def 41, 9, 3, 0, MAP_ROUTE18_EAST_ENTRANCE_1F
	warp_def 48, 9, 3, 1, MAP_ROUTE18_EAST_ENTRANCE_1F

Route18_MapBGEvents:
	bg_sign_event 37, 7, 0, BG_EVENT_PLAYER_FACING_ANY, Route18_EventScript_CyclingRoadSign
	bg_sign_event 52, 7, 0, BG_EVENT_PLAYER_FACING_ANY, Route18_EventScript_RouteSign

Route18_MapEvents::
	map_events Route18_ObjectEvents, Route18_MapWarps, NULL, Route18_MapBGEvents

