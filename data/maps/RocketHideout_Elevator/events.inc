@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/RocketHideout_Elevator/map.json
@

	.align 2

RocketHideout_Elevator_MapWarps:
	warp_def 1, 5, 3, WARP_ID_DYNAMIC, MAP_DYNAMIC
	warp_def 2, 5, 3, WARP_ID_DYNAMIC, MAP_DYNAMIC

RocketHideout_Elevator_MapBGEvents:
	bg_sign_event 0, 2, 0, BG_EVENT_PLAYER_FACING_ANY, RocketHideout_Elevator_EventScript_FloorSelect

RocketHideout_Elevator_MapEvents::
	map_events NULL, RocketHideout_Elevator_MapWarps, NULL, RocketHideout_Elevator_MapBGEvents

