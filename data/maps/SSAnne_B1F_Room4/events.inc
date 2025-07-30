@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SSAnne_B1F_Room4/map.json
@

	.align 2

SSAnne_B1F_Room4_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_SAILOR, 3, 3, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 3, SSAnne_B1F_Room4_EventScript_Duncan, 0
	object_event 2, OBJ_EVENT_GFX_SAILOR, 2, 6, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NORMAL, 1, SSAnne_B1F_Room4_EventScript_Leonard, 0

SSAnne_B1F_Room4_MapWarps:
	warp_def 4, 7, 3, 4, MAP_SSANNE_B1F_CORRIDOR

SSAnne_B1F_Room4_MapEvents::
	map_events SSAnne_B1F_Room4_ObjectEvents, SSAnne_B1F_Room4_MapWarps, NULL, NULL

