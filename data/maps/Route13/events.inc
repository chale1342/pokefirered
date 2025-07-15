@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Route13/map.json
@

	.align 2

Route13_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_PICNICKER, 62, 6, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NORMAL, 1, Route13_EventScript_Alma, 0
	object_event 2, OBJ_EVENT_GFX_ROCKER, 63, 12, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NORMAL, 1, Route13_EventScript_Sebastian, 0
	object_event 3, OBJ_EVENT_GFX_PICNICKER, 54, 11, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NORMAL, 1, Route13_EventScript_Susie, 0
	object_event 4, OBJ_EVENT_GFX_BEAUTY, 42, 7, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 3, Route13_EventScript_Sheila, 0
	object_event 5, OBJ_EVENT_GFX_BEAUTY, 43, 7, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 3, Route13_EventScript_Lola, 0
	object_event 6, OBJ_EVENT_GFX_PICNICKER, 35, 10, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 1, Route13_EventScript_Valerie, 0
	object_event 7, OBJ_EVENT_GFX_PICNICKER, 29, 11, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NORMAL, 3, Route13_EventScript_Gwen, 0
	object_event 8, OBJ_EVENT_GFX_ROCKER, 9, 14, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NORMAL, 3, Route13_EventScript_Robert, 0
	object_event 9, OBJ_EVENT_GFX_ROCKER, 16, 5, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NORMAL, 3, Route13_EventScript_Perry, 0
	object_event 10, OBJ_EVENT_GFX_BIKER, 14, 8, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NORMAL, 1, Route13_EventScript_Jared, 0
	object_event 11, OBJ_EVENT_GFX_CUT_TREE, 44, 5, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, EventScript_CutTree, FLAG_CUT_TREE_ROUTE13_1

Route13_MapBGEvents:
	bg_sign_event 41, 12, 0, BG_EVENT_PLAYER_FACING_ANY, Route13_EventScript_RouteSign
	bg_sign_event 37, 6, 0, BG_EVENT_PLAYER_FACING_ANY, Route13_EventScript_TrainerTips2
	bg_sign_event 21, 14, 0, BG_EVENT_PLAYER_FACING_ANY, Route13_EventScript_TrainerTips1
	bg_hidden_item_event 23, 14, 3, ITEM_PP_UP, FLAG_HIDDEN_ITEM_ROUTE13_PP_UP, 1, FALSE

Route13_MapEvents::
	map_events Route13_ObjectEvents, NULL, NULL, Route13_MapBGEvents

