@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/CeladonCity_DepartmentStore_Elevator/map.json
@

	.align 2

CeladonCity_DepartmentStore_Elevator_MapWarps:
	warp_def 2, 5, 3, WARP_ID_DYNAMIC, MAP_DYNAMIC
	warp_def 2, 6, 0, WARP_ID_DYNAMIC, MAP_DYNAMIC

CeladonCity_DepartmentStore_Elevator_MapBGEvents:
	bg_sign_event 0, 2, 0, BG_EVENT_PLAYER_FACING_ANY, CeladonCity_DepartmentStore_Elevator_EventScript_FloorSelect
	bg_sign_event 4, 1, 0, BG_EVENT_PLAYER_FACING_ANY, CeladonCity_DepartmentStore_Elevator_EventScript_FloorSelect

CeladonCity_DepartmentStore_Elevator_MapEvents::
	map_events NULL, CeladonCity_DepartmentStore_Elevator_MapWarps, NULL, CeladonCity_DepartmentStore_Elevator_MapBGEvents

