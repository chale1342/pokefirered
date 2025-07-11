@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/FourIsland_House1/map.json
@

	.align 2

FourIsland_House1_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_FAT_MAN, 8, 3, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, FourIsland_House1_EventScript_BodySlamTutor, 0
	object_event 2, OBJ_EVENT_GFX_FAT_MAN, 9, 3, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, FourIsland_House1_EventScript_FatMan, 0

FourIsland_House1_MapWarps:
	warp_def 4, 7, 3, 2, MAP_FOUR_ISLAND

FourIsland_House1_MapEvents::
	map_events FourIsland_House1_ObjectEvents, FourIsland_House1_MapWarps, NULL, NULL

