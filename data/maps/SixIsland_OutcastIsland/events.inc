@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SixIsland_OutcastIsland/map.json
@

	.align 2

SixIsland_OutcastIsland_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_ROCKET_M, 9, 24, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NORMAL, 1, SixIsland_OutcastIsland_EventScript_Rocket, FLAG_HIDE_FIVE_ISLAND_ROCKETS
	object_event 2, OBJ_EVENT_GFX_FISHER, 12, 15, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NORMAL, 1, SixIsland_OutcastIsland_EventScript_Tylor, 0
	object_event 3, OBJ_EVENT_GFX_SWIMMER_M_WATER, 13, 34, 1, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NORMAL, 1, SixIsland_OutcastIsland_EventScript_Mymo, 0
	object_event 4, OBJ_EVENT_GFX_SWIMMER_F_WATER, 14, 61, 1, MOVEMENT_TYPE_WALK_SEQUENCE_DOWN_LEFT_UP_RIGHT, 2, 4, TRAINER_TYPE_NORMAL, 1, SixIsland_OutcastIsland_EventScript_Nicole, 0
	object_event 5, OBJ_EVENT_GFX_SWIMMER_F_WATER, 10, 44, 1, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NORMAL, 1, SixIsland_OutcastIsland_EventScript_Ava, 0
	object_event 6, OBJ_EVENT_GFX_TUBER_M_WATER, 11, 44, 1, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NORMAL, 1, SixIsland_OutcastIsland_EventScript_Geb, 0
	object_event 7, OBJ_EVENT_GFX_ITEM_BALL, 11, 16, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SixIsland_OutcastIsland_EventScript_ItemPPUp, FLAG_HIDE_SIX_ISLAND_OUTCAST_ISLAND_PP_UP

SixIsland_OutcastIsland_MapWarps:
	warp_def 7, 21, 3, 0, MAP_SIX_ISLAND_ALTERING_CAVE

SixIsland_OutcastIsland_MapBGEvents:
	bg_hidden_item_event 16, 23, 3, ITEM_STAR_PIECE, FLAG_HIDDEN_ITEM_SIX_ISLAND_OUTCAST_ISLAND_STAR_PIECE, 1, FALSE
	bg_hidden_item_event 6, 24, 3, ITEM_NET_BALL, FLAG_HIDDEN_ITEM_SIX_ISLAND_OUTCAST_ISLAND_NET_BALL, 1, FALSE

SixIsland_OutcastIsland_MapEvents::
	map_events SixIsland_OutcastIsland_ObjectEvents, SixIsland_OutcastIsland_MapWarps, NULL, SixIsland_OutcastIsland_MapBGEvents

