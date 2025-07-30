@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/CeruleanCity_House1/map.json
@

	.align 2

CeruleanCity_House1_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_GENTLEMAN, 6, 5, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, CeruleanCity_House1_EventScript_BadgeGuy, 0

CeruleanCity_House1_MapWarps:
	warp_def 2, 9, 0, 0, MAP_CERULEAN_CITY
	warp_def 3, 8, 3, 0, MAP_CERULEAN_CITY
	warp_def 4, 9, 0, 0, MAP_CERULEAN_CITY
	warp_def 3, 1, 3, 8, MAP_CERULEAN_CITY

CeruleanCity_House1_MapEvents::
	map_events CeruleanCity_House1_ObjectEvents, CeruleanCity_House1_MapWarps, NULL, NULL

