@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SixIsland_WaterPath_House1/map.json
@

	.align 2

SixIsland_WaterPath_House1_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_BEAUTY, 3, 4, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SixIsland_WaterPath_House1_EventScript_Beauty, 0

SixIsland_WaterPath_House1_MapWarps:
	warp_def 3, 7, 3, 0, MAP_SIX_ISLAND_WATER_PATH

SixIsland_WaterPath_House1_MapBGEvents:
	bg_sign_event 9, 1, 0, BG_EVENT_PLAYER_FACING_ANY, SixIsland_WaterPath_House1_EventScript_SizeRecord

SixIsland_WaterPath_House1_MapEvents::
	map_events SixIsland_WaterPath_House1_ObjectEvents, SixIsland_WaterPath_House1_MapWarps, NULL, SixIsland_WaterPath_House1_MapBGEvents

