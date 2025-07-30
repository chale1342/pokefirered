@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/CeladonCity_DepartmentStore_1F/map.json
@

	.align 2

CeladonCity_DepartmentStore_1F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_WORKER_F, 6, 10, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, CeladonCity_DepartmentStore_1F_EventScript_Receptionist, 0

CeladonCity_DepartmentStore_1F_MapWarps:
	warp_def 1, 15, 0, 1, MAP_CELADON_CITY
	warp_def 2, 14, 3, 1, MAP_CELADON_CITY
	warp_def 3, 15, 0, 1, MAP_CELADON_CITY
	warp_def 9, 15, 0, 2, MAP_CELADON_CITY
	warp_def 10, 14, 3, 2, MAP_CELADON_CITY
	warp_def 11, 15, 0, 2, MAP_CELADON_CITY
	warp_def 6, 1, 0, 0, MAP_CELADON_CITY_DEPARTMENT_STORE_ELEVATOR
	warp_def 4, 2, 3, 1, MAP_CELADON_CITY_DEPARTMENT_STORE_2F

CeladonCity_DepartmentStore_1F_MapBGEvents:
	bg_sign_event 9, 11, 0, BG_EVENT_PLAYER_FACING_ANY, CeladonCity_DepartmentStore_1F_EventScript_LayoutSign
	bg_sign_event 8, 1, 0, BG_EVENT_PLAYER_FACING_ANY, CeladonCity_DepartmentStore_1F_EventScript_FloorSign

CeladonCity_DepartmentStore_1F_MapEvents::
	map_events CeladonCity_DepartmentStore_1F_ObjectEvents, CeladonCity_DepartmentStore_1F_MapWarps, NULL, CeladonCity_DepartmentStore_1F_MapBGEvents

