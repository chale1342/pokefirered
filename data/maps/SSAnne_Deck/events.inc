@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SSAnne_Deck/map.json
@

	.align 2

SSAnne_Deck_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_SAILOR, 12, 10, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NORMAL, 2, SSAnne_Deck_EventScript_Trevor, 0
	object_event 2, OBJ_EVENT_GFX_BALDING_MAN, 14, 11, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SSAnne_Deck_EventScript_BaldingMan, 0
	object_event 3, OBJ_EVENT_GFX_SAILOR, 13, 13, 3, MOVEMENT_TYPE_WALK_LEFT_AND_RIGHT, 4, 1, TRAINER_TYPE_NONE, 0, SSAnne_Deck_EventScript_Sailor, 0
	object_event 4, OBJ_EVENT_GFX_SAILOR, 6, 9, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NORMAL, 1, SSAnne_Deck_EventScript_Edmond, 0
	object_event 5, OBJ_EVENT_GFX_YOUNGSTER, 11, 5, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, SSAnne_Deck_EventScript_Youngster, 0

SSAnne_Deck_MapWarps:
	warp_def 16, 8, 3, 0, MAP_SSANNE_3F_CORRIDOR
	warp_def 16, 9, 3, 0, MAP_SSANNE_3F_CORRIDOR

SSAnne_Deck_MapEvents::
	map_events SSAnne_Deck_ObjectEvents, SSAnne_Deck_MapWarps, NULL, NULL

