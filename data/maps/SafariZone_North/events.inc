@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SafariZone_North/map.json
@

	.align 2

SafariZone_North_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_ITEM_BALL, 33, 5, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SafariZone_North_EventScript_ItemProtein, FLAG_HIDE_SAFARI_ZONE_NORTH_PROTEIN
	object_event 2, OBJ_EVENT_GFX_ITEM_BALL, 28, 9, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SafariZone_North_EventScript_ItemTM47, FLAG_HIDE_SAFARI_ZONE_NORTH_TM47
	object_event 3, OBJ_EVENT_GFX_ITEM_BALL, 29, 17, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SafariZone_North_EventScript_ItemQuickClaw, FLAG_HIDE_SAFARI_ZONE_NORTH_QUICK_CLAW

SafariZone_North_MapWarps:
	warp_def 10, 34, 3, 0, MAP_SAFARI_ZONE_WEST
	warp_def 11, 34, 3, 1, MAP_SAFARI_ZONE_WEST
	warp_def 12, 34, 0, 2, MAP_SAFARI_ZONE_WEST
	warp_def 20, 34, 3, 3, MAP_SAFARI_ZONE_WEST
	warp_def 21, 34, 3, 4, MAP_SAFARI_ZONE_WEST
	warp_def 22, 34, 0, 5, MAP_SAFARI_ZONE_WEST
	warp_def 48, 31, 3, 0, MAP_SAFARI_ZONE_EAST
	warp_def 48, 32, 3, 1, MAP_SAFARI_ZONE_EAST
	warp_def 48, 33, 0, 2, MAP_SAFARI_ZONE_EAST
	warp_def 30, 34, 3, 3, MAP_SAFARI_ZONE_CENTER
	warp_def 31, 34, 3, 4, MAP_SAFARI_ZONE_CENTER
	warp_def 32, 34, 0, 5, MAP_SAFARI_ZONE_CENTER
	warp_def 43, 8, 0, 1, MAP_SAFARI_ZONE_NORTH_REST_HOUSE

SafariZone_North_MapBGEvents:
	bg_sign_event 13, 27, 0, BG_EVENT_PLAYER_FACING_ANY, SafariZone_North_EventScript_TrainerTips1
	bg_sign_event 23, 31, 0, BG_EVENT_PLAYER_FACING_ANY, SafariZone_North_EventScript_AreaSign
	bg_sign_event 29, 32, 0, BG_EVENT_PLAYER_FACING_ANY, SafariZone_North_EventScript_TrainerTips2
	bg_sign_event 34, 28, 0, BG_EVENT_PLAYER_FACING_ANY, SafariZone_North_EventScript_TrainerTips3
	bg_sign_event 44, 9, 0, BG_EVENT_PLAYER_FACING_ANY, SafariZone_North_EventScript_RestHouseSign

SafariZone_North_MapEvents::
	map_events SafariZone_North_ObjectEvents, SafariZone_North_MapWarps, NULL, SafariZone_North_MapBGEvents

