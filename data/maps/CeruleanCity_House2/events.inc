@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/CeruleanCity_House2/map.json
@

	.align 2

CeruleanCity_House2_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_HIKER, 1, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, CeruleanCity_House2_EventScript_Hiker, 0
	object_event 2, OBJ_EVENT_GFX_LASS, 7, 6, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, CeruleanCity_House2_EventScript_Lass, 0

CeruleanCity_House2_MapWarps:
	warp_def 2, 7, 0, 1, MAP_CERULEAN_CITY
	warp_def 3, 7, 0, 1, MAP_CERULEAN_CITY
	warp_def 4, 7, 1, 1, MAP_CERULEAN_CITY
	warp_def 4, 1, 0, 9, MAP_CERULEAN_CITY

CeruleanCity_House2_MapBGEvents:
	bg_sign_event 4, 1, 0, BG_EVENT_PLAYER_FACING_ANY, CeruleanCity_House2_EventScript_WallHole

CeruleanCity_House2_MapEvents::
	map_events CeruleanCity_House2_ObjectEvents, CeruleanCity_House2_MapWarps, NULL, CeruleanCity_House2_MapBGEvents

