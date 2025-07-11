@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/FourIsland_Mart/map.json
@

	.align 2

FourIsland_Mart_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_CLERK, 2, 3, 0, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, FourIsland_Mart_EventScript_Clerk, 0
	object_event 2, OBJ_EVENT_GFX_OLD_MAN_1, 6, 5, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, FourIsland_Mart_EventScript_OldMan, 0
	object_event 3, OBJ_EVENT_GFX_CAMPER, 8, 3, 3, MOVEMENT_TYPE_WANDER_AROUND, 2, 1, TRAINER_TYPE_NONE, 0, FourIsland_Mart_EventScript_Camper, 0

FourIsland_Mart_MapWarps:
	warp_def 4, 7, 3, 7, MAP_FOUR_ISLAND

FourIsland_Mart_MapEvents::
	map_events FourIsland_Mart_ObjectEvents, FourIsland_Mart_MapWarps, NULL, NULL

