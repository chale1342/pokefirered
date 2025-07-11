@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/ViridianCity_House/map.json
@

	.align 2

ViridianCity_House_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_BALDING_MAN, 7, 4, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, ViridianCity_House_EventScript_BaldingMan, 0
	object_event 2, OBJ_EVENT_GFX_LITTLE_GIRL, 2, 5, 3, MOVEMENT_TYPE_WANDER_UP_AND_DOWN, 1, 2, TRAINER_TYPE_NONE, 0, ViridianCity_House_EventScript_LittleGirl, 0
	object_event 3, OBJ_EVENT_GFX_SPEAROW, 6, 6, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 4, 1, TRAINER_TYPE_NONE, 0, ViridianCity_House_EventScript_Speary, 0

ViridianCity_House_MapWarps:
	warp_def 3, 7, 0, 1, MAP_VIRIDIAN_CITY
	warp_def 4, 7, 0, 1, MAP_VIRIDIAN_CITY
	warp_def 5, 7, 3, 1, MAP_VIRIDIAN_CITY

ViridianCity_House_MapBGEvents:
	bg_sign_event 7, 1, 0, BG_EVENT_PLAYER_FACING_ANY, ViridianCity_House_EventScript_NicknameSign

ViridianCity_House_MapEvents::
	map_events ViridianCity_House_ObjectEvents, ViridianCity_House_MapWarps, NULL, ViridianCity_House_MapBGEvents

