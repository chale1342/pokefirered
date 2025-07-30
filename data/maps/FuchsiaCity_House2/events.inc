@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/FuchsiaCity_House2/map.json
@

	.align 2

FuchsiaCity_House2_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_FISHER, 6, 5, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, FuchsiaCity_House2_EventScript_FishingGurusBrother, 0

FuchsiaCity_House2_MapWarps:
	warp_def 2, 9, 0, 7, MAP_FUCHSIA_CITY
	warp_def 3, 8, 3, 7, MAP_FUCHSIA_CITY
	warp_def 4, 9, 0, 7, MAP_FUCHSIA_CITY
	warp_def 3, 1, 3, 8, MAP_FUCHSIA_CITY

FuchsiaCity_House2_MapEvents::
	map_events FuchsiaCity_House2_ObjectEvents, FuchsiaCity_House2_MapWarps, NULL, NULL

