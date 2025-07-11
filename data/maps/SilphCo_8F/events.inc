@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SilphCo_8F/map.json
@

	.align 2

SilphCo_8F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_ROCKET_M, 28, 5, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NORMAL, 4, SilphCo_8F_EventScript_Grunt1, FLAG_HIDE_SILPH_ROCKETS
	object_event 2, OBJ_EVENT_GFX_ROCKET_M, 10, 17, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NORMAL, 5, SilphCo_8F_EventScript_Grunt2, FLAG_HIDE_SILPH_ROCKETS
	object_event 3, OBJ_EVENT_GFX_SCIENTIST, 9, 4, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 2, SilphCo_8F_EventScript_Parker, FLAG_HIDE_SILPH_ROCKETS
	object_event 4, OBJ_EVENT_GFX_WORKER_M, 2, 5, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, SilphCo_8F_EventScript_WorkerM, 0
	object_event 5, OBJ_EVENT_GFX_ITEM_BALL, 24, 8, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SilphCo_8F_EventScript_ItemIron, FLAG_HIDE_SILPH_CO_8F_IRON
	object_event 6, OBJ_EVENT_GFX_SCIENTIST, 29, 9, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SilphCo_8F_EventScript_Scientist, 0

SilphCo_8F_MapWarps:
	warp_def 16, 2, 3, 0, MAP_SILPH_CO_9F
	warp_def 11, 10, 3, 4, MAP_SILPH_CO_8F
	warp_def 10, 6, 3, 5, MAP_SILPH_CO_2F
	warp_def 28, 2, 3, 3, MAP_SILPH_CO_7F
	warp_def 2, 12, 3, 1, MAP_SILPH_CO_8F
	warp_def 2, 17, 3, 2, MAP_SILPH_CO_2F
	warp_def 22, 3, 0, 0, MAP_SILPH_CO_ELEVATOR

SilphCo_8F_MapBGEvents:
	bg_sign_event 6, 10, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_8F_EventScript_Door
	bg_sign_event 6, 11, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_8F_EventScript_Door
	bg_sign_event 5, 11, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_8F_EventScript_Door
	bg_sign_event 5, 10, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_8F_EventScript_Door
	bg_hidden_item_event 29, 10, 0, ITEM_NUGGET, FLAG_HIDDEN_ITEM_SILPH_CO_8F_NUGGET, 1, FALSE
	bg_sign_event 27, 1, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_8F_EventScript_FloorSign

SilphCo_8F_MapEvents::
	map_events SilphCo_8F_ObjectEvents, SilphCo_8F_MapWarps, NULL, SilphCo_8F_MapBGEvents

