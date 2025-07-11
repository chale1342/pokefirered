@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SSAnne_B1F_Room3/map.json
@

	.align 2

SSAnne_B1F_Room3_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_SAILOR, 4, 4, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 3, SSAnne_B1F_Room3_EventScript_Dylan, 0
	object_event 2, OBJ_EVENT_GFX_ITEM_BALL, 1, 5, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SSAnne_B1F_Room3_EventScript_ItemEther, FLAG_HIDE_SSANNE_B1F_ROOM3_ETHER

SSAnne_B1F_Room3_MapWarps:
	warp_def 4, 7, 3, 3, MAP_SSANNE_B1F_CORRIDOR

SSAnne_B1F_Room3_MapEvents::
	map_events SSAnne_B1F_Room3_ObjectEvents, SSAnne_B1F_Room3_MapWarps, NULL, NULL

