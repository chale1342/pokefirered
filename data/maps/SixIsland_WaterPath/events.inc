@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SixIsland_WaterPath/map.json
@

	.align 2

SixIsland_WaterPath_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_WOMAN_2, 12, 13, 3, MOVEMENT_TYPE_FACE_DOWN_UP_AND_LEFT, 1, 1, TRAINER_TYPE_NORMAL, 3, SixIsland_WaterPath_EventScript_Rose, 0
	object_event 2, OBJ_EVENT_GFX_ROCKER, 11, 52, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NORMAL, 3, SixIsland_WaterPath_EventScript_Edward, 0
	object_event 3, OBJ_EVENT_GFX_SWIMMER_M_WATER, 13, 35, 1, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NORMAL, 4, SixIsland_WaterPath_EventScript_Samir, 0
	object_event 4, OBJ_EVENT_GFX_SWIMMER_F_WATER, 15, 45, 1, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NORMAL, 1, SixIsland_WaterPath_EventScript_Denise, 0
	object_event 5, OBJ_EVENT_GFX_LITTLE_GIRL, 6, 21, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 1, SixIsland_WaterPath_EventScript_Miu, 0
	object_event 6, OBJ_EVENT_GFX_LITTLE_GIRL, 7, 21, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 1, SixIsland_WaterPath_EventScript_Mia, 0
	object_event 7, OBJ_EVENT_GFX_HIKER, 11, 76, 3, MOVEMENT_TYPE_FACE_UP_AND_LEFT, 1, 1, TRAINER_TYPE_NORMAL, 4, SixIsland_WaterPath_EventScript_Earl, 0
	object_event 8, OBJ_EVENT_GFX_ITEM_BALL, 17, 19, 0, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SixIsland_WaterPath_EventScript_ItemElixir, FLAG_HIDE_SIX_ISLAND_WATER_PATH_ELIXIR
	object_event 9, OBJ_EVENT_GFX_ITEM_BALL, 17, 87, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SixIsland_WaterPath_EventScript_ItemDragonScale, FLAG_HIDE_SIX_ISLAND_WATER_PATH_DRAGON_SCALE

SixIsland_WaterPath_MapWarps:
	warp_def 5, 13, 0, 0, MAP_SIX_ISLAND_WATER_PATH_HOUSE1
	warp_def 11, 19, 0, 0, MAP_SIX_ISLAND_WATER_PATH_HOUSE2

SixIsland_WaterPath_MapBGEvents:
	bg_sign_event 8, 14, 0, BG_EVENT_PLAYER_FACING_ANY, SixIsland_WaterPath_EventScript_HornWantedSign
	bg_hidden_item_event 15, 76, 3, ITEM_ASPEAR_BERRY, FLAG_HIDDEN_ITEM_SIX_ISLAND_WATER_PATH_ASPEAR_BERRY, 1, FALSE
	bg_hidden_item_event 3, 8, 3, ITEM_ORAN_BERRY, FLAG_HIDDEN_ITEM_SIX_ISLAND_WATER_PATH_ORAN_BERRY, 1, FALSE
	bg_hidden_item_event 13, 63, 3, ITEM_PINAP_BERRY, FLAG_HIDDEN_ITEM_SIX_ISLAND_WATER_PATH_PINAP_BERRY, 1, FALSE
	bg_sign_event 12, 54, 0, BG_EVENT_PLAYER_FACING_ANY, SixIsland_WaterPath_EventScript_RouteSign

SixIsland_WaterPath_MapEvents::
	map_events SixIsland_WaterPath_ObjectEvents, SixIsland_WaterPath_MapWarps, NULL, SixIsland_WaterPath_MapBGEvents

