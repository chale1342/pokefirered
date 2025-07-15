@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/FiveIsland_Meadow/map.json
@

	.align 2

FiveIsland_Meadow_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_ROCKET_F, 18, 18, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NORMAL, 1, FiveIsland_Meadow_EventScript_Rocket3, FLAG_HIDE_FIVE_ISLAND_ROCKETS
	object_event 2, OBJ_EVENT_GFX_ROCKET_M, 17, 5, 3, MOVEMENT_TYPE_FACE_DOWN_AND_LEFT, 1, 1, TRAINER_TYPE_NORMAL, 5, FiveIsland_Meadow_EventScript_Rocket1, FLAG_HIDE_FIVE_ISLAND_ROCKETS
	object_event 3, OBJ_EVENT_GFX_ROCKET_M, 11, 27, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NORMAL, 3, FiveIsland_Meadow_EventScript_Rocket2, FLAG_HIDE_FIVE_ISLAND_ROCKETS
	object_event 4, OBJ_EVENT_GFX_CUT_TREE, 8, 9, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, EventScript_CutTree, FLAG_CUT_TREE_FIVE_ISLAND_MEADOW_1
	object_event 5, OBJ_EVENT_GFX_CUT_TREE, 19, 12, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, EventScript_CutTree, FLAG_CUT_TREE_FIVE_ISLAND_MEADOW_2
	object_event 6, OBJ_EVENT_GFX_ITEM_BALL, 12, 11, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, FiveIsland_Meadow_EventScript_ItemMaxPotion, FLAG_HIDE_FIVE_ISLAND_MEADOW_MAX_POTION
	object_event 7, OBJ_EVENT_GFX_ITEM_BALL, 3, 22, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, FiveIsland_Meadow_EventScript_ItemPPUp, FLAG_HIDE_FIVE_ISLAND_MEADOW_PP_UP

FiveIsland_Meadow_MapWarps:
	warp_def 12, 21, 0, 0, MAP_FIVE_ISLAND_ROCKET_WAREHOUSE

FiveIsland_Meadow_MapBGEvents:
	bg_sign_event 12, 21, 0, BG_EVENT_PLAYER_FACING_ANY, FiveIsland_Meadow_EventScript_WarehouseDoor

FiveIsland_Meadow_MapEvents::
	map_events FiveIsland_Meadow_ObjectEvents, FiveIsland_Meadow_MapWarps, NULL, FiveIsland_Meadow_MapBGEvents

