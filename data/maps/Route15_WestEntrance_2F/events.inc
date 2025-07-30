@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Route15_WestEntrance_2F/map.json
@

	.align 2

Route15_WestEntrance_2F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_SCIENTIST, 5, 5, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NONE, 0, Route15_WestEntrance_2F_EventScript_Aide, 0

Route15_WestEntrance_2F_MapWarps:
	warp_def 10, 9, 3, 4, MAP_ROUTE15_WEST_ENTRANCE_1F

Route15_WestEntrance_2F_MapBGEvents:
	bg_sign_event 4, 1, 0, BG_EVENT_PLAYER_FACING_ANY, Route15_WestEntrance_2F_EventScript_LeftBinoculars
	bg_sign_event 8, 1, 0, BG_EVENT_PLAYER_FACING_ANY, Route15_WestEntrance_2F_EventScript_RightBinoculars

Route15_WestEntrance_2F_MapEvents::
	map_events Route15_WestEntrance_2F_ObjectEvents, Route15_WestEntrance_2F_MapWarps, NULL, Route15_WestEntrance_2F_MapBGEvents

