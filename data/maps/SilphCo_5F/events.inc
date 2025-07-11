@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SilphCo_5F/map.json
@

	.align 2

SilphCo_5F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_ROCKET_M, 35, 7, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NORMAL, 2, SilphCo_5F_EventScript_Grunt2, FLAG_HIDE_SILPH_ROCKETS
	object_event 2, OBJ_EVENT_GFX_ROCKER, 23, 13, 3, MOVEMENT_TYPE_FACE_DOWN_AND_UP, 1, 1, TRAINER_TYPE_NORMAL, 4, SilphCo_5F_EventScript_Dalton, FLAG_HIDE_SILPH_ROCKETS
	object_event 3, OBJ_EVENT_GFX_WORKER_M, 16, 13, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, SilphCo_5F_EventScript_WorkerM, 0
	object_event 4, OBJ_EVENT_GFX_SCIENTIST, 11, 6, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NORMAL, 1, SilphCo_5F_EventScript_Beau, FLAG_HIDE_SILPH_ROCKETS
	object_event 5, OBJ_EVENT_GFX_ROCKET_M, 9, 21, 3, MOVEMENT_TYPE_FACE_UP_AND_RIGHT, 1, 1, TRAINER_TYPE_NORMAL, 3, SilphCo_5F_EventScript_Grunt1, FLAG_HIDE_SILPH_ROCKETS
	object_event 6, OBJ_EVENT_GFX_ITEM_BALL, 4, 9, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SilphCo_5F_EventScript_ItemProtein, FLAG_HIDE_SILPH_CO_5F_PROTEIN
	object_event 7, OBJ_EVENT_GFX_ITEM_BALL, 1, 18, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SilphCo_5F_EventScript_ItemTM01, FLAG_HIDE_SILPH_CO_5F_TM01
	object_event 8, OBJ_EVENT_GFX_ITEM_BALL, 22, 21, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SilphCo_5F_EventScript_ItemCardKey, FLAG_HIDE_SILPH_CO_5F_CARD_KEY
	object_event 9, OBJ_EVENT_GFX_SCIENTIST, 2, 7, 3, MOVEMENT_TYPE_WALK_RIGHT_AND_LEFT, 2, 1, TRAINER_TYPE_NONE, 0, SilphCo_5F_EventScript_Scientist, 0

SilphCo_5F_MapWarps:
	warp_def 28, 2, 3, 0, MAP_SILPH_CO_4F
	warp_def 15, 7, 3, 1, MAP_SILPH_CO_3F
	warp_def 30, 2, 3, 2, MAP_SILPH_CO_6F
	warp_def 10, 20, 3, 1, MAP_SILPH_CO_9F
	warp_def 2, 20, 3, 5, MAP_SILPH_CO_3F
	warp_def 33, 5, 3, 2, MAP_SILPH_CO_7F
	warp_def 22, 3, 0, 0, MAP_SILPH_CO_ELEVATOR

SilphCo_5F_MapBGEvents:
	bg_hidden_item_event 13, 16, 0, ITEM_ELIXIR, FLAG_HIDDEN_ITEM_SILPH_CO_5F_ELIXIR, 1, FALSE
	bg_sign_event 8, 9, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_5F_EventScript_Door1
	bg_sign_event 8, 10, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_5F_EventScript_Door1
	bg_sign_event 8, 18, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_5F_EventScript_Door2
	bg_sign_event 8, 19, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_5F_EventScript_Door2
	bg_sign_event 19, 13, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_5F_EventScript_Door3
	bg_sign_event 19, 14, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_5F_EventScript_Door3
	bg_sign_event 7, 9, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_5F_EventScript_Door1
	bg_sign_event 7, 10, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_5F_EventScript_Door1
	bg_sign_event 7, 19, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_5F_EventScript_Door2
	bg_sign_event 7, 18, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_5F_EventScript_Door2
	bg_sign_event 18, 13, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_5F_EventScript_Door3
	bg_sign_event 18, 14, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_5F_EventScript_Door3
	bg_sign_event 28, 11, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_5F_EventScript_PokemonReport3
	bg_sign_event 30, 13, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_5F_EventScript_PokemonReport2
	bg_sign_event 25, 15, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_5F_EventScript_PokemonReport1
	bg_hidden_item_event 32, 9, 0, ITEM_PP_UP, FLAG_HIDDEN_ITEM_SILPH_CO_5F_PP_UP, 1, FALSE
	bg_sign_event 29, 1, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_5F_EventScript_FloorSign

SilphCo_5F_MapEvents::
	map_events SilphCo_5F_ObjectEvents, SilphCo_5F_MapWarps, NULL, SilphCo_5F_MapBGEvents

