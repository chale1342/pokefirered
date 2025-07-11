@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/CeruleanCity_BikeShop/map.json
@

	.align 2

CeruleanCity_BikeShop_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_MAN, 9, 3, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, CeruleanCity_BikeShop_EventScript_Clerk, 0
	object_event 2, OBJ_EVENT_GFX_YOUNGSTER, 9, 7, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, CeruleanCity_BikeShop_EventScript_Youngster, 0
	object_event 3, OBJ_EVENT_GFX_WOMAN_2, 5, 5, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, CeruleanCity_BikeShop_EventScript_Woman, 0

CeruleanCity_BikeShop_MapWarps:
	warp_def 4, 9, 0, 5, MAP_CERULEAN_CITY
	warp_def 5, 8, 3, 5, MAP_CERULEAN_CITY
	warp_def 6, 9, 0, 5, MAP_CERULEAN_CITY

CeruleanCity_BikeShop_MapBGEvents:
	bg_sign_event 4, 3, 0, BG_EVENT_PLAYER_FACING_ANY, CeruleanCity_BikeShop_EventScript_Bicycle
	bg_sign_event 4, 4, 0, BG_EVENT_PLAYER_FACING_ANY, CeruleanCity_BikeShop_EventScript_Bicycle
	bg_sign_event 4, 5, 0, BG_EVENT_PLAYER_FACING_ANY, CeruleanCity_BikeShop_EventScript_Bicycle
	bg_sign_event 2, 3, 0, BG_EVENT_PLAYER_FACING_ANY, CeruleanCity_BikeShop_EventScript_Bicycle
	bg_sign_event 1, 4, 0, BG_EVENT_PLAYER_FACING_ANY, CeruleanCity_BikeShop_EventScript_Bicycle
	bg_sign_event 2, 5, 0, BG_EVENT_PLAYER_FACING_ANY, CeruleanCity_BikeShop_EventScript_Bicycle
	bg_sign_event 2, 7, 0, BG_EVENT_PLAYER_FACING_ANY, CeruleanCity_BikeShop_EventScript_Bicycle
	bg_sign_event 2, 8, 0, BG_EVENT_PLAYER_FACING_ANY, CeruleanCity_BikeShop_EventScript_Bicycle

CeruleanCity_BikeShop_MapEvents::
	map_events CeruleanCity_BikeShop_ObjectEvents, CeruleanCity_BikeShop_MapWarps, NULL, CeruleanCity_BikeShop_MapBGEvents

