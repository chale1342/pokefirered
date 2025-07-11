@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/CeladonCity_DepartmentStore_4F/map.json
@

	.align 2

CeladonCity_DepartmentStore_4F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_MAN, 6, 6, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, CeladonCity_DepartmentStore_4F_EventScript_Man, 0
	object_event 2, OBJ_EVENT_GFX_YOUNGSTER, 10, 11, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, CeladonCity_DepartmentStore_4F_EventScript_Youngster, 0
	object_event 3, OBJ_EVENT_GFX_CLERK, 3, 13, 0, MOVEMENT_TYPE_FACE_UP, 3, 1, TRAINER_TYPE_NONE, 0, CeladonCity_DepartmentStore_4F_EventScript_Clerk, 0

CeladonCity_DepartmentStore_4F_MapWarps:
	warp_def 6, 1, 0, 0, MAP_CELADON_CITY_DEPARTMENT_STORE_ELEVATOR
	warp_def 3, 2, 0, 2, MAP_CELADON_CITY_DEPARTMENT_STORE_3F
	warp_def 9, 2, 0, 1, MAP_CELADON_CITY_DEPARTMENT_STORE_5F

CeladonCity_DepartmentStore_4F_MapBGEvents:
	bg_sign_event 4, 1, 0, BG_EVENT_PLAYER_FACING_ANY, CeladonCity_DepartmentStore_4F_EventScript_FloorSign

CeladonCity_DepartmentStore_4F_MapEvents::
	map_events CeladonCity_DepartmentStore_4F_ObjectEvents, CeladonCity_DepartmentStore_4F_MapWarps, NULL, CeladonCity_DepartmentStore_4F_MapBGEvents

