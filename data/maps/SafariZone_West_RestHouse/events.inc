@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SafariZone_West_RestHouse/map.json
@

	.align 2

SafariZone_West_RestHouse_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_SCIENTIST, 3, 4, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, SafariZone_West_RestHouse_EventScript_Scientist, 0
	object_event 2, OBJ_EVENT_GFX_MAN, 2, 2, 0, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, SafariZone_West_RestHouse_EventScript_Man, 0
	object_event 3, OBJ_EVENT_GFX_COOLTRAINER_F, 7, 3, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, SafariZone_West_RestHouse_EventScript_CooltrainerF, 0

SafariZone_West_RestHouse_MapWarps:
	warp_def 3, 9, 3, 10, MAP_SAFARI_ZONE_WEST
	warp_def 4, 9, 3, 10, MAP_SAFARI_ZONE_WEST
	warp_def 5, 9, 3, 10, MAP_SAFARI_ZONE_WEST

SafariZone_West_RestHouse_MapEvents::
	map_events SafariZone_West_RestHouse_ObjectEvents, SafariZone_West_RestHouse_MapWarps, NULL, NULL

