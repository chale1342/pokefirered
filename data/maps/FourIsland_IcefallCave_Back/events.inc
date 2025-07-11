@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/FourIsland_IcefallCave_Back/map.json
@

	.align 2

FourIsland_IcefallCave_Back_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_ROCKET_M, 11, 14, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, 0x0, FLAG_HIDE_ICEFALL_CAVE_ROCKETS
	object_event 2, OBJ_EVENT_GFX_ROCKET_M, 13, 14, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, 0x0, FLAG_HIDE_ICEFALL_CAVE_ROCKETS
	object_event 3, OBJ_EVENT_GFX_LORELEI, 12, 16, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NONE, 0, FourIsland_IcefallCave_Back_EventScript_Lorelei, FLAG_HIDE_ICEFALL_CAVE_LORELEI
	object_event 4, OBJ_EVENT_GFX_ROCKET_M, 10, 15, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, 0x0, FLAG_HIDE_ICEFALL_CAVE_ROCKETS

FourIsland_IcefallCave_Back_MapWarps:
	warp_def 12, 23, 0, 5, MAP_FOUR_ISLAND_ICEFALL_CAVE_1F

FourIsland_IcefallCave_Back_MapCoordEvents:
	coord_event 11, 18, 3, VAR_MAP_SCENE_ICEFALL_CAVE_BACK, 0, FourIsland_IcefallCave_Back_EventScript_LoreleiRocketsScene
	coord_event 12, 18, 3, VAR_MAP_SCENE_ICEFALL_CAVE_BACK, 0, FourIsland_IcefallCave_Back_EventScript_LoreleiRocketsScene
	coord_event 13, 18, 3, VAR_MAP_SCENE_ICEFALL_CAVE_BACK, 0, FourIsland_IcefallCave_Back_EventScript_LoreleiRocketsScene

FourIsland_IcefallCave_Back_MapEvents::
	map_events FourIsland_IcefallCave_Back_ObjectEvents, FourIsland_IcefallCave_Back_MapWarps, FourIsland_IcefallCave_Back_MapCoordEvents, NULL

