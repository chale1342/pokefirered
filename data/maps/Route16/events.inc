@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Route16/map.json
@

	.align 2

Route16_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_BIKER, 16, 12, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NORMAL, 1, Route16_EventScript_Lao, 0
	object_event 2, OBJ_EVENT_GFX_BIKER, 14, 14, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NORMAL, 1, Route16_EventScript_Koji, 0
	object_event 3, OBJ_EVENT_GFX_BIKER, 12, 12, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NORMAL, 1, Route16_EventScript_Luke, 0
	object_event 4, OBJ_EVENT_GFX_BIKER, 8, 12, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NORMAL, 1, Route16_EventScript_Ruben, 0
	object_event 5, OBJ_EVENT_GFX_BIKER, 10, 14, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NORMAL, 1, Route16_EventScript_Hideo, 0
	object_event 6, OBJ_EVENT_GFX_BIKER, 6, 14, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NORMAL, 1, Route16_EventScript_Camron, 0
	object_event 7, OBJ_EVENT_GFX_CUT_TREE, 41, 11, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, EventScript_CutTree, FLAG_TEMP_12
	object_event 8, OBJ_EVENT_GFX_BEAUTY, 30, 5, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 1, Route16_EventScript_Lea, 0
	object_event 9, OBJ_EVENT_GFX_MAN, 31, 5, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 1, Route16_EventScript_Jed, 0
	object_event 10, OBJ_EVENT_GFX_SNORLAX, 31, 13, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, Route16_EventScript_Snorlax, FLAG_HIDE_ROUTE_16_SNORLAX

Route16_MapWarps:
	warp_def 10, 5, 0, 1, MAP_ROUTE16_HOUSE
	warp_def 20, 6, 3, 0, MAP_ROUTE16_NORTH_ENTRANCE_1F
	warp_def 27, 6, 3, 1, MAP_ROUTE16_NORTH_ENTRANCE_1F
	warp_def 20, 13, 3, 2, MAP_ROUTE16_NORTH_ENTRANCE_1F
	warp_def 27, 13, 3, 3, MAP_ROUTE16_NORTH_ENTRANCE_1F

Route16_MapBGEvents:
	bg_sign_event 6, 17, 0, BG_EVENT_PLAYER_FACING_ANY, Route16_EventScript_RouteSign
	bg_sign_event 33, 11, 0, BG_EVENT_PLAYER_FACING_ANY, Route16_EventScript_CyclingRoadSign
	bg_hidden_item_event 31, 13, 3, ITEM_LEFTOVERS, FLAG_HIDDEN_ITEM_ROUTE16_LEFTOVERS, 1, TRUE

Route16_MapEvents::
	map_events Route16_ObjectEvents, Route16_MapWarps, NULL, Route16_MapBGEvents

