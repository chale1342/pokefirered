@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/FiveIsland_Harbor/map.json
@

	.align 2

FiveIsland_Harbor_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_SEAGALLOP, 8, 9, 0, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, 0x0, 0
	object_event 2, OBJ_EVENT_GFX_SAILOR, 8, 6, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NONE, 0, FiveIsland_Harbor_EventScript_Sailor, 0

FiveIsland_Harbor_MapWarps:
	warp_def 8, 2, 3, 0, MAP_FIVE_ISLAND

FiveIsland_Harbor_MapEvents::
	map_events FiveIsland_Harbor_ObjectEvents, FiveIsland_Harbor_MapWarps, NULL, NULL

