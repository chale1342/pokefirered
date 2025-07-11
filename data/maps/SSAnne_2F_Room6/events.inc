@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SSAnne_2F_Room6/map.json
@

	.align 2

SSAnne_2F_Room6_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_WOMAN_3, 1, 4, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, SSAnne_2F_Room6_EventScript_Woman2, 0
	object_event 2, OBJ_EVENT_GFX_WOMAN_1, 4, 4, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, SSAnne_2F_Room6_EventScript_Woman1, 0

SSAnne_2F_Room6_MapWarps:
	warp_def 4, 7, 3, 8, MAP_SSANNE_2F_CORRIDOR

SSAnne_2F_Room6_MapEvents::
	map_events SSAnne_2F_Room6_ObjectEvents, SSAnne_2F_Room6_MapWarps, NULL, NULL

