@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SilphCo_7F/map.json
@

	.align 2

SilphCo_7F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_BLUE, 2, 6, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NONE, 0, 0x0, FLAG_HIDE_SILPH_RIVAL
	object_event 2, OBJ_EVENT_GFX_WORKER_M, 0, 7, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, SilphCo_7F_EventScript_LaprasGuy, 0
	object_event 3, OBJ_EVENT_GFX_ROCKET_M, 24, 5, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NORMAL, 4, SilphCo_7F_EventScript_Grunt1, FLAG_HIDE_SILPH_ROCKETS
	object_event 4, OBJ_EVENT_GFX_ROCKET_M, 24, 15, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NORMAL, 2, SilphCo_7F_EventScript_Grunt2, FLAG_HIDE_SILPH_ROCKETS
	object_event 5, OBJ_EVENT_GFX_ROCKET_M, 13, 4, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 3, SilphCo_7F_EventScript_Grunt3, FLAG_HIDE_SILPH_ROCKETS
	object_event 6, OBJ_EVENT_GFX_WORKER_F, 10, 10, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, SilphCo_7F_EventScript_WorkerF, 0
	object_event 7, OBJ_EVENT_GFX_WORKER_M, 13, 14, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, SilphCo_7F_EventScript_WorkerM1, 0
	object_event 8, OBJ_EVENT_GFX_WORKER_M, 9, 14, 3, MOVEMENT_TYPE_WALK_LEFT_AND_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, SilphCo_7F_EventScript_WorkerM2, 0
	object_event 9, OBJ_EVENT_GFX_SCIENTIST, 3, 13, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 2, 1, TRAINER_TYPE_NORMAL, 1, SilphCo_7F_EventScript_Joshua, FLAG_HIDE_SILPH_ROCKETS
	object_event 10, OBJ_EVENT_GFX_ITEM_BALL, 0, 12, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SilphCo_7F_EventScript_ItemCalcium, FLAG_HIDE_SILPH_CO_7F_CALCIUM
	object_event 11, OBJ_EVENT_GFX_ITEM_BALL, 30, 11, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SilphCo_7F_EventScript_ItemTM08, FLAG_HIDE_SILPH_CO_7F_TM08

SilphCo_7F_MapWarps:
	warp_def 19, 2, 3, 0, MAP_SILPH_CO_6F
	warp_def 5, 8, 3, 1, MAP_SILPH_CO_11F
	warp_def 25, 17, 3, 5, MAP_SILPH_CO_5F
	warp_def 27, 2, 3, 3, MAP_SILPH_CO_8F
	warp_def 5, 4, 3, 2, MAP_SILPH_CO_3F
	warp_def 23, 3, 0, 0, MAP_SILPH_CO_ELEVATOR

SilphCo_7F_MapCoordEvents:
	coord_event 2, 4, 3, VAR_MAP_SCENE_SILPH_CO_7F, 0, SilphCo_7F_EventScript_RivalTriggerTop
	coord_event 2, 5, 3, VAR_MAP_SCENE_SILPH_CO_7F, 0, SilphCo_7F_EventScript_RivalTriggerBottom

SilphCo_7F_MapBGEvents:
	bg_sign_event 11, 8, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_7F_EventScript_Door1
	bg_sign_event 12, 8, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_7F_EventScript_Door1
	bg_sign_event 11, 9, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_7F_EventScript_Door1
	bg_sign_event 12, 9, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_7F_EventScript_Door1
	bg_sign_event 24, 7, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_7F_EventScript_Door2
	bg_sign_event 25, 7, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_7F_EventScript_Door2
	bg_sign_event 25, 8, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_7F_EventScript_Door2
	bg_sign_event 24, 8, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_7F_EventScript_Door2
	bg_sign_event 25, 13, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_7F_EventScript_Door3
	bg_sign_event 26, 13, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_7F_EventScript_Door3
	bg_sign_event 25, 14, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_7F_EventScript_Door3
	bg_sign_event 26, 14, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_7F_EventScript_Door3
	bg_hidden_item_event 22, 11, 0, ITEM_ZINC, FLAG_HIDDEN_ITEM_SILPH_CO_7F_ZINC, 1, FALSE
	bg_sign_event 20, 1, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_7F_EventScript_FloorSign

SilphCo_7F_MapEvents::
	map_events SilphCo_7F_ObjectEvents, SilphCo_7F_MapWarps, SilphCo_7F_MapCoordEvents, SilphCo_7F_MapBGEvents

