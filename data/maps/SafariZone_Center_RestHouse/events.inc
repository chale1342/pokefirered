@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SafariZone_Center_RestHouse/map.json
@

	.align 2

SafariZone_Center_RestHouse_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_SCIENTIST, 3, 4, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, SafariZone_Center_RestHouse_EventScript_Scientist, 0
	object_event 2, OBJ_EVENT_GFX_WOMAN_1, 7, 3, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SafariZone_Center_RestHouse_EventScript_Sara, 0

SafariZone_Center_RestHouse_MapWarps:
	warp_def 3, 9, 3, 12, MAP_SAFARI_ZONE_CENTER
	warp_def 4, 9, 3, 12, MAP_SAFARI_ZONE_CENTER
	warp_def 5, 9, 3, 12, MAP_SAFARI_ZONE_CENTER

SafariZone_Center_RestHouse_MapEvents::
	map_events SafariZone_Center_RestHouse_ObjectEvents, SafariZone_Center_RestHouse_MapWarps, NULL, NULL

