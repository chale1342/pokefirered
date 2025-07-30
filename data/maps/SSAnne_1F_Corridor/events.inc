@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SSAnne_1F_Corridor/map.json
@

	.align 2

SSAnne_1F_Corridor_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_SAILOR, 18, 8, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NONE, 0, SSAnne_1F_Corridor_EventScript_Sailor, 0
	object_event 2, OBJ_EVENT_GFX_WORKER_M, 12, 9, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SSAnne_1F_Corridor_EventScript_WorkerM, 0

SSAnne_1F_Corridor_MapWarps:
	warp_def 3, 8, 3, 0, MAP_SSANNE_2F_CORRIDOR
	warp_def 2, 18, 3, 0, MAP_SSANNE_KITCHEN
	warp_def 19, 1, 3, 2, MAP_SSANNE_EXTERIOR
	warp_def 20, 0, 0, 3, MAP_SSANNE_EXTERIOR
	warp_def 3, 20, 0, 0, MAP_SSANNE_KITCHEN
	warp_def 28, 17, 3, 0, MAP_SSANNE_B1F_CORRIDOR
	warp_def 5, 10, 3, 0, MAP_SSANNE_1F_ROOM1
	warp_def 8, 10, 3, 0, MAP_SSANNE_1F_ROOM2
	warp_def 11, 10, 3, 0, MAP_SSANNE_1F_ROOM3
	warp_def 14, 10, 3, 0, MAP_SSANNE_1F_ROOM4
	warp_def 17, 10, 3, 0, MAP_SSANNE_1F_ROOM5
	warp_def 23, 10, 3, 0, MAP_SSANNE_1F_ROOM7
	warp_def 20, 10, 3, 0, MAP_SSANNE_1F_ROOM6

SSAnne_1F_Corridor_MapEvents::
	map_events SSAnne_1F_Corridor_ObjectEvents, SSAnne_1F_Corridor_MapWarps, NULL, NULL

