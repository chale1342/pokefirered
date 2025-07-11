@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/CeladonCity_DepartmentStore_Roof/map.json
@

	.align 2

CeladonCity_DepartmentStore_Roof_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_COOLTRAINER_M, 9, 5, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, CeladonCity_DepartmentStore_Roof_EventScript_CooltrainerM, 0
	object_event 2, OBJ_EVENT_GFX_LITTLE_GIRL, 5, 4, 3, MOVEMENT_TYPE_WANDER_AROUND, 2, 1, TRAINER_TYPE_NONE, 0, CeladonCity_DepartmentStore_Roof_EventScript_ThirstyGirl, 0

CeladonCity_DepartmentStore_Roof_MapWarps:
	warp_def 15, 6, 3, 2, MAP_CELADON_CITY_DEPARTMENT_STORE_5F

CeladonCity_DepartmentStore_Roof_MapBGEvents:
	bg_sign_event 14, 3, 0, BG_EVENT_PLAYER_FACING_ANY, CeladonCity_DepartmentStore_Roof_EventScript_FloorSign
	bg_sign_event 10, 3, 0, BG_EVENT_PLAYER_FACING_ANY, CeladonCity_DepartmentStore_Roof_EventScript_VendingMachine
	bg_sign_event 11, 3, 0, BG_EVENT_PLAYER_FACING_ANY, CeladonCity_DepartmentStore_Roof_EventScript_VendingMachine
	bg_sign_event 12, 3, 0, BG_EVENT_PLAYER_FACING_ANY, CeladonCity_DepartmentStore_Roof_EventScript_VendingMachine

CeladonCity_DepartmentStore_Roof_MapEvents::
	map_events CeladonCity_DepartmentStore_Roof_ObjectEvents, CeladonCity_DepartmentStore_Roof_MapWarps, NULL, CeladonCity_DepartmentStore_Roof_MapBGEvents

