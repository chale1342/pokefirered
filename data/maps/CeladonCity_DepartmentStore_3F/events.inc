@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/CeladonCity_DepartmentStore_3F/map.json
@

	.align 2

CeladonCity_DepartmentStore_3F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_CLERK, 10, 9, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NONE, 0, CeladonCity_DepartmentStore_3F_EventScript_CounterTutor, 0
	object_event 2, OBJ_EVENT_GFX_GBA_KID, 11, 6, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, CeladonCity_DepartmentStore_3F_EventScript_GBAKid1, 0
	object_event 3, OBJ_EVENT_GFX_GBA_KID, 4, 9, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, CeladonCity_DepartmentStore_3F_EventScript_GBAKid3, 0
	object_event 4, OBJ_EVENT_GFX_GBA_KID, 1, 9, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, CeladonCity_DepartmentStore_3F_EventScript_GBAKid2, 0
	object_event 5, OBJ_EVENT_GFX_LITTLE_GIRL, 9, 14, 3, MOVEMENT_TYPE_FACE_LEFT_AND_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, CeladonCity_DepartmentStore_3F_EventScript_LittleGirl, 0

CeladonCity_DepartmentStore_3F_MapWarps:
	warp_def 6, 1, 0, 0, MAP_CELADON_CITY_DEPARTMENT_STORE_ELEVATOR
	warp_def 9, 2, 0, 2, MAP_CELADON_CITY_DEPARTMENT_STORE_2F
	warp_def 3, 2, 0, 1, MAP_CELADON_CITY_DEPARTMENT_STORE_4F

CeladonCity_DepartmentStore_3F_MapBGEvents:
	bg_sign_event 8, 1, 0, BG_EVENT_PLAYER_FACING_ANY, CeladonCity_DepartmentStore_3F_EventScript_FloorSign
	bg_sign_event 2, 8, 0, BG_EVENT_PLAYER_FACING_NORTH, CeladonCity_DepartmentStore_3F_EventScript_TV1
	bg_sign_event 5, 8, 0, BG_EVENT_PLAYER_FACING_NORTH, CeladonCity_DepartmentStore_3F_EventScript_TV2
	bg_sign_event 2, 11, 0, BG_EVENT_PLAYER_FACING_NORTH, CeladonCity_DepartmentStore_3F_EventScript_TV3
	bg_sign_event 5, 11, 0, BG_EVENT_PLAYER_FACING_NORTH, CeladonCity_DepartmentStore_3F_EventScript_TV4
	bg_sign_event 1, 8, 0, BG_EVENT_PLAYER_FACING_ANY, CeladonCity_DepartmentStore_3F_EventScript_SuperNES
	bg_sign_event 1, 11, 0, BG_EVENT_PLAYER_FACING_ANY, CeladonCity_DepartmentStore_3F_EventScript_SuperNES
	bg_sign_event 4, 8, 0, BG_EVENT_PLAYER_FACING_ANY, CeladonCity_DepartmentStore_3F_EventScript_SuperNES
	bg_sign_event 4, 11, 0, BG_EVENT_PLAYER_FACING_ANY, CeladonCity_DepartmentStore_3F_EventScript_SuperNES
	bg_sign_event 2, 4, 0, BG_EVENT_PLAYER_FACING_NORTH, CeladonCity_DepartmentStore_3F_EventScript_Poster
	bg_sign_event 0, 4, 0, BG_EVENT_PLAYER_FACING_NORTH, CeladonCity_DepartmentStore_3F_EventScript_Poster

CeladonCity_DepartmentStore_3F_MapEvents::
	map_events CeladonCity_DepartmentStore_3F_ObjectEvents, CeladonCity_DepartmentStore_3F_MapWarps, NULL, CeladonCity_DepartmentStore_3F_MapBGEvents

