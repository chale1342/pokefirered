@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SSAnne_2F_Room4/map.json
@

	.align 2

SSAnne_2F_Room4_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_GENTLEMAN, 0, 5, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NORMAL, 3, SSAnne_2F_Room4_EventScript_Lamar, 0
	object_event 2, OBJ_EVENT_GFX_LASS, 3, 3, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 3, SSAnne_2F_Room4_EventScript_Dawn, 0
	object_event 3, OBJ_EVENT_GFX_ITEM_BALL, 2, 4, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SSAnne_2F_Room4_EventScript_ItemXAttack, FLAG_HIDE_SSANNE_2F_ROOM4_X_ATTACK

SSAnne_2F_Room4_MapWarps:
	warp_def 4, 7, 3, 6, MAP_SSANNE_2F_CORRIDOR

SSAnne_2F_Room4_MapEvents::
	map_events SSAnne_2F_Room4_ObjectEvents, SSAnne_2F_Room4_MapWarps, NULL, NULL

