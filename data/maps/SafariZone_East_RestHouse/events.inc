@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SafariZone_East_RestHouse/map.json
@

	.align 2

SafariZone_East_RestHouse_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_SCIENTIST, 3, 5, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, SafariZone_East_RestHouse_EventScript_Scientist, 0
	object_event 2, OBJ_EVENT_GFX_ROCKER, 6, 3, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SafariZone_East_RestHouse_EventScript_Rocker, 0
	object_event 3, OBJ_EVENT_GFX_BALDING_MAN, 7, 3, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SafariZone_East_RestHouse_EventScript_BaldingMan, 0

SafariZone_East_RestHouse_MapWarps:
	warp_def 3, 9, 3, 6, MAP_SAFARI_ZONE_EAST
	warp_def 4, 9, 3, 6, MAP_SAFARI_ZONE_EAST
	warp_def 5, 9, 3, 6, MAP_SAFARI_ZONE_EAST

SafariZone_East_RestHouse_MapEvents::
	map_events SafariZone_East_RestHouse_ObjectEvents, SafariZone_East_RestHouse_MapWarps, NULL, NULL

