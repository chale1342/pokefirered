@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SilphCo_Elevator/map.json
@

	.align 2

SilphCo_Elevator_MapWarps:
	warp_def 2, 5, 3, WARP_ID_DYNAMIC, MAP_DYNAMIC

SilphCo_Elevator_MapBGEvents:
	bg_sign_event 0, 2, 3, BG_EVENT_PLAYER_FACING_ANY, SilphCo_Elevator_EventScript_FloorSelect

SilphCo_Elevator_MapEvents::
	map_events NULL, SilphCo_Elevator_MapWarps, NULL, SilphCo_Elevator_MapBGEvents

