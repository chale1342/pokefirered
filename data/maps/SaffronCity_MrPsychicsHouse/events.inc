@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SaffronCity_MrPsychicsHouse/map.json
@

	.align 2

SaffronCity_MrPsychicsHouse_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_BALDING_MAN, 7, 4, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, SaffronCity_MrPsychicsHouse_EventScript_MrPsychic, 0

SaffronCity_MrPsychicsHouse_MapWarps:
	warp_def 3, 7, 3, 7, MAP_SAFFRON_CITY
	warp_def 4, 7, 3, 7, MAP_SAFFRON_CITY
	warp_def 5, 7, 3, 7, MAP_SAFFRON_CITY

SaffronCity_MrPsychicsHouse_MapEvents::
	map_events SaffronCity_MrPsychicsHouse_ObjectEvents, SaffronCity_MrPsychicsHouse_MapWarps, NULL, NULL

