@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SilphCo_10F/map.json
@

	.align 2

SilphCo_10F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_SCIENTIST, 2, 7, 3, MOVEMENT_TYPE_WANDER_AROUND, 2, 2, TRAINER_TYPE_NORMAL, 1, SilphCo_10F_EventScript_Travis, FLAG_HIDE_SILPH_ROCKETS
	object_event 2, OBJ_EVENT_GFX_WORKER_F, 10, 17, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SilphCo_10F_EventScript_WorkerF, 0
	object_event 3, OBJ_EVENT_GFX_ROCKET_M, 0, 13, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NORMAL, 4, SilphCo_10F_EventScript_Grunt, FLAG_HIDE_SILPH_ROCKETS
	object_event 4, OBJ_EVENT_GFX_ITEM_BALL, 5, 15, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SilphCo_10F_EventScript_ItemCarbos, FLAG_HIDE_SILPH_CO_10F_CARBOS
	object_event 5, OBJ_EVENT_GFX_ITEM_BALL, 2, 15, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SilphCo_10F_EventScript_ItemUltraBall, FLAG_HIDE_SILPH_CO_10F_ULTRA_BALL
	object_event 6, OBJ_EVENT_GFX_ITEM_BALL, 3, 17, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SilphCo_10F_EventScript_ItemRareCandy, FLAG_HIDE_SILPH_CO_10F_RARE_CANDY

SilphCo_10F_MapWarps:
	warp_def 6, 2, 3, 0, MAP_SILPH_CO_11F
	warp_def 10, 14, 3, 3, MAP_SILPH_CO_4F
	warp_def 14, 9, 3, 5, MAP_SILPH_CO_4F
	warp_def 8, 2, 3, 3, MAP_SILPH_CO_9F
	warp_def 14, 17, 3, 4, MAP_SILPH_CO_4F
	warp_def 13, 3, 0, 0, MAP_SILPH_CO_ELEVATOR

SilphCo_10F_MapBGEvents:
	bg_sign_event 12, 11, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_10F_EventScript_Door
	bg_sign_event 13, 11, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_10F_EventScript_Door
	bg_sign_event 12, 12, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_10F_EventScript_Door
	bg_sign_event 13, 12, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_10F_EventScript_Door
	bg_hidden_item_event 9, 9, 0, ITEM_HP_UP, FLAG_HIDDEN_ITEM_SILPH_CO_10F_HP_UP, 1, FALSE
	bg_sign_event 7, 1, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_10F_EventScript_FloorSign

SilphCo_10F_MapEvents::
	map_events SilphCo_10F_ObjectEvents, SilphCo_10F_MapWarps, NULL, SilphCo_10F_MapBGEvents

