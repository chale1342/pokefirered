@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SSAnne_B1F_Room1/map.json
@

	.align 2

SSAnne_B1F_Room1_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_FISHER, 5, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 2, SSAnne_B1F_Room1_EventScript_Barny, 0
	object_event 2, OBJ_EVENT_GFX_SAILOR, 3, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 2, SSAnne_B1F_Room1_EventScript_Phillip, 0

SSAnne_B1F_Room1_MapWarps:
	warp_def 4, 7, 3, 1, MAP_SSANNE_B1F_CORRIDOR

SSAnne_B1F_Room1_MapEvents::
	map_events SSAnne_B1F_Room1_ObjectEvents, SSAnne_B1F_Room1_MapWarps, NULL, NULL

