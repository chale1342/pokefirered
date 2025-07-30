@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SSAnne_B1F_Room2/map.json
@

	.align 2

SSAnne_B1F_Room2_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_SAILOR, 3, 5, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NORMAL, 1, SSAnne_B1F_Room2_EventScript_Huey, 0
	object_event 2, OBJ_EVENT_GFX_ITEM_BALL, 3, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SSAnne_B1F_Room2_EventScript_ItemTM44, FLAG_HIDE_SSANNE_B1F_ROOM2_TM44

SSAnne_B1F_Room2_MapWarps:
	warp_def 4, 7, 3, 2, MAP_SSANNE_B1F_CORRIDOR

SSAnne_B1F_Room2_MapEvents::
	map_events SSAnne_B1F_Room2_ObjectEvents, SSAnne_B1F_Room2_MapWarps, NULL, NULL

