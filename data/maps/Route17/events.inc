@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Route17/map.json
@

	.align 2

Route17_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_BIKER, 4, 18, 3, MOVEMENT_TYPE_WALK_DOWN_AND_UP, 1, 6, TRAINER_TYPE_NORMAL, 1, Route17_EventScript_Virgil, 0
	object_event 2, OBJ_EVENT_GFX_BIKER, 11, 15, 3, MOVEMENT_TYPE_WALK_DOWN_AND_UP, 1, 5, TRAINER_TYPE_NORMAL, 1, Route17_EventScript_Isaiah, 0
	object_event 3, OBJ_EVENT_GFX_BIKER, 15, 24, 3, MOVEMENT_TYPE_WALK_SEQUENCE_RIGHT_DOWN_LEFT_UP, 4, 2, TRAINER_TYPE_NORMAL, 1, Route17_EventScript_Raul, 0
	object_event 4, OBJ_EVENT_GFX_BIKER, 18, 41, 3, MOVEMENT_TYPE_WALK_DOWN_AND_UP, 1, 5, TRAINER_TYPE_NORMAL, 1, Route17_EventScript_Nikolas, 0
	object_event 5, OBJ_EVENT_GFX_BIKER, 7, 38, 3, MOVEMENT_TYPE_FACE_LEFT_AND_RIGHT, 1, 1, TRAINER_TYPE_NORMAL, 5, Route17_EventScript_Billy, 0
	object_event 6, OBJ_EVENT_GFX_BIKER, 2, 61, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NORMAL, 4, Route17_EventScript_Jamal, 0
	object_event 7, OBJ_EVENT_GFX_BIKER, 21, 61, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NORMAL, 3, Route17_EventScript_Zeek, 0
	object_event 8, OBJ_EVENT_GFX_BIKER, 18, 94, 3, MOVEMENT_TYPE_WALK_DOWN_AND_UP, 1, 5, TRAINER_TYPE_NORMAL, 1, Route17_EventScript_Corey, 0
	object_event 9, OBJ_EVENT_GFX_BIKER, 16, 134, 3, MOVEMENT_TYPE_WALK_SEQUENCE_LEFT_DOWN_RIGHT_UP, 8, 1, TRAINER_TYPE_NORMAL, 1, Route17_EventScript_William, 0
	object_event 10, OBJ_EVENT_GFX_BIKER, 4, 116, 3, MOVEMENT_TYPE_WALK_DOWN_AND_UP, 1, 5, TRAINER_TYPE_NORMAL, 1, Route17_EventScript_Jaxon, 0

Route17_MapBGEvents:
	bg_sign_event 12, 97, 0, BG_EVENT_PLAYER_FACING_ANY, Route17_EventScript_RouteSign
	bg_sign_event 12, 83, 0, BG_EVENT_PLAYER_FACING_ANY, Route17_EventScript_TrainerTips2
	bg_sign_event 12, 68, 0, BG_EVENT_PLAYER_FACING_ANY, Route17_EventScript_TrainerTips1
	bg_sign_event 12, 53, 0, BG_EVENT_PLAYER_FACING_ANY, Route17_EventScript_ItemsNotice
	bg_sign_event 12, 125, 3, BG_EVENT_PLAYER_FACING_ANY, Route17_EventScript_BallsNotice
	bg_sign_event 11, 157, 0, BG_EVENT_PLAYER_FACING_ANY, Route17_EventScript_CyclingRoadSign
	bg_hidden_item_event 18, 83, 3, ITEM_RARE_CANDY, FLAG_HIDDEN_ITEM_ROUTE17_RARE_CANDY, 1, FALSE
	bg_hidden_item_event 10, 53, 3, ITEM_FULL_RESTORE, FLAG_HIDDEN_ITEM_ROUTE17_FULL_RESTORE, 1, FALSE
	bg_hidden_item_event 4, 68, 3, ITEM_PP_UP, FLAG_HIDDEN_ITEM_ROUTE17_PP_UP, 1, FALSE
	bg_hidden_item_event 4, 125, 3, ITEM_MAX_REVIVE, FLAG_HIDDEN_ITEM_ROUTE17_MAX_REVIVE, 1, FALSE
	bg_hidden_item_event 14, 157, 3, ITEM_MAX_ELIXIR, FLAG_HIDDEN_ITEM_ROUTE17_MAX_ELIXIR, 1, FALSE

Route17_MapEvents::
	map_events Route17_ObjectEvents, NULL, NULL, Route17_MapBGEvents

