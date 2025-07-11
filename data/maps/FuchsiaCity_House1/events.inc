@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/FuchsiaCity_House1/map.json
@

	.align 2

FuchsiaCity_House1_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_OLD_MAN_1, 7, 4, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, FuchsiaCity_House1_EventScript_OldMan, 0
	object_event 2, OBJ_EVENT_GFX_WOMAN_2, 1, 2, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NONE, 0, FuchsiaCity_House1_EventScript_Woman, 0
	object_event 3, OBJ_EVENT_GFX_LITTLE_BOY, 2, 5, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, FuchsiaCity_House1_EventScript_LittleBoy, 0

FuchsiaCity_House1_MapWarps:
	warp_def 3, 7, 3, 5, MAP_FUCHSIA_CITY
	warp_def 4, 7, 3, 5, MAP_FUCHSIA_CITY
	warp_def 5, 7, 3, 5, MAP_FUCHSIA_CITY

FuchsiaCity_House1_MapEvents::
	map_events FuchsiaCity_House1_ObjectEvents, FuchsiaCity_House1_MapWarps, NULL, NULL

