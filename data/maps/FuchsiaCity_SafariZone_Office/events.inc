@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/FuchsiaCity_SafariZone_Office/map.json
@

	.align 2

FuchsiaCity_SafariZone_Office_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_WORKER_M, 2, 2, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NONE, 0, FuchsiaCity_SafariZone_Office_EventScript_Worker2, 0
	object_event 2, OBJ_EVENT_GFX_WORKER_M, 12, 3, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, FuchsiaCity_SafariZone_Office_EventScript_Worker3, 0
	object_event 3, OBJ_EVENT_GFX_WORKER_M, 6, 4, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, FuchsiaCity_SafariZone_Office_EventScript_Worker1, 0
	object_event 4, OBJ_EVENT_GFX_WORKER_M, 10, 8, 3, MOVEMENT_TYPE_FACE_LEFT, 2, 1, TRAINER_TYPE_NONE, 0, FuchsiaCity_SafariZone_Office_EventScript_Worker4, 0

FuchsiaCity_SafariZone_Office_MapWarps:
	warp_def 5, 9, 0, 3, MAP_FUCHSIA_CITY
	warp_def 6, 9, 0, 3, MAP_FUCHSIA_CITY
	warp_def 7, 9, 3, 3, MAP_FUCHSIA_CITY

FuchsiaCity_SafariZone_Office_MapEvents::
	map_events FuchsiaCity_SafariZone_Office_ObjectEvents, FuchsiaCity_SafariZone_Office_MapWarps, NULL, NULL

