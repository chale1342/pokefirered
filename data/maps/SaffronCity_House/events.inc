@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SaffronCity_House/map.json
@

	.align 2

SaffronCity_House_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_PIDGEY, 0, 5, 3, MOVEMENT_TYPE_WANDER_UP_AND_DOWN, 1, 4, TRAINER_TYPE_NONE, 0, SaffronCity_House_EventScript_Pidgey, 0
	object_event 2, OBJ_EVENT_GFX_LASS, 4, 4, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, SaffronCity_House_EventScript_Lass, 0
	object_event 3, OBJ_EVENT_GFX_YOUNGSTER, 6, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SaffronCity_House_EventScript_Youngster, 0
	object_event 4, OBJ_EVENT_GFX_CLIPBOARD, 5, 4, 0, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NONE, 0, 0x0, 0

SaffronCity_House_MapWarps:
	warp_def 3, 7, 3, 4, MAP_SAFFRON_CITY
	warp_def 4, 7, 3, 4, MAP_SAFFRON_CITY
	warp_def 5, 7, 3, 4, MAP_SAFFRON_CITY

SaffronCity_House_MapBGEvents:
	bg_sign_event 5, 4, 3, BG_EVENT_PLAYER_FACING_ANY, SaffronCity_House_EventScript_Letter

SaffronCity_House_MapEvents::
	map_events SaffronCity_House_ObjectEvents, SaffronCity_House_MapWarps, NULL, SaffronCity_House_MapBGEvents

