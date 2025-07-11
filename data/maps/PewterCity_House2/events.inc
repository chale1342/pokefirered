@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/PewterCity_House2/map.json
@

	.align 2

PewterCity_House2_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_OLD_MAN_1, 3, 3, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, PewterCity_House2_EventScript_OldMan, 0
	object_event 2, OBJ_EVENT_GFX_LITTLE_BOY, 5, 3, 3, MOVEMENT_TYPE_FACE_DOWN_AND_UP, 1, 1, TRAINER_TYPE_NONE, 0, PewterCity_House2_EventScript_LittleBoy, 0

PewterCity_House2_MapWarps:
	warp_def 3, 7, 0, 6, MAP_PEWTER_CITY
	warp_def 4, 7, 0, 6, MAP_PEWTER_CITY
	warp_def 5, 7, 0, 6, MAP_PEWTER_CITY

PewterCity_House2_MapEvents::
	map_events PewterCity_House2_ObjectEvents, PewterCity_House2_MapWarps, NULL, NULL

