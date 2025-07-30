@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Route25_SeaCottage/map.json
@

	.align 2

Route25_SeaCottage_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_BILL, 7, 5, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, Route25_SeaCottage_EventScript_Bill, FLAG_HIDE_BILL_HUMAN_SEA_COTTAGE
	object_event 2, OBJ_EVENT_GFX_CLEFAIRY, 10, 6, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, Route25_SeaCottage_EventScript_Bill, FLAG_HIDE_BILL_CLEFAIRY

Route25_SeaCottage_MapWarps:
	warp_def 6, 9, 3, 0, MAP_ROUTE25
	warp_def 7, 9, 3, 0, MAP_ROUTE25
	warp_def 8, 9, 3, 0, MAP_ROUTE25

Route25_SeaCottage_MapBGEvents:
	bg_sign_event 4, 5, 0, BG_EVENT_PLAYER_FACING_NORTH, Route25_SeaCottage_EventScript_Computer

Route25_SeaCottage_MapEvents::
	map_events Route25_SeaCottage_ObjectEvents, Route25_SeaCottage_MapWarps, NULL, Route25_SeaCottage_MapBGEvents

