@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/FiveIsland_RocketWarehouse/map.json
@

	.align 2

FiveIsland_RocketWarehouse_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_ROCKET_M, 15, 11, 3, MOVEMENT_TYPE_FACE_DOWN_AND_LEFT, 1, 1, TRAINER_TYPE_NORMAL, 1, FiveIsland_RocketWarehouse_EventScript_Grunt2, FLAG_HIDE_FIVE_ISLAND_ROCKETS
	object_event 2, OBJ_EVENT_GFX_ROCKET_M, 17, 15, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NORMAL, 1, FiveIsland_RocketWarehouse_EventScript_Grunt3, FLAG_HIDE_FIVE_ISLAND_ROCKETS
	object_event 3, OBJ_EVENT_GFX_ROCKET_F, 27, 16, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NORMAL, 3, FiveIsland_RocketWarehouse_EventScript_Admin1, FLAG_HIDE_FIVE_ISLAND_ROCKETS
	object_event 4, OBJ_EVENT_GFX_ROCKET_M, 25, 11, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NORMAL, 3, FiveIsland_RocketWarehouse_EventScript_Admin2, FLAG_HIDE_FIVE_ISLAND_ROCKETS
	object_event 5, OBJ_EVENT_GFX_ROCKET_F, 6, 6, 3, MOVEMENT_TYPE_FACE_UP_AND_RIGHT, 1, 1, TRAINER_TYPE_NORMAL, 3, FiveIsland_RocketWarehouse_EventScript_Grunt1, FLAG_HIDE_FIVE_ISLAND_ROCKETS
	object_event 6, OBJ_EVENT_GFX_SCIENTIST, 27, 4, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NORMAL, 0, FiveIsland_RocketWarehouse_EventScript_Gideon, 0
	object_event 7, OBJ_EVENT_GFX_ITEM_BALL, 8, 25, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, FiveIsland_RocketWarehouse_EventScript_ItemBigPearl, FLAG_HIDE_FIVE_ISLAND_ROCKET_WAREHOUSE_BIG_PEARL
	object_event 8, OBJ_EVENT_GFX_ITEM_BALL, 17, 3, 0, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, FiveIsland_RocketWarehouse_EventScript_ItemTM36, FLAG_HIDE_FIVE_ISLAND_ROCKET_WAREHOUSE_TM36
	object_event 9, OBJ_EVENT_GFX_ITEM_BALL, 1, 16, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, FiveIsland_RocketWarehouse_EventScript_ItemPearl, FLAG_HIDE_FIVE_ISLAND_ROCKET_WAREHOUSE_PEARL
	object_event 10, OBJ_EVENT_GFX_ITEM_BALL, 4, 5, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, FiveIsland_RocketWarehouse_EventScript_ItemUpGrade, FLAG_HIDE_FIVE_ISLAND_ROCKET_WAREHOUSE_UP_GRADE

FiveIsland_RocketWarehouse_MapWarps:
	warp_def 24, 25, 3, 0, MAP_FIVE_ISLAND_MEADOW

FiveIsland_RocketWarehouse_MapCoordEvents:
	coord_event 22, 11, 3, VAR_MAP_SCENE_ROCKET_WAREHOUSE, 0, FiveIsland_RocketWarehouse_EventScript_Admin2Trigger
	coord_event 23, 11, 3, VAR_MAP_SCENE_ROCKET_WAREHOUSE, 0, FiveIsland_RocketWarehouse_EventScript_Admin2Trigger
	coord_event 24, 11, 3, VAR_MAP_SCENE_ROCKET_WAREHOUSE, 0, FiveIsland_RocketWarehouse_EventScript_Admin2Trigger

FiveIsland_RocketWarehouse_MapBGEvents:
	bg_sign_event 11, 2, 0, BG_EVENT_PLAYER_FACING_ANY, FiveIsland_RocketWarehouse_EventScript_Cage
	bg_sign_event 26, 11, 0, BG_EVENT_PLAYER_FACING_EAST, FiveIsland_RocketWarehouse_EventScript_Computer
	bg_hidden_item_event 27, 2, 0, ITEM_NEST_BALL, FLAG_HIDDEN_ITEM_FIVE_ISLAND_ROCKET_WAREHOUSE_NEST_BALL, 1, FALSE
	bg_hidden_item_event 7, 16, 0, ITEM_NET_BALL, FLAG_HIDDEN_ITEM_FIVE_ISLAND_ROCKET_WAREHOUSE_NET_BALL, 1, FALSE
	bg_sign_event 12, 2, 0, BG_EVENT_PLAYER_FACING_ANY, FiveIsland_RocketWarehouse_EventScript_Cage
	bg_sign_event 10, 2, 0, BG_EVENT_PLAYER_FACING_ANY, FiveIsland_RocketWarehouse_EventScript_Cage
	bg_sign_event 9, 2, 0, BG_EVENT_PLAYER_FACING_ANY, FiveIsland_RocketWarehouse_EventScript_Cage
	bg_sign_event 8, 2, 0, BG_EVENT_PLAYER_FACING_ANY, FiveIsland_RocketWarehouse_EventScript_Cage
	bg_sign_event 7, 2, 0, BG_EVENT_PLAYER_FACING_ANY, FiveIsland_RocketWarehouse_EventScript_Cage
	bg_sign_event 11, 5, 0, BG_EVENT_PLAYER_FACING_ANY, FiveIsland_RocketWarehouse_EventScript_Cage
	bg_sign_event 10, 5, 0, BG_EVENT_PLAYER_FACING_ANY, FiveIsland_RocketWarehouse_EventScript_Cage
	bg_sign_event 11, 4, 0, BG_EVENT_PLAYER_FACING_ANY, FiveIsland_RocketWarehouse_EventScript_Cage
	bg_sign_event 10, 4, 0, BG_EVENT_PLAYER_FACING_ANY, FiveIsland_RocketWarehouse_EventScript_Cage
	bg_sign_event 8, 4, 0, BG_EVENT_PLAYER_FACING_ANY, FiveIsland_RocketWarehouse_EventScript_Cage
	bg_sign_event 7, 4, 0, BG_EVENT_PLAYER_FACING_ANY, FiveIsland_RocketWarehouse_EventScript_Cage
	bg_sign_event 8, 5, 0, BG_EVENT_PLAYER_FACING_ANY, FiveIsland_RocketWarehouse_EventScript_Cage
	bg_sign_event 7, 5, 0, BG_EVENT_PLAYER_FACING_ANY, FiveIsland_RocketWarehouse_EventScript_Cage
	bg_sign_event 5, 3, 0, BG_EVENT_PLAYER_FACING_ANY, FiveIsland_RocketWarehouse_EventScript_Cage
	bg_sign_event 4, 3, 0, BG_EVENT_PLAYER_FACING_ANY, FiveIsland_RocketWarehouse_EventScript_Cage
	bg_sign_event 5, 4, 0, BG_EVENT_PLAYER_FACING_ANY, FiveIsland_RocketWarehouse_EventScript_Cage
	bg_sign_event 4, 4, 0, BG_EVENT_PLAYER_FACING_ANY, FiveIsland_RocketWarehouse_EventScript_Cage
	bg_sign_event 3, 4, 0, BG_EVENT_PLAYER_FACING_ANY, FiveIsland_RocketWarehouse_EventScript_Cage
	bg_sign_event 2, 4, 0, BG_EVENT_PLAYER_FACING_ANY, FiveIsland_RocketWarehouse_EventScript_Cage
	bg_sign_event 2, 5, 0, BG_EVENT_PLAYER_FACING_ANY, FiveIsland_RocketWarehouse_EventScript_Cage
	bg_sign_event 3, 5, 0, BG_EVENT_PLAYER_FACING_ANY, FiveIsland_RocketWarehouse_EventScript_Cage

FiveIsland_RocketWarehouse_MapEvents::
	map_events FiveIsland_RocketWarehouse_ObjectEvents, FiveIsland_RocketWarehouse_MapWarps, FiveIsland_RocketWarehouse_MapCoordEvents, FiveIsland_RocketWarehouse_MapBGEvents

