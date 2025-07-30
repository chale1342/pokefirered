@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SixIsland_DottedHole_B3F/map.json
@

	.align 2

SixIsland_DottedHole_B3F_MapWarps:
	warp_def 6, 7, 3, 4, MAP_SIX_ISLAND_DOTTED_HOLE_B2F
	warp_def 6, 1, 3, 3, MAP_SIX_ISLAND_DOTTED_HOLE_1F
	warp_def 11, 5, 3, 0, MAP_SIX_ISLAND_DOTTED_HOLE_B4F
	warp_def 6, 9, 3, 3, MAP_SIX_ISLAND_DOTTED_HOLE_1F
	warp_def 1, 5, 3, 3, MAP_SIX_ISLAND_DOTTED_HOLE_1F

SixIsland_DottedHole_B3F_MapBGEvents:
	bg_sign_event 6, 5, 0, BG_EVENT_PLAYER_FACING_NORTH, SixIsland_DottedHole_B3F_EventScript_BrailleRight

SixIsland_DottedHole_B3F_MapEvents::
	map_events NULL, SixIsland_DottedHole_B3F_MapWarps, NULL, SixIsland_DottedHole_B3F_MapBGEvents

