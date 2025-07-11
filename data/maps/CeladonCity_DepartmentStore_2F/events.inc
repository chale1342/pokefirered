@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/CeladonCity_DepartmentStore_2F/map.json
@

	.align 2

CeladonCity_DepartmentStore_2F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_LASS, 5, 10, 3, MOVEMENT_TYPE_WANDER_UP_AND_DOWN, 2, 1, TRAINER_TYPE_NONE, 0, CeladonCity_DepartmentStore_2F_EventScript_Lass, 0
	object_event 2, OBJ_EVENT_GFX_CLERK, 1, 8, 0, MOVEMENT_TYPE_FACE_DOWN, 3, 1, TRAINER_TYPE_NONE, 0, CeladonCity_DepartmentStore_2F_EventScript_ClerkItems, 0
	object_event 3, OBJ_EVENT_GFX_CLERK, 1, 6, 3, MOVEMENT_TYPE_FACE_RIGHT, 3, 1, TRAINER_TYPE_NONE, 0, CeladonCity_DepartmentStore_2F_EventScript_ClerkTMs, 0
	object_event 4, OBJ_EVENT_GFX_WOMAN_1, 11, 6, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, CeladonCity_DepartmentStore_2F_EventScript_Woman, FLAG_HIDE_POSTGAME_GOSSIPERS

CeladonCity_DepartmentStore_2F_MapWarps:
	warp_def 6, 1, 0, 0, MAP_CELADON_CITY_DEPARTMENT_STORE_ELEVATOR
	warp_def 3, 2, 3, 7, MAP_CELADON_CITY_DEPARTMENT_STORE_1F
	warp_def 9, 2, 3, 1, MAP_CELADON_CITY_DEPARTMENT_STORE_3F

CeladonCity_DepartmentStore_2F_MapBGEvents:
	bg_sign_event 4, 1, 0, BG_EVENT_PLAYER_FACING_ANY, CeladonCity_DepartmentStore_2F_EventScript_FloorSign

CeladonCity_DepartmentStore_2F_MapEvents::
	map_events CeladonCity_DepartmentStore_2F_ObjectEvents, CeladonCity_DepartmentStore_2F_MapWarps, NULL, CeladonCity_DepartmentStore_2F_MapBGEvents

