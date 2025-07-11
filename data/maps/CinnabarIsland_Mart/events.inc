@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/CinnabarIsland_Mart/map.json
@

	.align 2

CinnabarIsland_Mart_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_CLERK, 2, 3, 0, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, CinnabarIsland_Mart_EventScript_Clerk, 0
	object_event 2, OBJ_EVENT_GFX_WOMAN_2, 6, 2, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NONE, 0, CinnabarIsland_Mart_EventScript_Woman, 0
	object_event 3, OBJ_EVENT_GFX_SCIENTIST, 8, 2, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NONE, 0, CinnabarIsland_Mart_EventScript_Scientist, 0

CinnabarIsland_Mart_MapWarps:
	warp_def 3, 7, 3, 4, MAP_CINNABAR_ISLAND
	warp_def 4, 7, 3, 4, MAP_CINNABAR_ISLAND
	warp_def 5, 7, 3, 4, MAP_CINNABAR_ISLAND

CinnabarIsland_Mart_MapEvents::
	map_events CinnabarIsland_Mart_ObjectEvents, CinnabarIsland_Mart_MapWarps, NULL, NULL

