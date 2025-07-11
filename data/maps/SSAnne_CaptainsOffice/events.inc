@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SSAnne_CaptainsOffice/map.json
@

	.align 2

SSAnne_CaptainsOffice_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_CAPTAIN, 5, 4, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NONE, 0, SSAnne_CaptainsOffice_EventScript_Captain, 0

SSAnne_CaptainsOffice_MapWarps:
	warp_def 3, 7, 3, 2, MAP_SSANNE_2F_CORRIDOR

SSAnne_CaptainsOffice_MapBGEvents:
	bg_sign_event 2, 4, 0, BG_EVENT_PLAYER_FACING_ANY, SSAnne_CaptainsOffice_EventScript_Book
	bg_sign_event 5, 3, 0, BG_EVENT_PLAYER_FACING_ANY, SSAnne_CaptainsOffice_EventScript_TrashCan
	bg_sign_event 2, 3, 0, BG_EVENT_PLAYER_FACING_ANY, SSAnne_CaptainsOffice_EventScript_Book

SSAnne_CaptainsOffice_MapEvents::
	map_events SSAnne_CaptainsOffice_ObjectEvents, SSAnne_CaptainsOffice_MapWarps, NULL, SSAnne_CaptainsOffice_MapBGEvents

