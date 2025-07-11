@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/BattleColosseum_4P/map.json
@

	.align 2

BattleColosseum_4P_MapWarps:
	warp_def 5, 8, 3, WARP_ID_DYNAMIC, MAP_DYNAMIC
	warp_def 6, 8, 3, WARP_ID_DYNAMIC, MAP_DYNAMIC
	warp_def 7, 8, 3, WARP_ID_DYNAMIC, MAP_DYNAMIC
	warp_def 8, 8, 3, WARP_ID_DYNAMIC, MAP_DYNAMIC

BattleColosseum_4P_MapCoordEvents:
	coord_event 3, 4, 3, VAR_TEMP_0, 0, BattleColosseum_4P_EventScript_PlayerSpot0
	coord_event 3, 6, 3, VAR_TEMP_0, 0, BattleColosseum_4P_EventScript_PlayerSpot2
	coord_event 10, 4, 3, VAR_TEMP_0, 0, BattleColosseum_4P_EventScript_PlayerSpot1
	coord_event 10, 6, 3, VAR_TEMP_0, 0, BattleColosseum_4P_EventScript_PlayerSpot3

BattleColosseum_4P_MapEvents::
	map_events NULL, BattleColosseum_4P_MapWarps, BattleColosseum_4P_MapCoordEvents, NULL

