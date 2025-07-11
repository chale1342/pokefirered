@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/FiveIsland_ResortGorgeous/map.json
@

	.align 2

FiveIsland_ResortGorgeous_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_LASS, 44, 10, 3, MOVEMENT_TYPE_FACE_DOWN_AND_RIGHT, 1, 1, TRAINER_TYPE_NORMAL, 3, FiveIsland_ResortGorgeous_EventScript_Daisy, 0
	object_event 2, OBJ_EVENT_GFX_LASS, 33, 12, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NORMAL, 4, FiveIsland_ResortGorgeous_EventScript_Celina, 0
	object_event 3, OBJ_EVENT_GFX_LASS, 12, 10, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 1, FiveIsland_ResortGorgeous_EventScript_Rayna, 0
	object_event 4, OBJ_EVENT_GFX_WOMAN_2, 23, 9, 3, MOVEMENT_TYPE_WANDER_AROUND, 2, 1, TRAINER_TYPE_NORMAL, 1, FiveIsland_ResortGorgeous_EventScript_Jacki, 0
	object_event 5, OBJ_EVENT_GFX_WOMAN_2, 33, 8, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 1, FiveIsland_ResortGorgeous_EventScript_Gillian, 0
	object_event 6, OBJ_EVENT_GFX_YOUNGSTER, 33, 3, 3, MOVEMENT_TYPE_WALK_SEQUENCE_DOWN_RIGHT_UP_LEFT, 10, 1, TRAINER_TYPE_NORMAL, 1, FiveIsland_ResortGorgeous_EventScript_Destin, 0
	object_event 7, OBJ_EVENT_GFX_SWIMMER_M_WATER, 56, 7, 1, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NORMAL, 1, FiveIsland_ResortGorgeous_EventScript_Toby, 0
	object_event 8, OBJ_EVENT_GFX_WOMAN_2, 39, 9, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, 0x0, FLAG_HIDE_RESORT_GORGEOUS_SELPHY

FiveIsland_ResortGorgeous_MapWarps:
	warp_def 64, 13, 3, 0, MAP_FIVE_ISLAND_LOST_CAVE_ENTRANCE
	warp_def 39, 8, 0, 0, MAP_FIVE_ISLAND_RESORT_GORGEOUS_HOUSE

FiveIsland_ResortGorgeous_MapBGEvents:
	bg_hidden_item_event 10, 7, 3, ITEM_NEST_BALL, FLAG_HIDDEN_ITEM_FIVE_ISLAND_RESORT_GORGEOUS_NEST_BALL, 1, FALSE
	bg_hidden_item_event 27, 11, 3, ITEM_STARDUST, FLAG_HIDDEN_ITEM_FIVE_ISLAND_RESORT_GORGEOUS_STARDUST, 1, FALSE
	bg_hidden_item_event 40, 12, 3, ITEM_STAR_PIECE, FLAG_HIDDEN_ITEM_FIVE_ISLAND_RESORT_GORGEOUS_STAR_PIECE, 1, FALSE
	bg_hidden_item_event 27, 5, 3, ITEM_STARDUST, FLAG_HIDDEN_ITEM_FIVE_ISLAND_RESORT_GORGEOUS_STARDUST_2, 1, FALSE
	bg_sign_event 42, 9, 0, BG_EVENT_PLAYER_FACING_ANY, FiveIsland_ResortGorgeous_EventScript_SelphysHouseSign

FiveIsland_ResortGorgeous_MapEvents::
	map_events FiveIsland_ResortGorgeous_ObjectEvents, FiveIsland_ResortGorgeous_MapWarps, NULL, FiveIsland_ResortGorgeous_MapBGEvents

