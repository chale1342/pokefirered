@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/OneIsland_TreasureBeach/map.json
@

	.align 2

OneIsland_TreasureBeach_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_SWIMMER_F_WATER, 8, 11, 1, MOVEMENT_TYPE_WANDER_AROUND, 2, 1, TRAINER_TYPE_NORMAL, 1, OneIsland_TreasureBeach_EventScript_Amara, 0
	object_event 2, OBJ_EVENT_GFX_BOY, 13, 20, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, OneIsland_TreasureBeach_EventScript_Boy, 0

OneIsland_TreasureBeach_MapBGEvents:
	bg_hidden_item_event 8, 20, 3, ITEM_STARDUST, FLAG_HIDDEN_ITEM_ONE_ISLAND_TREASURE_BEACH_STARDUST, 1, FALSE
	bg_hidden_item_event 13, 27, 3, ITEM_STARDUST, FLAG_HIDDEN_ITEM_ONE_ISLAND_TREASURE_BEACH_STARDUST_2, 1, FALSE
	bg_hidden_item_event 11, 31, 3, ITEM_PEARL, FLAG_HIDDEN_ITEM_ONE_ISLAND_TREASURE_BEACH_PEARL, 1, FALSE
	bg_hidden_item_event 9, 34, 3, ITEM_PEARL, FLAG_HIDDEN_ITEM_ONE_ISLAND_TREASURE_BEACH_PEARL_2, 1, FALSE
	bg_hidden_item_event 15, 22, 3, ITEM_ULTRA_BALL, FLAG_HIDDEN_ITEM_ONE_ISLAND_TREASURE_BEACH_ULTRA_BALL, 1, FALSE
	bg_hidden_item_event 16, 33, 3, ITEM_ULTRA_BALL, FLAG_HIDDEN_ITEM_ONE_ISLAND_TREASURE_BEACH_ULTRA_BALL_2, 1, FALSE
	bg_hidden_item_event 15, 29, 3, ITEM_STAR_PIECE, FLAG_HIDDEN_ITEM_ONE_ISLAND_TREASURE_BEACH_STAR_PIECE, 1, FALSE
	bg_hidden_item_event 8, 27, 3, ITEM_BIG_PEARL, FLAG_HIDDEN_ITEM_ONE_ISLAND_TREASURE_BEACH_BIG_PEARL, 1, FALSE

OneIsland_TreasureBeach_MapEvents::
	map_events OneIsland_TreasureBeach_ObjectEvents, NULL, NULL, OneIsland_TreasureBeach_MapBGEvents

