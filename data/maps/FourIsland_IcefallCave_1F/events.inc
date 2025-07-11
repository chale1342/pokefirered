@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/FourIsland_IcefallCave_1F/map.json
@

	.align 2

FourIsland_IcefallCave_1F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_ITEM_BALL, 11, 7, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, FourIsland_IcefallCave_1F_EventScript_ItemUltraBall, FLAG_HIDE_FOUR_ISLAND_ICEFALL_CAVE_1F_ULTRA_BALL
	object_event 2, OBJ_EVENT_GFX_ITEM_BALL, 12, 16, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, FourIsland_IcefallCave_1F_EventScript_ItemHM07, FLAG_HIDE_FOUR_ISLAND_ICEFALL_CAVE_1F_HM07

FourIsland_IcefallCave_1F_MapWarps:
	warp_def 3, 17, 0, 1, MAP_FOUR_ISLAND_ICEFALL_CAVE_ENTRANCE
	warp_def 2, 8, 3, 2, MAP_FOUR_ISLAND_ICEFALL_CAVE_ENTRANCE
	warp_def 12, 12, 3, 0, MAP_FOUR_ISLAND_ICEFALL_CAVE_B1F
	warp_def 12, 3, 3, 1, MAP_FOUR_ISLAND_ICEFALL_CAVE_B1F
	warp_def 15, 16, 3, 2, MAP_FOUR_ISLAND_ICEFALL_CAVE_B1F
	warp_def 3, 6, 3, 0, MAP_FOUR_ISLAND_ICEFALL_CAVE_BACK

FourIsland_IcefallCave_1F_MapEvents::
	map_events FourIsland_IcefallCave_1F_ObjectEvents, FourIsland_IcefallCave_1F_MapWarps, NULL, NULL

