@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Route16_NorthEntrance_2F/map.json
@

	.align 2

Route16_NorthEntrance_2F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_LITTLE_BOY, 6, 3, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, Route16_NorthEntrance_2F_EventScript_LittleBoy, 0
	object_event 2, OBJ_EVENT_GFX_LITTLE_GIRL, 4, 8, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, Route16_NorthEntrance_2F_EventScript_LittleGirl, 0
	object_event 3, OBJ_EVENT_GFX_SCIENTIST, 10, 6, 0, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, Route16_NorthEntrance_2F_EventScript_Aide, 0

Route16_NorthEntrance_2F_MapWarps:
	warp_def 10, 9, 3, 4, MAP_ROUTE16_NORTH_ENTRANCE_1F

Route16_NorthEntrance_2F_MapBGEvents:
	bg_sign_event 4, 1, 0, BG_EVENT_PLAYER_FACING_ANY, Route16_NorthEntrance_2F_EventScript_LeftBinoculars
	bg_sign_event 8, 1, 0, BG_EVENT_PLAYER_FACING_ANY, Route16_NorthEntrance_2F_EventScript_RightBinoculars

Route16_NorthEntrance_2F_MapEvents::
	map_events Route16_NorthEntrance_2F_ObjectEvents, Route16_NorthEntrance_2F_MapWarps, NULL, Route16_NorthEntrance_2F_MapBGEvents

