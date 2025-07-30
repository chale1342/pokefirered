@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/CeruleanCity_House5/map.json
@

	.align 2

CeruleanCity_House5_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_OLD_MAN_2, 7, 4, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, CeruleanCity_House5_EventScript_BerryPowderMan, 0

CeruleanCity_House5_MapWarps:
	warp_def 4, 7, 3, 13, MAP_CERULEAN_CITY

CeruleanCity_House5_MapBGEvents:
	bg_sign_event 3, 1, 0, BG_EVENT_PLAYER_FACING_ANY, CeruleanCity_House5_EventScript_BerryCrushRankings

CeruleanCity_House5_MapEvents::
	map_events CeruleanCity_House5_ObjectEvents, CeruleanCity_House5_MapWarps, NULL, CeruleanCity_House5_MapBGEvents

