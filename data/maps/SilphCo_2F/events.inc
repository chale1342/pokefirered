@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SilphCo_2F/map.json
@

	.align 2

SilphCo_2F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_ROCKET_M, 29, 12, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NORMAL, 5, SilphCo_2F_EventScript_Grunt2, FLAG_HIDE_SILPH_ROCKETS
	object_event 2, OBJ_EVENT_GFX_SCIENTIST, 28, 18, 3, MOVEMENT_TYPE_FACE_UP_AND_LEFT, 1, 1, TRAINER_TYPE_NORMAL, 4, SilphCo_2F_EventScript_Jerry, FLAG_HIDE_SILPH_ROCKETS
	object_event 3, OBJ_EVENT_GFX_ROCKET_M, 20, 14, 3, MOVEMENT_TYPE_FACE_DOWN_AND_UP, 1, 1, TRAINER_TYPE_NORMAL, 3, SilphCo_2F_EventScript_Grunt1, FLAG_HIDE_SILPH_ROCKETS
	object_event 4, OBJ_EVENT_GFX_SCIENTIST, 5, 19, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NORMAL, 0, SilphCo_2F_EventScript_Connor, FLAG_HIDE_SILPH_ROCKETS
	object_event 5, OBJ_EVENT_GFX_WOMAN_2, 10, 4, 0, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NONE, 0, SilphCo_2F_EventScript_ThunderWaveTutor, 0

SilphCo_2F_MapWarps:
	warp_def 28, 2, 3, 0, MAP_SILPH_CO_3F
	warp_def 2, 6, 3, 8, MAP_SILPH_CO_3F
	warp_def 15, 6, 3, 5, MAP_SILPH_CO_8F
	warp_def 30, 2, 3, 3, MAP_SILPH_CO_1F
	warp_def 7, 19, 3, 1, MAP_SILPH_CO_6F
	warp_def 33, 19, 3, 2, MAP_SILPH_CO_8F
	warp_def 22, 3, 0, 0, MAP_SILPH_CO_ELEVATOR

SilphCo_2F_MapBGEvents:
	bg_sign_event 5, 8, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_2F_EventScript_Door1
	bg_sign_event 6, 8, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_2F_EventScript_Door1
	bg_sign_event 5, 9, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_2F_EventScript_Door1
	bg_sign_event 6, 9, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_2F_EventScript_Door1
	bg_sign_event 5, 15, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_2F_EventScript_Door2
	bg_sign_event 6, 15, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_2F_EventScript_Door2
	bg_sign_event 5, 16, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_2F_EventScript_Door2
	bg_sign_event 6, 16, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_2F_EventScript_Door2
	bg_hidden_item_event 11, 21, 0, ITEM_ULTRA_BALL, FLAG_HIDDEN_ITEM_SILPH_CO_2F_ULTRA_BALL, 1, FALSE
	bg_sign_event 29, 1, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_2F_EventScript_FloorSign

SilphCo_2F_MapEvents::
	map_events SilphCo_2F_ObjectEvents, SilphCo_2F_MapWarps, NULL, SilphCo_2F_MapBGEvents

