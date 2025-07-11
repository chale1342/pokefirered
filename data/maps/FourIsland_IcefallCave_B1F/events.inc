@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/FourIsland_IcefallCave_B1F/map.json
@

	.align 2

FourIsland_IcefallCave_B1F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_ITEM_BALL, 10, 14, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, FourIsland_IcefallCave_B1F_EventScript_ItemFullRestore, FLAG_HIDE_FOUR_ISLAND_ICEFALL_CAVE_B1F_FULL_RESTORE
	object_event 2, OBJ_EVENT_GFX_ITEM_BALL, 21, 7, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, FourIsland_IcefallCave_B1F_EventScript_ItemNeverMeltIce, FLAG_HIDE_FOUR_ISLAND_ICEFALL_CAVE_B1F_NEVER_MELT_ICE

FourIsland_IcefallCave_B1F_MapWarps:
	warp_def 12, 12, 3, 2, MAP_FOUR_ISLAND_ICEFALL_CAVE_1F
	warp_def 12, 3, 3, 3, MAP_FOUR_ISLAND_ICEFALL_CAVE_1F
	warp_def 15, 16, 3, 4, MAP_FOUR_ISLAND_ICEFALL_CAVE_1F

FourIsland_IcefallCave_B1F_MapEvents::
	map_events FourIsland_IcefallCave_B1F_ObjectEvents, FourIsland_IcefallCave_B1F_MapWarps, NULL, NULL

