@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SSAnne_B1F_Room5/map.json
@

	.align 2

SSAnne_B1F_Room5_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_BOY, 3, 5, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SSAnne_B1F_Room5_EventScript_Boy, 0
	object_event 2, OBJ_EVENT_GFX_MACHOKE, 2, 5, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SSAnne_B1F_Room5_EventScript_Machoke, 0
	object_event 3, OBJ_EVENT_GFX_ITEM_BALL, 2, 2, 0, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SSAnne_B1F_Room5_EventScript_ItemSuperPotion, FLAG_HIDE_SSANNE_B1F_ROOM5_SUPER_POTION

SSAnne_B1F_Room5_MapWarps:
	warp_def 4, 7, 3, 5, MAP_SSANNE_B1F_CORRIDOR

SSAnne_B1F_Room5_MapEvents::
	map_events SSAnne_B1F_Room5_ObjectEvents, SSAnne_B1F_Room5_MapWarps, NULL, NULL

