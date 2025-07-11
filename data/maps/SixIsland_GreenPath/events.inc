@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SixIsland_GreenPath/map.json
@

	.align 2

SixIsland_GreenPath_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_WOMAN_1, 11, 8, 3, MOVEMENT_TYPE_FACE_DOWN_UP_AND_RIGHT, 1, 1, TRAINER_TYPE_NORMAL, 2, SixIsland_GreenPath_EventScript_Jaclyn, 0

SixIsland_GreenPath_MapWarps:
	warp_def 63, 10, 3, 1, MAP_SIX_ISLAND_PATTERN_BUSH
	warp_def 64, 10, 3, 1, MAP_SIX_ISLAND_PATTERN_BUSH
	warp_def 45, 10, 3, 4, MAP_SIX_ISLAND_PATTERN_BUSH
	warp_def 46, 10, 3, 4, MAP_SIX_ISLAND_PATTERN_BUSH

SixIsland_GreenPath_MapBGEvents:
	bg_sign_event 40, 10, 0, BG_EVENT_PLAYER_FACING_ANY, SixIsland_GreenPath_EventScript_LeftRouteSign
	bg_sign_event 69, 10, 0, BG_EVENT_PLAYER_FACING_ANY, SixIsland_GreenPath_EventScript_RightRouteSign
	bg_hidden_item_event 12, 9, 3, ITEM_ULTRA_BALL, FLAG_HIDDEN_ITEM_SIX_ISLAND_GREEN_PATH_ULTRA_BALL, 1, FALSE

SixIsland_GreenPath_MapEvents::
	map_events SixIsland_GreenPath_ObjectEvents, SixIsland_GreenPath_MapWarps, NULL, SixIsland_GreenPath_MapBGEvents

