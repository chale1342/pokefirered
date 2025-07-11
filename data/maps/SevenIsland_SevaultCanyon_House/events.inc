@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SevenIsland_SevaultCanyon_House/map.json
@

	.align 2

SevenIsland_SevaultCanyon_House_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_BALDING_MAN, 2, 4, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SevenIsland_SevaultCanyon_House_EventScript_ChanseyDanceMan, 0
	object_event 2, OBJ_EVENT_GFX_CHANSEY, 4, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SevenIsland_SevaultCanyon_House_EventScript_Chansey, 0
	object_event 3, OBJ_EVENT_GFX_ITEM_BALL, 6, 4, 0, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SevenIsland_SevaultCanyon_House_EventScript_ItemLuckyPunch, FLAG_HIDE_SEVEN_ISLAND_SEVAULT_CANYON_HOUSE_LUCKY_PUNCH

SevenIsland_SevaultCanyon_House_MapWarps:
	warp_def 4, 7, 3, 1, MAP_SEVEN_ISLAND_SEVAULT_CANYON

SevenIsland_SevaultCanyon_House_MapEvents::
	map_events SevenIsland_SevaultCanyon_House_ObjectEvents, SevenIsland_SevaultCanyon_House_MapWarps, NULL, NULL

