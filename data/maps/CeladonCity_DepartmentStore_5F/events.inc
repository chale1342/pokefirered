@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/CeladonCity_DepartmentStore_5F/map.json
@

	.align 2

CeladonCity_DepartmentStore_5F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_GENTLEMAN, 11, 6, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, CeladonCity_DepartmentStore_5F_EventScript_Gentleman, 0
	object_event 2, OBJ_EVENT_GFX_SAILOR, 6, 8, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, CeladonCity_DepartmentStore_5F_EventScript_Sailor, 0
	object_event 3, OBJ_EVENT_GFX_CLERK, 1, 7, 3, MOVEMENT_TYPE_FACE_DOWN, 2, 1, TRAINER_TYPE_NONE, 0, CeladonCity_DepartmentStore_5F_EventScript_ClerkXItems, 0
	object_event 4, OBJ_EVENT_GFX_CLERK, 1, 6, 3, MOVEMENT_TYPE_FACE_RIGHT, 2, 1, TRAINER_TYPE_NONE, 0, CeladonCity_DepartmentStore_5F_EventScript_ClerkVitamins, 0

CeladonCity_DepartmentStore_5F_MapWarps:
	warp_def 6, 1, 0, 0, MAP_CELADON_CITY_DEPARTMENT_STORE_ELEVATOR
	warp_def 9, 2, 3, 2, MAP_CELADON_CITY_DEPARTMENT_STORE_4F
	warp_def 3, 2, 3, 0, MAP_CELADON_CITY_DEPARTMENT_STORE_ROOF

CeladonCity_DepartmentStore_5F_MapBGEvents:
	bg_sign_event 8, 1, 0, BG_EVENT_PLAYER_FACING_ANY, CeladonCity_DepartmentStore_5F_EventScript_FloorSign

CeladonCity_DepartmentStore_5F_MapEvents::
	map_events CeladonCity_DepartmentStore_5F_ObjectEvents, CeladonCity_DepartmentStore_5F_MapWarps, NULL, CeladonCity_DepartmentStore_5F_MapBGEvents

