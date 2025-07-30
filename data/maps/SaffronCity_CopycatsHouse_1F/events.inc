@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SaffronCity_CopycatsHouse_1F/map.json
@

	.align 2

SaffronCity_CopycatsHouse_1F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_BALDING_MAN, 8, 4, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, SaffronCity_CopycatsHouse_1F_EventScript_CopycatsDad, 0
	object_event 2, OBJ_EVENT_GFX_WOMAN_3, 3, 3, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SaffronCity_CopycatsHouse_1F_EventScript_CopycatsMom, 0
	object_event 3, OBJ_EVENT_GFX_CHANSEY, 4, 4, 3, MOVEMENT_TYPE_WANDER_UP_AND_DOWN, 1, 2, TRAINER_TYPE_NONE, 0, SaffronCity_CopycatsHouse_1F_EventScript_Chansey, 0

SaffronCity_CopycatsHouse_1F_MapWarps:
	warp_def 3, 8, 3, 1, MAP_SAFFRON_CITY
	warp_def 4, 8, 3, 1, MAP_SAFFRON_CITY
	warp_def 5, 8, 3, 1, MAP_SAFFRON_CITY
	warp_def 10, 2, 3, 0, MAP_SAFFRON_CITY_COPYCATS_HOUSE_2F

SaffronCity_CopycatsHouse_1F_MapEvents::
	map_events SaffronCity_CopycatsHouse_1F_ObjectEvents, SaffronCity_CopycatsHouse_1F_MapWarps, NULL, NULL

