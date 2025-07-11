@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SixIsland_DottedHole_B4F/map.json
@

	.align 2

SixIsland_DottedHole_B4F_MapWarps:
	warp_def 6, 7, 3, 2, MAP_SIX_ISLAND_DOTTED_HOLE_B3F
	warp_def 6, 1, 3, 3, MAP_SIX_ISLAND_DOTTED_HOLE_1F
	warp_def 11, 5, 3, 3, MAP_SIX_ISLAND_DOTTED_HOLE_1F
	warp_def 6, 9, 3, 1, MAP_SIX_ISLAND_DOTTED_HOLE_SAPPHIRE_ROOM
	warp_def 1, 5, 3, 3, MAP_SIX_ISLAND_DOTTED_HOLE_1F

SixIsland_DottedHole_B4F_MapBGEvents:
	bg_sign_event 6, 5, 0, BG_EVENT_PLAYER_FACING_NORTH, SixIsland_DottedHole_B4F_EventScript_BrailleDown

SixIsland_DottedHole_B4F_MapEvents::
	map_events NULL, SixIsland_DottedHole_B4F_MapWarps, NULL, SixIsland_DottedHole_B4F_MapBGEvents

