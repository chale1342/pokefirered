@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Route25/map.json
@

	.align 2

Route25_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_HIKER, 11, 4, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NORMAL, 4, Route25_EventScript_Franklin, 0
	object_event 2, OBJ_EVENT_GFX_YOUNGSTER, 18, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 2, Route25_EventScript_Joey, 0
	object_event 3, OBJ_EVENT_GFX_HIKER, 17, 7, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NORMAL, 2, Route25_EventScript_Wayne, 0
	object_event 4, OBJ_EVENT_GFX_YOUNGSTER, 22, 4, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NORMAL, 2, Route25_EventScript_Dan, 0
	object_event 5, OBJ_EVENT_GFX_PICNICKER, 22, 8, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NORMAL, 2, Route25_EventScript_Kelsey, 0
	object_event 6, OBJ_EVENT_GFX_HIKER, 27, 9, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NORMAL, 3, Route25_EventScript_Nob, 0
	object_event 7, OBJ_EVENT_GFX_CAMPER, 28, 4, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 3, Route25_EventScript_Flint, 0
	object_event 8, OBJ_EVENT_GFX_YOUNGSTER, 36, 4, 3, MOVEMENT_TYPE_WALK_DOWN_AND_UP, 1, 3, TRAINER_TYPE_NORMAL, 2, Route25_EventScript_Chad, 0
	object_event 9, OBJ_EVENT_GFX_LASS, 42, 5, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 3, Route25_EventScript_Haley, 0
	object_event 10, OBJ_EVENT_GFX_ITEM_BALL, 26, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, Route25_EventScript_ItemTM43, FLAG_HIDE_ROUTE25_TM43
	object_event 11, OBJ_EVENT_GFX_CUT_TREE, 30, 3, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, EventScript_CutTree, FLAG_TEMP_12
	object_event 12, OBJ_EVENT_GFX_BEAUTY, 49, 10, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, Route25_EventScript_Beauty, 0
	object_event 13, OBJ_EVENT_GFX_MAN, 49, 11, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, Route25_EventScript_Man, 0

Route25_MapWarps:
	warp_def 51, 4, 0, 1, MAP_ROUTE25_SEA_COTTAGE

Route25_MapBGEvents:
	bg_sign_event 48, 4, 0, BG_EVENT_PLAYER_FACING_ANY, Route25_EventScript_SeaCottageSign
	bg_hidden_item_event 14, 2, 3, ITEM_ELIXIR, FLAG_HIDDEN_ITEM_ROUTE25_ELIXIR, 1, FALSE
	bg_hidden_item_event 58, 6, 3, ITEM_ETHER, FLAG_HIDDEN_ITEM_ROUTE25_ETHER, 1, FALSE
	bg_hidden_item_event 33, 8, 3, ITEM_ORAN_BERRY, FLAG_HIDDEN_ITEM_ROUTE25_ORAN_BERRY, 1, FALSE
	bg_hidden_item_event 40, 3, 3, ITEM_BLUK_BERRY, FLAG_HIDDEN_ITEM_ROUTE25_BLUK_BERRY, 1, FALSE

Route25_MapEvents::
	map_events Route25_ObjectEvents, Route25_MapWarps, NULL, Route25_MapBGEvents

