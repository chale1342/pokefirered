@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SSAnne_Exterior/map.json
@

	.align 2

SSAnne_Exterior_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_SS_ANNE, 30, 16, 1, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, 0x0, FLAG_HIDE_SS_ANNE

SSAnne_Exterior_MapWarps:
	warp_def 31, 5, 0, 0, MAP_VERMILION_CITY
	warp_def 32, 5, 3, 1, MAP_VERMILION_CITY
	warp_def 32, 14, 3, 2, MAP_SSANNE_1F_CORRIDOR
	warp_def 33, 15, 0, 3, MAP_SSANNE_1F_CORRIDOR
	warp_def 33, 5, 0, 2, MAP_VERMILION_CITY

SSAnne_Exterior_MapBGEvents:
	bg_hidden_item_event 58, 28, 3, ITEM_LAVA_COOKIE, FLAG_HIDDEN_ITEM_SSANNE_EXTERIOR_LAVA_COOKIE, 1, FALSE

SSAnne_Exterior_MapEvents::
	map_events SSAnne_Exterior_ObjectEvents, SSAnne_Exterior_MapWarps, NULL, SSAnne_Exterior_MapBGEvents

