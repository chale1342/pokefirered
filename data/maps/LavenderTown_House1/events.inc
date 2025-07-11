@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/LavenderTown_House1/map.json
@

	.align 2

LavenderTown_House1_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_COOLTRAINER_F, 4, 4, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, LavenderTown_House1_EventScript_CooltrainerF, 0
	object_event 2, OBJ_EVENT_GFX_CUBONE, 8, 6, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, LavenderTown_House1_EventScript_Cubone, 0

LavenderTown_House1_MapWarps:
	warp_def 3, 7, 3, 3, MAP_LAVENDER_TOWN
	warp_def 4, 7, 3, 3, MAP_LAVENDER_TOWN
	warp_def 5, 7, 3, 3, MAP_LAVENDER_TOWN

LavenderTown_House1_MapEvents::
	map_events LavenderTown_House1_ObjectEvents, LavenderTown_House1_MapWarps, NULL, NULL

