@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/TrainerTower_Elevator/map.json
@

	.align 2

TrainerTower_Elevator_MapWarps:
	warp_def 2, 5, 3, WARP_ID_DYNAMIC, MAP_DYNAMIC

TrainerTower_Elevator_MapBGEvents:
	bg_sign_event 0, 2, 0, BG_EVENT_PLAYER_FACING_ANY, TrainerTower_Elevator_EventScript_FloorSelect

TrainerTower_Elevator_MapEvents::
	map_events NULL, TrainerTower_Elevator_MapWarps, NULL, TrainerTower_Elevator_MapBGEvents

