@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SilphCo_4F/map.json
@

	.align 2

SilphCo_4F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_ROCKET_M, 33, 16, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NORMAL, 1, SilphCo_4F_EventScript_Grunt2, FLAG_HIDE_SILPH_ROCKETS
	object_event 2, OBJ_EVENT_GFX_ROCKET_M, 10, 19, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NORMAL, 5, SilphCo_4F_EventScript_Grunt1, FLAG_HIDE_SILPH_ROCKETS
	object_event 3, OBJ_EVENT_GFX_SCIENTIST, 14, 8, 3, MOVEMENT_TYPE_FACE_DOWN_AND_LEFT, 1, 1, TRAINER_TYPE_NORMAL, 2, SilphCo_4F_EventScript_Rodney, FLAG_HIDE_SILPH_ROCKETS
	object_event 4, OBJ_EVENT_GFX_WORKER_M, 5, 5, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, SilphCo_4F_EventScript_WorkerM, 0
	object_event 5, OBJ_EVENT_GFX_ITEM_BALL, 3, 11, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SilphCo_4F_EventScript_ItemMaxRevive, FLAG_HIDE_SILPH_CO_4F_MAX_REVIVE
	object_event 6, OBJ_EVENT_GFX_ITEM_BALL, 4, 12, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SilphCo_4F_EventScript_ItemEscapeRope, FLAG_HIDE_SILPH_CO_4F_ESCAPE_ROPE
	object_event 7, OBJ_EVENT_GFX_ITEM_BALL, 2, 13, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SilphCo_4F_EventScript_ItemFullHeal, FLAG_HIDE_SILPH_CO_4F_FULL_HEAL
	object_event 8, OBJ_EVENT_GFX_ITEM_BALL, 30, 18, 0, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SilphCo_4F_EventScript_ItemTM41, FLAG_HIDE_SILPH_CO_4F_TM41

SilphCo_4F_MapWarps:
	warp_def 28, 2, 3, 0, MAP_SILPH_CO_5F
	warp_def 18, 6, 3, 3, MAP_SILPH_CO_6F
	warp_def 30, 2, 3, 3, MAP_SILPH_CO_3F
	warp_def 12, 9, 3, 1, MAP_SILPH_CO_10F
	warp_def 2, 20, 3, 4, MAP_SILPH_CO_10F
	warp_def 18, 14, 3, 2, MAP_SILPH_CO_10F
	warp_def 22, 3, 0, 0, MAP_SILPH_CO_ELEVATOR

SilphCo_4F_MapBGEvents:
	bg_sign_event 3, 16, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_4F_EventScript_Door1
	bg_sign_event 4, 16, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_4F_EventScript_Door1
	bg_sign_event 3, 17, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_4F_EventScript_Door1
	bg_sign_event 4, 17, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_4F_EventScript_Door1
	bg_sign_event 15, 11, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_4F_EventScript_Door2
	bg_sign_event 14, 11, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_4F_EventScript_Door2
	bg_sign_event 14, 12, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_4F_EventScript_Door2
	bg_sign_event 15, 12, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_4F_EventScript_Door2
	bg_hidden_item_event 35, 20, 0, ITEM_IRON, FLAG_HIDDEN_ITEM_SILPH_CO_4F_IRON, 1, FALSE
	bg_sign_event 29, 1, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_4F_EventScript_FloorSign

SilphCo_4F_MapEvents::
	map_events SilphCo_4F_ObjectEvents, SilphCo_4F_MapWarps, NULL, SilphCo_4F_MapBGEvents

