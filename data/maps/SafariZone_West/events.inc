@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SafariZone_West/map.json
@

	.align 2

SafariZone_West_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_ITEM_BALL, 28, 14, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SafariZone_West_EventScript_ItemGoldTeeth, FLAG_HIDE_SAFARI_ZONE_WEST_GOLD_TEETH
	object_event 2, OBJ_EVENT_GFX_ITEM_BALL, 17, 13, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SafariZone_West_EventScript_ItemTM32, FLAG_HIDE_SAFARI_ZONE_WEST_TM32
	object_event 3, OBJ_EVENT_GFX_ITEM_BALL, 16, 27, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SafariZone_West_EventScript_ItemMaxPotion, FLAG_HIDE_SAFARI_ZONE_WEST_MAX_POTION
	object_event 4, OBJ_EVENT_GFX_ITEM_BALL, 27, 24, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SafariZone_West_EventScript_ItemMaxRevive, FLAG_HIDE_SAFARI_ZONE_WEST_MAX_REVIVE

SafariZone_West_MapWarps:
	warp_def 30, 5, 3, 0, MAP_SAFARI_ZONE_NORTH
	warp_def 31, 5, 3, 1, MAP_SAFARI_ZONE_NORTH
	warp_def 32, 5, 0, 2, MAP_SAFARI_ZONE_NORTH
	warp_def 37, 5, 3, 3, MAP_SAFARI_ZONE_NORTH
	warp_def 38, 5, 3, 4, MAP_SAFARI_ZONE_NORTH
	warp_def 39, 5, 0, 5, MAP_SAFARI_ZONE_NORTH
	warp_def 40, 26, 3, 6, MAP_SAFARI_ZONE_CENTER
	warp_def 40, 27, 3, 7, MAP_SAFARI_ZONE_CENTER
	warp_def 40, 28, 0, 8, MAP_SAFARI_ZONE_CENTER
	warp_def 12, 7, 0, 1, MAP_SAFARI_ZONE_SECRET_HOUSE
	warp_def 19, 18, 0, 1, MAP_SAFARI_ZONE_WEST_REST_HOUSE

SafariZone_West_MapBGEvents:
	bg_sign_event 27, 9, 0, BG_EVENT_PLAYER_FACING_ANY, SafariZone_West_EventScript_LostTeethNotice
	bg_sign_event 36, 10, 0, BG_EVENT_PLAYER_FACING_ANY, SafariZone_West_EventScript_TrainerTips
	bg_sign_event 35, 26, 0, BG_EVENT_PLAYER_FACING_ANY, SafariZone_West_EventScript_AreaSign
	bg_sign_event 22, 19, 0, BG_EVENT_PLAYER_FACING_ANY, SafariZone_West_EventScript_RestHouseSign
	bg_hidden_item_event 13, 11, 3, ITEM_REVIVE, FLAG_HIDDEN_ITEM_SAFARI_ZONE_WEST_REVIVE, 1, FALSE

SafariZone_West_MapEvents::
	map_events SafariZone_West_ObjectEvents, SafariZone_West_MapWarps, NULL, SafariZone_West_MapBGEvents

