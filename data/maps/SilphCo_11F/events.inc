@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SilphCo_11F/map.json
@

	.align 2

SilphCo_11F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_OLD_MAN_2, 9, 9, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SilphCo_11F_EventScript_President, 0
	object_event 2, OBJ_EVENT_GFX_WORKER_F, 11, 9, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SilphCo_11F_EventScript_Secretary, 0
	object_event 3, OBJ_EVENT_GFX_GIOVANNI, 6, 11, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, 0x0, FLAG_HIDE_SILPH_ROCKETS
	object_event 4, OBJ_EVENT_GFX_ROCKET_M, 16, 12, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NORMAL, 5, SilphCo_11F_EventScript_Grunt1, FLAG_HIDE_SILPH_ROCKETS
	object_event 5, OBJ_EVENT_GFX_ITEM_BALL, 16, 18, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SilphCo_11F_EventScript_ItemZinc, FLAG_HIDE_SILPH_CO_11F_ZINC
	object_event 6, OBJ_EVENT_GFX_ROCKET_M, 2, 19, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NORMAL, 5, SilphCo_11F_EventScript_Grunt2, FLAG_HIDE_SILPH_ROCKETS

SilphCo_11F_MapWarps:
	warp_def 7, 2, 3, 0, MAP_SILPH_CO_10F
	warp_def 2, 5, 3, 1, MAP_SILPH_CO_7F
	warp_def 13, 3, 0, 0, MAP_SILPH_CO_ELEVATOR

SilphCo_11F_MapCoordEvents:
	coord_event 5, 15, 3, VAR_MAP_SCENE_SILPH_CO_11F, 0, SilphCo_11F_EventScript_GiovanniTriggerLeft
	coord_event 6, 15, 3, VAR_MAP_SCENE_SILPH_CO_11F, 0, SilphCo_11F_EventScript_GiovanniTriggerRight

SilphCo_11F_MapBGEvents:
	bg_sign_event 5, 16, 3, BG_EVENT_PLAYER_FACING_ANY, SilphCo_11F_EventScript_Door
	bg_sign_event 5, 17, 3, BG_EVENT_PLAYER_FACING_ANY, SilphCo_11F_EventScript_Door
	bg_sign_event 6, 16, 3, BG_EVENT_PLAYER_FACING_ANY, SilphCo_11F_EventScript_Door
	bg_sign_event 6, 17, 3, BG_EVENT_PLAYER_FACING_ANY, SilphCo_11F_EventScript_Door
	bg_hidden_item_event 10, 18, 0, ITEM_REVIVE, FLAG_HIDDEN_ITEM_SILPH_CO_11F_REVIVE, 1, FALSE
	bg_sign_event 8, 1, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_11F_EventScript_FloorSign

SilphCo_11F_MapEvents::
	map_events SilphCo_11F_ObjectEvents, SilphCo_11F_MapWarps, SilphCo_11F_MapCoordEvents, SilphCo_11F_MapBGEvents

