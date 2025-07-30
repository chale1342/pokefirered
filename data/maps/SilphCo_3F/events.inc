@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SilphCo_3F/map.json
@

	.align 2

SilphCo_3F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_ROCKET_M, 25, 9, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NORMAL, 3, SilphCo_3F_EventScript_Grunt, FLAG_HIDE_SILPH_ROCKETS
	object_event 2, OBJ_EVENT_GFX_WORKER_M, 31, 13, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, SilphCo_3F_EventScript_WorkerM, 0
	object_event 3, OBJ_EVENT_GFX_SCIENTIST, 4, 12, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NORMAL, 0, SilphCo_3F_EventScript_Jose, FLAG_HIDE_SILPH_ROCKETS
	object_event 4, OBJ_EVENT_GFX_ITEM_BALL, 8, 10, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SilphCo_3F_EventScript_ItemHyperPotion, FLAG_HIDE_SILPH_CO_3F_HYPER_POTION

SilphCo_3F_MapWarps:
	warp_def 28, 2, 3, 0, MAP_SILPH_CO_2F
	warp_def 4, 6, 3, 1, MAP_SILPH_CO_5F
	warp_def 13, 14, 3, 4, MAP_SILPH_CO_7F
	warp_def 30, 2, 3, 2, MAP_SILPH_CO_4F
	warp_def 2, 14, 3, 2, MAP_SILPH_CO_9F
	warp_def 3, 20, 3, 4, MAP_SILPH_CO_5F
	warp_def 29, 14, 3, 7, MAP_SILPH_CO_3F
	warp_def 32, 20, 3, 6, MAP_SILPH_CO_3F
	warp_def 33, 5, 3, 1, MAP_SILPH_CO_2F
	warp_def 22, 3, 0, 0, MAP_SILPH_CO_ELEVATOR

SilphCo_3F_MapBGEvents:
	bg_sign_event 10, 12, 3, BG_EVENT_PLAYER_FACING_ANY, SilphCo_3F_EventScript_Door1
	bg_sign_event 10, 13, 3, BG_EVENT_PLAYER_FACING_ANY, SilphCo_3F_EventScript_Door1
	bg_sign_event 21, 12, 3, BG_EVENT_PLAYER_FACING_ANY, SilphCo_3F_EventScript_Door2
	bg_sign_event 21, 13, 3, BG_EVENT_PLAYER_FACING_ANY, SilphCo_3F_EventScript_Door2
	bg_sign_event 9, 12, 3, BG_EVENT_PLAYER_FACING_ANY, SilphCo_3F_EventScript_Door1
	bg_sign_event 9, 13, 3, BG_EVENT_PLAYER_FACING_ANY, SilphCo_3F_EventScript_Door1
	bg_sign_event 20, 12, 3, BG_EVENT_PLAYER_FACING_ANY, SilphCo_3F_EventScript_Door2
	bg_sign_event 20, 13, 3, BG_EVENT_PLAYER_FACING_ANY, SilphCo_3F_EventScript_Door2
	bg_hidden_item_event 34, 18, 0, ITEM_PROTEIN, FLAG_HIDDEN_ITEM_SILPH_CO_3F_PROTEIN, 1, FALSE
	bg_sign_event 29, 1, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_3F_EventScript_FloorSign

SilphCo_3F_MapEvents::
	map_events SilphCo_3F_ObjectEvents, SilphCo_3F_MapWarps, NULL, SilphCo_3F_MapBGEvents

