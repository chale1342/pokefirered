@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Route12_NorthEntrance_2F/map.json
@

	.align 2

Route12_NorthEntrance_2F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_LASS, 7, 5, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, Route12_NorthEntrance_2F_EventScript_Lass, 0

Route12_NorthEntrance_2F_MapWarps:
	warp_def 10, 9, 3, 4, MAP_ROUTE12_NORTH_ENTRANCE_1F

Route12_NorthEntrance_2F_MapBGEvents:
	bg_sign_event 4, 1, 0, BG_EVENT_PLAYER_FACING_ANY, Route12_NorthEntrance_2F_EventScript_LeftBinoculars
	bg_sign_event 8, 1, 0, BG_EVENT_PLAYER_FACING_ANY, Route12_NorthEntrance_2F_EventScript_RightBinoculars

Route12_NorthEntrance_2F_MapEvents::
	map_events Route12_NorthEntrance_2F_ObjectEvents, Route12_NorthEntrance_2F_MapWarps, NULL, Route12_NorthEntrance_2F_MapBGEvents

