@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Route11_EastEntrance_2F/map.json
@

	.align 2

Route11_EastEntrance_2F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_YOUNGSTER, 7, 3, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 2, 1, TRAINER_TYPE_NONE, 0, Route11_EastEntrance_2F_EventScript_Turner, 0
	object_event 2, OBJ_EVENT_GFX_SCIENTIST, 2, 6, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, Route11_EastEntrance_2F_EventScript_Aide, 0

Route11_EastEntrance_2F_MapWarps:
	warp_def 10, 9, 3, 4, MAP_ROUTE11_EAST_ENTRANCE_1F

Route11_EastEntrance_2F_MapBGEvents:
	bg_sign_event 4, 1, 0, BG_EVENT_PLAYER_FACING_ANY, Route11_EastEntrance_2F_EventScript_LeftBinoculars
	bg_sign_event 8, 1, 0, BG_EVENT_PLAYER_FACING_ANY, Route11_EastEntrance_2F_EventScript_RightBinoculars

Route11_EastEntrance_2F_MapEvents::
	map_events Route11_EastEntrance_2F_ObjectEvents, Route11_EastEntrance_2F_MapWarps, NULL, Route11_EastEntrance_2F_MapBGEvents

