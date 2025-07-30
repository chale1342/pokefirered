@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SSAnne_2F_Room2/map.json
@

	.align 2

SSAnne_2F_Room2_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_FISHER, 5, 5, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NORMAL, 3, SSAnne_2F_Room2_EventScript_Dale, 0
	object_event 2, OBJ_EVENT_GFX_GENTLEMAN, 1, 4, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NORMAL, 2, SSAnne_2F_Room2_EventScript_Brooks, 0
	object_event 3, OBJ_EVENT_GFX_ITEM_BALL, 3, 3, 0, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SSAnne_2F_Room2_EventScript_ItemStardust, FLAG_HIDE_SSANNE_2F_ROOM2_STARDUST

SSAnne_2F_Room2_MapWarps:
	warp_def 4, 7, 3, 4, MAP_SSANNE_2F_CORRIDOR

SSAnne_2F_Room2_MapEvents::
	map_events SSAnne_2F_Room2_ObjectEvents, SSAnne_2F_Room2_MapWarps, NULL, NULL

