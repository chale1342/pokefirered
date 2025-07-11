@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SSAnne_2F_Room3/map.json
@

	.align 2

SSAnne_2F_Room3_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_GENTLEMAN, 2, 5, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, SSAnne_2F_Room3_EventScript_Gentleman, 0
	object_event 2, OBJ_EVENT_GFX_OLD_MAN_1, 3, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SSAnne_2F_Room3_EventScript_OldMan, 0

SSAnne_2F_Room3_MapWarps:
	warp_def 4, 7, 3, 5, MAP_SSANNE_2F_CORRIDOR

SSAnne_2F_Room3_MapEvents::
	map_events SSAnne_2F_Room3_ObjectEvents, SSAnne_2F_Room3_MapWarps, NULL, NULL

