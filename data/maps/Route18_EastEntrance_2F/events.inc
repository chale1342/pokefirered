@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Route18_EastEntrance_2F/map.json
@

	.align 2

Route18_EastEntrance_2F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_BOY, 5, 3, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, Route18_EastEntrance_2F_EventScript_Haden, 0

Route18_EastEntrance_2F_MapWarps:
	warp_def 10, 9, 3, 2, MAP_ROUTE18_EAST_ENTRANCE_1F

Route18_EastEntrance_2F_MapBGEvents:
	bg_sign_event 4, 1, 0, BG_EVENT_PLAYER_FACING_ANY, Route18_EastEntrance_2F_EventScript_LeftBinoculars
	bg_sign_event 8, 1, 0, BG_EVENT_PLAYER_FACING_ANY, Route18_EastEntrance_2F_EventScript_RightBinoculars

Route18_EastEntrance_2F_MapEvents::
	map_events Route18_EastEntrance_2F_ObjectEvents, Route18_EastEntrance_2F_MapWarps, NULL, Route18_EastEntrance_2F_MapBGEvents

