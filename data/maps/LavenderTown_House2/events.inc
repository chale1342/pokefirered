@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/LavenderTown_House2/map.json
@

	.align 2

LavenderTown_House2_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_GENTLEMAN, 4, 4, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, LavenderTown_House2_EventScript_NameRater, 0

LavenderTown_House2_MapWarps:
	warp_def 3, 7, 3, 4, MAP_LAVENDER_TOWN
	warp_def 4, 7, 3, 4, MAP_LAVENDER_TOWN
	warp_def 5, 7, 3, 4, MAP_LAVENDER_TOWN

LavenderTown_House2_MapEvents::
	map_events LavenderTown_House2_ObjectEvents, LavenderTown_House2_MapWarps, NULL, NULL

