@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SafariZone_SecretHouse/map.json
@

	.align 2

SafariZone_SecretHouse_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_WORKER_M, 6, 5, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SafariZone_SecretHouse_EventScript_Attendant, 0

SafariZone_SecretHouse_MapWarps:
	warp_def 3, 9, 3, 9, MAP_SAFARI_ZONE_WEST
	warp_def 4, 9, 3, 9, MAP_SAFARI_ZONE_WEST
	warp_def 5, 9, 3, 9, MAP_SAFARI_ZONE_WEST

SafariZone_SecretHouse_MapEvents::
	map_events SafariZone_SecretHouse_ObjectEvents, SafariZone_SecretHouse_MapWarps, NULL, NULL

