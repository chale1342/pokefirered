@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Route10/map.json
@

	.align 2

Route10_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_PICNICKER, 7, 60, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NORMAL, 2, Route10_EventScript_Carol, 0
	object_event 2, OBJ_EVENT_GFX_HIKER, 4, 62, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NORMAL, 1, Route10_EventScript_Clark, 0
	object_event 3, OBJ_EVENT_GFX_SUPER_NERD, 15, 70, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 2, 1, TRAINER_TYPE_NORMAL, 2, Route10_EventScript_Herman, 0
	object_event 4, OBJ_EVENT_GFX_HIKER, 4, 68, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NORMAL, 2, Route10_EventScript_Trent, 0
	object_event 5, OBJ_EVENT_GFX_SUPER_NERD, 13, 44, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NORMAL, 5, Route10_EventScript_Mark, 0
	object_event 6, OBJ_EVENT_GFX_PICNICKER, 9, 27, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 2, Route10_EventScript_Heidi, 0
	object_event 7, OBJ_EVENT_GFX_CUT_TREE, 10, 20, 0, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, EventScript_CutTree, FLAG_TEMP_12
	object_event 8, OBJ_EVENT_GFX_CUT_TREE, 10, 22, 0, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, EventScript_CutTree, FLAG_TEMP_13
	object_event 9, OBJ_EVENT_GFX_CUT_TREE, 10, 24, 0, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, EventScript_CutTree, FLAG_TEMP_14
	object_event 10, OBJ_EVENT_GFX_CUT_TREE, 10, 26, 0, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, EventScript_CutTree, FLAG_TEMP_15

Route10_MapWarps:
	warp_def 8, 19, 3, 0, MAP_ROCK_TUNNEL_1F
	warp_def 8, 57, 3, 5, MAP_ROCK_TUNNEL_1F
	warp_def 7, 40, 3, 1, MAP_POWER_PLANT
	warp_def 13, 20, 0, 1, MAP_ROUTE10_POKEMON_CENTER_1F
	warp_def 2, 37, 3, 3, MAP_POWER_PLANT

Route10_MapBGEvents:
	bg_sign_event 15, 59, 0, BG_EVENT_PLAYER_FACING_ANY, Route10_EventScript_SouthRockTunnelSign
	bg_sign_event 6, 42, 0, BG_EVENT_PLAYER_FACING_ANY, Route10_EventScript_PowerPlantSign
	bg_sign_event 7, 21, 0, BG_EVENT_PLAYER_FACING_ANY, Route10_EventScript_NorthRockTunnelSign
	bg_hidden_item_event 10, 19, 0, ITEM_SUPER_POTION, FLAG_HIDDEN_ITEM_ROUTE10_SUPER_POTION, 1, FALSE
	bg_hidden_item_event 12, 40, 3, ITEM_MAX_ETHER, FLAG_HIDDEN_ITEM_ROUTE10_MAX_ETHER, 1, FALSE
	bg_hidden_item_event 6, 26, 3, ITEM_CHERI_BERRY, FLAG_HIDDEN_ITEM_ROUTE10_CHERI_BERRY, 1, FALSE
	bg_hidden_item_event 17, 29, 3, ITEM_PERSIM_BERRY, FLAG_HIDDEN_ITEM_ROUTE10_PERSIM_BERRY, 1, FALSE
	bg_hidden_item_event 20, 57, 3, ITEM_NANAB_BERRY, FLAG_HIDDEN_ITEM_ROUTE10_NANAB_BERRY, 1, FALSE

Route10_MapEvents::
	map_events Route10_ObjectEvents, Route10_MapWarps, NULL, Route10_MapBGEvents

