@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/ThreeIsland_BondBridge/map.json
@

	.align 2

ThreeIsland_BondBridge_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_WOMAN_2, 27, 10, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NORMAL, 5, ThreeIsland_BondBridge_EventScript_Nikki, 0
	object_event 2, OBJ_EVENT_GFX_WOMAN_2, 68, 10, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NORMAL, 2, ThreeIsland_BondBridge_EventScript_Violet, 0
	object_event 3, OBJ_EVENT_GFX_TUBER_F, 33, 13, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NORMAL, 1, ThreeIsland_BondBridge_EventScript_Amira, 0
	object_event 4, OBJ_EVENT_GFX_TUBER_F, 50, 11, 3, MOVEMENT_TYPE_WALK_LEFT_AND_RIGHT, 2, 1, TRAINER_TYPE_NORMAL, 1, ThreeIsland_BondBridge_EventScript_Alexis, 0
	object_event 5, OBJ_EVENT_GFX_SWIMMER_F_WATER, 36, 4, 1, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NORMAL, 1, ThreeIsland_BondBridge_EventScript_Tisha, 0
	object_event 6, OBJ_EVENT_GFX_LITTLE_GIRL, 77, 5, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 1, ThreeIsland_BondBridge_EventScript_Joy, 0
	object_event 7, OBJ_EVENT_GFX_LITTLE_GIRL, 78, 5, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 1, ThreeIsland_BondBridge_EventScript_Meg, 0
	object_event 8, OBJ_EVENT_GFX_CUT_TREE, 72, 8, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, EventScript_CutTree, FLAG_TEMP_12
	object_event 9, OBJ_EVENT_GFX_CUT_TREE, 86, 13, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, EventScript_CutTree, FLAG_TEMP_13

ThreeIsland_BondBridge_MapWarps:
	warp_def 12, 6, 3, 0, MAP_THREE_ISLAND_BERRY_FOREST
	warp_def 13, 6, 3, 0, MAP_THREE_ISLAND_BERRY_FOREST

ThreeIsland_BondBridge_MapBGEvents:
	bg_sign_event 14, 7, 0, BG_EVENT_PLAYER_FACING_ANY, ThreeIsland_BondBridge_EventScript_BerryForestSign
	bg_hidden_item_event 61, 5, 0, ITEM_MAX_REPEL, FLAG_HIDDEN_ITEM_THREE_ISLAND_BOND_BRIDGE_MAX_REPEL, 1, FALSE
	bg_hidden_item_event 44, 12, 3, ITEM_PEARL, FLAG_HIDDEN_ITEM_THREE_ISLAND_BOND_BRIDGE_PEARL, 1, FALSE
	bg_hidden_item_event 33, 7, 3, ITEM_STARDUST, FLAG_HIDDEN_ITEM_THREE_ISLAND_BOND_BRIDGE_STARDUST, 1, FALSE
	bg_sign_event 91, 9, 0, BG_EVENT_PLAYER_FACING_ANY, ThreeIsland_BondBridge_EventScript_BondBridgeSign

ThreeIsland_BondBridge_MapEvents::
	map_events ThreeIsland_BondBridge_ObjectEvents, ThreeIsland_BondBridge_MapWarps, NULL, ThreeIsland_BondBridge_MapBGEvents

