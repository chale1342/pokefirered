@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/FuchsiaCity_SafariZone_Entrance/map.json
@

	.align 2

FuchsiaCity_SafariZone_Entrance_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_WORKER_M, 7, 3, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, 0x0, 0
	object_event 2, OBJ_EVENT_GFX_WORKER_M, 1, 6, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, FuchsiaCity_SafariZone_Entrance_EventScript_InfoAttendant, 0

FuchsiaCity_SafariZone_Entrance_MapWarps:
	warp_def 4, 1, 3, 1, MAP_SAFARI_ZONE_CENTER
	warp_def 5, 7, 3, 0, MAP_FUCHSIA_CITY
	warp_def 4, 7, 3, 0, MAP_FUCHSIA_CITY
	warp_def 3, 7, 3, 0, MAP_FUCHSIA_CITY

FuchsiaCity_SafariZone_Entrance_MapCoordEvents:
	coord_event 4, 3, 3, VAR_TEMP_1, 0, FuchsiaCity_SafariZone_Entrance_EventScript_EntryTriggerMid
	coord_event 5, 3, 3, VAR_TEMP_1, 0, FuchsiaCity_SafariZone_Entrance_EventScript_EntryTriggerRight
	coord_event 3, 3, 3, VAR_TEMP_1, 0, FuchsiaCity_SafariZone_Entrance_EventScript_EntryTriggerLeft

FuchsiaCity_SafariZone_Entrance_MapEvents::
	map_events FuchsiaCity_SafariZone_Entrance_ObjectEvents, FuchsiaCity_SafariZone_Entrance_MapWarps, FuchsiaCity_SafariZone_Entrance_MapCoordEvents, NULL

