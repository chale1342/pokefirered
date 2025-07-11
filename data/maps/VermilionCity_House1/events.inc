@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/VermilionCity_House1/map.json
@

	.align 2

VermilionCity_House1_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_FISHER, 4, 5, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, VermilionCity_House1_EventScript_FishingGuru, 0

VermilionCity_House1_MapWarps:
	warp_def 3, 7, 3, 3, MAP_VERMILION_CITY
	warp_def 4, 7, 3, 3, MAP_VERMILION_CITY
	warp_def 5, 7, 3, 3, MAP_VERMILION_CITY

VermilionCity_House1_MapEvents::
	map_events VermilionCity_House1_ObjectEvents, VermilionCity_House1_MapWarps, NULL, NULL

