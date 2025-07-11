@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SafariZone_Center/map.json
@

	.align 2

SafariZone_Center_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_ITEM_BALL, 24, 15, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SafariZone_Center_EventScript_ItemNugget, FLAG_HIDE_SAFARI_ZONE_CENTER_NUGGET

SafariZone_Center_MapWarps:
	warp_def 25, 30, 3, 0, MAP_FUCHSIA_CITY_SAFARI_ZONE_ENTRANCE
	warp_def 26, 30, 3, 0, MAP_FUCHSIA_CITY_SAFARI_ZONE_ENTRANCE
	warp_def 27, 30, 3, 0, MAP_FUCHSIA_CITY_SAFARI_ZONE_ENTRANCE
	warp_def 25, 5, 3, 9, MAP_SAFARI_ZONE_NORTH
	warp_def 26, 5, 3, 10, MAP_SAFARI_ZONE_NORTH
	warp_def 27, 5, 0, 11, MAP_SAFARI_ZONE_NORTH
	warp_def 8, 17, 3, 6, MAP_SAFARI_ZONE_WEST
	warp_def 8, 18, 3, 7, MAP_SAFARI_ZONE_WEST
	warp_def 8, 19, 0, 8, MAP_SAFARI_ZONE_WEST
	warp_def 43, 15, 3, 3, MAP_SAFARI_ZONE_EAST
	warp_def 43, 16, 3, 4, MAP_SAFARI_ZONE_EAST
	warp_def 43, 17, 0, 5, MAP_SAFARI_ZONE_EAST
	warp_def 29, 25, 0, 1, MAP_SAFARI_ZONE_CENTER_REST_HOUSE

SafariZone_Center_MapBGEvents:
	bg_sign_event 30, 26, 0, BG_EVENT_PLAYER_FACING_ANY, SafariZone_Center_EventScript_RestHouseSign
	bg_sign_event 25, 27, 0, BG_EVENT_PLAYER_FACING_ANY, SafariZone_Center_EventScript_TrainerTips
	bg_hidden_item_event 27, 15, 3, ITEM_LEAF_STONE, FLAG_HIDDEN_ITEM_SAFARI_ZONE_CENTER_LEAF_STONE, 1, FALSE
	bg_sign_event 33, 20, 0, BG_EVENT_PLAYER_FACING_ANY, SafariZone_Center_EventScript_AreaSign

SafariZone_Center_MapEvents::
	map_events SafariZone_Center_ObjectEvents, SafariZone_Center_MapWarps, NULL, SafariZone_Center_MapBGEvents

