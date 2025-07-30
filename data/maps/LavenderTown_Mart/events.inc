@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/LavenderTown_Mart/map.json
@

	.align 2

LavenderTown_Mart_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_CLERK, 2, 3, 0, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, LavenderTown_Mart_EventScript_Clerk, 0
	object_event 2, OBJ_EVENT_GFX_BALDING_MAN, 6, 2, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, LavenderTown_Mart_EventScript_BaldingMan, 0
	object_event 3, OBJ_EVENT_GFX_ROCKER, 9, 2, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, LavenderTown_Mart_EventScript_Rocker, 0
	object_event 4, OBJ_EVENT_GFX_YOUNGSTER, 9, 5, 3, MOVEMENT_TYPE_FACE_LEFT_AND_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, LavenderTown_Mart_EventScript_Youngster, 0

LavenderTown_Mart_MapWarps:
	warp_def 3, 7, 3, 5, MAP_LAVENDER_TOWN
	warp_def 4, 7, 3, 5, MAP_LAVENDER_TOWN
	warp_def 5, 7, 3, 5, MAP_LAVENDER_TOWN

LavenderTown_Mart_MapEvents::
	map_events LavenderTown_Mart_ObjectEvents, LavenderTown_Mart_MapWarps, NULL, NULL

