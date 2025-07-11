@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Route5/map.json
@

	.align 2

Route5_MapWarps:
	warp_def 31, 31, 0, 1, MAP_UNDERGROUND_PATH_NORTH_ENTRANCE
	warp_def 23, 25, 0, 1, MAP_ROUTE5_POKEMON_DAY_CARE
	warp_def 24, 32, 3, 1, MAP_ROUTE5_SOUTH_ENTRANCE
	warp_def 25, 32, 3, 1, MAP_ROUTE5_SOUTH_ENTRANCE

Route5_MapBGEvents:
	bg_sign_event 32, 32, 0, BG_EVENT_PLAYER_FACING_ANY, Route5_EventScript_UndergroundPathSign

Route5_MapEvents::
	map_events NULL, Route5_MapWarps, NULL, Route5_MapBGEvents

