@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SilphCo_9F/map.json
@

	.align 2

SilphCo_9F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_SCIENTIST, 26, 16, 3, MOVEMENT_TYPE_WANDER_UP_AND_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 2, SilphCo_9F_EventScript_Ed, FLAG_HIDE_SILPH_ROCKETS
	object_event 2, OBJ_EVENT_GFX_ROCKET_M, 15, 18, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NORMAL, 3, SilphCo_9F_EventScript_Grunt2, FLAG_HIDE_SILPH_ROCKETS
	object_event 3, OBJ_EVENT_GFX_WOMAN_2, 2, 16, 0, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SilphCo_9F_EventScript_HealWoman, 0
	object_event 4, OBJ_EVENT_GFX_ROCKET_M, 1, 6, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 5, SilphCo_9F_EventScript_Grunt1, FLAG_HIDE_SILPH_ROCKETS

SilphCo_9F_MapWarps:
	warp_def 16, 2, 0, 0, MAP_SILPH_CO_8F
	warp_def 22, 18, 3, 3, MAP_SILPH_CO_5F
	warp_def 9, 4, 3, 4, MAP_SILPH_CO_3F
	warp_def 18, 2, 3, 3, MAP_SILPH_CO_10F
	warp_def 24, 3, 0, 0, MAP_SILPH_CO_ELEVATOR

SilphCo_9F_MapBGEvents:
	bg_hidden_item_event 11, 14, 3, ITEM_MAX_POTION, FLAG_HIDDEN_ITEM_SILPH_CO_9F_MAX_POTION, 1, FALSE
	bg_sign_event 3, 10, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_9F_EventScript_Door1
	bg_sign_event 3, 11, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_9F_EventScript_Door1
	bg_sign_event 13, 16, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_9F_EventScript_Door2
	bg_sign_event 13, 17, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_9F_EventScript_Door2
	bg_sign_event 21, 6, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_9F_EventScript_Door3
	bg_sign_event 22, 6, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_9F_EventScript_Door3
	bg_sign_event 22, 7, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_9F_EventScript_Door3
	bg_sign_event 21, 7, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_9F_EventScript_Door3
	bg_sign_event 21, 13, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_9F_EventScript_Door4
	bg_sign_event 21, 12, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_9F_EventScript_Door4
	bg_sign_event 22, 12, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_9F_EventScript_Door4
	bg_sign_event 22, 13, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_9F_EventScript_Door4
	bg_sign_event 2, 11, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_9F_EventScript_Door1
	bg_sign_event 2, 10, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_9F_EventScript_Door1
	bg_sign_event 12, 16, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_9F_EventScript_Door2
	bg_sign_event 12, 17, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_9F_EventScript_Door2
	bg_hidden_item_event 5, 8, 0, ITEM_CALCIUM, FLAG_HIDDEN_ITEM_SILPH_CO_9F_CALCIUM, 1, FALSE
	bg_sign_event 17, 1, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_9F_EventScript_FloorSign

SilphCo_9F_MapEvents::
	map_events SilphCo_9F_ObjectEvents, SilphCo_9F_MapWarps, NULL, SilphCo_9F_MapBGEvents

