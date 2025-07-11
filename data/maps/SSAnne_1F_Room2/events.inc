@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SSAnne_1F_Room2/map.json
@

	.align 2

SSAnne_1F_Room2_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_LASS, 5, 3, 3, MOVEMENT_TYPE_FACE_DOWN_AND_LEFT, 1, 1, TRAINER_TYPE_NORMAL, 2, SSAnne_1F_Room2_EventScript_Ann, 0
	object_event 2, OBJ_EVENT_GFX_YOUNGSTER, 0, 4, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NORMAL, 3, SSAnne_1F_Room2_EventScript_Tyler, 0
	object_event 3, OBJ_EVENT_GFX_WOMAN_2, 2, 6, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 1, SSAnne_1F_Room2_EventScript_Woman, 0
	object_event 4, OBJ_EVENT_GFX_ITEM_BALL, 5, 7, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SSAnne_1F_Room2_EventScript_ItemTM31, FLAG_HIDE_SSANNE_1F_ROOM2_TM31

SSAnne_1F_Room2_MapWarps:
	warp_def 2, 1, 0, 7, MAP_SSANNE_1F_CORRIDOR

SSAnne_1F_Room2_MapEvents::
	map_events SSAnne_1F_Room2_ObjectEvents, SSAnne_1F_Room2_MapWarps, NULL, NULL

