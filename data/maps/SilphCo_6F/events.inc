@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SilphCo_6F/map.json
@

	.align 2

SilphCo_6F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_ROCKET_M, 21, 5, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NORMAL, 2, SilphCo_6F_EventScript_Grunt1, FLAG_HIDE_SILPH_ROCKETS
	object_event 2, OBJ_EVENT_GFX_WORKER_M, 23, 9, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SilphCo_6F_EventScript_WorkerM1, 0
	object_event 3, OBJ_EVENT_GFX_WORKER_F, 24, 9, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SilphCo_6F_EventScript_WorkerF1, 0
	object_event 4, OBJ_EVENT_GFX_WORKER_M, 22, 13, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NONE, 0, SilphCo_6F_EventScript_WorkerM2, 0
	object_event 5, OBJ_EVENT_GFX_WORKER_M, 14, 9, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, SilphCo_6F_EventScript_WorkerM3, 0
	object_event 6, OBJ_EVENT_GFX_WORKER_F, 16, 12, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, SilphCo_6F_EventScript_WorkerF2, 0
	object_event 7, OBJ_EVENT_GFX_SCIENTIST, 9, 11, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 4, SilphCo_6F_EventScript_Taylor, FLAG_HIDE_SILPH_ROCKETS
	object_event 8, OBJ_EVENT_GFX_ITEM_BALL, 2, 14, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SilphCo_6F_EventScript_ItemHPUp, FLAG_HIDE_SILPH_CO_6F_HP_UP
	object_event 9, OBJ_EVENT_GFX_ITEM_BALL, 1, 17, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SilphCo_6F_EventScript_ItemXSpecial, FLAG_HIDE_SILPH_CO_6F_X_SPECIAL
	object_event 10, OBJ_EVENT_GFX_ROCKET_M, 18, 17, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NORMAL, 2, SilphCo_6F_EventScript_Grunt2, FLAG_HIDE_SILPH_ROCKETS

SilphCo_6F_MapWarps:
	warp_def 14, 2, 3, 0, MAP_SILPH_CO_7F
	warp_def 29, 5, 3, 4, MAP_SILPH_CO_2F
	warp_def 26, 2, 3, 2, MAP_SILPH_CO_5F
	warp_def 2, 6, 3, 1, MAP_SILPH_CO_4F
	warp_def 20, 3, 0, 0, MAP_SILPH_CO_ELEVATOR

SilphCo_6F_MapBGEvents:
	bg_sign_event 6, 15, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_6F_EventScript_Door
	bg_sign_event 6, 16, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_6F_EventScript_Door
	bg_sign_event 5, 15, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_6F_EventScript_Door
	bg_sign_event 5, 16, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_6F_EventScript_Door
	bg_hidden_item_event 1, 8, 0, ITEM_CARBOS, FLAG_HIDDEN_ITEM_SILPH_CO_6F_CARBOS, 1, FALSE
	bg_sign_event 25, 1, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_6F_EventScript_FloorSign

SilphCo_6F_MapEvents::
	map_events SilphCo_6F_ObjectEvents, SilphCo_6F_MapWarps, NULL, SilphCo_6F_MapBGEvents

