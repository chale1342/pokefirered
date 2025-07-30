@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SafariZone_East/map.json
@

	.align 2

SafariZone_East_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_ITEM_BALL, 13, 12, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SafariZone_East_EventScript_ItemMaxPotion, FLAG_HIDE_SAFARI_ZONE_EAST_MAX_POTION
	object_event 2, OBJ_EVENT_GFX_ITEM_BALL, 37, 15, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SafariZone_East_EventScript_ItemFullRestore, FLAG_HIDE_SAFARI_ZONE_EAST_FULL_RESTORE
	object_event 3, OBJ_EVENT_GFX_ITEM_BALL, 31, 18, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SafariZone_East_EventScript_ItemTM11, FLAG_HIDE_SAFARI_ZONE_EAST_TM11
	object_event 4, OBJ_EVENT_GFX_ITEM_BALL, 36, 17, 4, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SafariZone_East_EventScript_ItemLeafStone, FLAG_HIDE_SAFARI_ZONE_EAST_LEAF_STONE

SafariZone_East_MapWarps:
	warp_def 8, 9, 3, 6, MAP_SAFARI_ZONE_NORTH
	warp_def 8, 10, 3, 7, MAP_SAFARI_ZONE_NORTH
	warp_def 8, 11, 0, 8, MAP_SAFARI_ZONE_NORTH
	warp_def 8, 26, 3, 9, MAP_SAFARI_ZONE_CENTER
	warp_def 8, 27, 3, 10, MAP_SAFARI_ZONE_CENTER
	warp_def 8, 28, 0, 11, MAP_SAFARI_ZONE_CENTER
	warp_def 40, 14, 0, 1, MAP_SAFARI_ZONE_EAST_REST_HOUSE

SafariZone_East_MapBGEvents:
	bg_sign_event 18, 27, 0, BG_EVENT_PLAYER_FACING_ANY, SafariZone_East_EventScript_AreaSign
	bg_sign_event 43, 15, 0, BG_EVENT_PLAYER_FACING_ANY, SafariZone_East_EventScript_RestHouseSign
	bg_sign_event 17, 8, 0, BG_EVENT_PLAYER_FACING_ANY, SafariZone_East_EventScript_TrainerTips

SafariZone_East_MapEvents::
	map_events SafariZone_East_ObjectEvents, SafariZone_East_MapWarps, NULL, SafariZone_East_MapBGEvents

