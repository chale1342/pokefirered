@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/CeladonCity_Restaurant/map.json
@

	.align 2

CeladonCity_Restaurant_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_CHEF, 12, 7, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 2, 1, TRAINER_TYPE_NONE, 0, CeladonCity_Restaurant_EventScript_Chef, 0
	object_event 2, OBJ_EVENT_GFX_WOMAN_2, 11, 4, 3, MOVEMENT_TYPE_WANDER_UP_AND_DOWN, 1, 2, TRAINER_TYPE_NONE, 0, CeladonCity_Restaurant_EventScript_Woman, 0
	object_event 3, OBJ_EVENT_GFX_FAT_MAN, 9, 4, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, CeladonCity_Restaurant_EventScript_FatMan, 0
	object_event 4, OBJ_EVENT_GFX_BALDING_MAN, 1, 2, 0, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, CeladonCity_Restaurant_EventScript_CoinCaseMan, 0
	object_event 5, OBJ_EVENT_GFX_WORKER_M, 3, 7, 0, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, CeladonCity_Restaurant_EventScript_WorkerM, 0

CeladonCity_Restaurant_MapWarps:
	warp_def 5, 9, 0, 7, MAP_CELADON_CITY
	warp_def 6, 9, 0, 7, MAP_CELADON_CITY
	warp_def 7, 9, 0, 7, MAP_CELADON_CITY

CeladonCity_Restaurant_MapEvents::
	map_events CeladonCity_Restaurant_ObjectEvents, CeladonCity_Restaurant_MapWarps, NULL, NULL

