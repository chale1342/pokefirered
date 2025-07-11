@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SevenIsland_TanobyRuins/map.json
@

	.align 2

SevenIsland_TanobyRuins_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_HIKER, 35, 7, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NORMAL, 1, SevenIsland_TanobyRuins_EventScript_Brandon, 0
	object_event 2, OBJ_EVENT_GFX_HIKER, 121, 11, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NORMAL, 1, SevenIsland_TanobyRuins_EventScript_Benjamin, 0
	object_event 3, OBJ_EVENT_GFX_LASS, 85, 8, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NORMAL, 1, SevenIsland_TanobyRuins_EventScript_Edna, 0
	object_event 4, OBJ_EVENT_GFX_GENTLEMAN, 85, 5, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NORMAL, 1, SevenIsland_TanobyRuins_EventScript_Clifford, 0

SevenIsland_TanobyRuins_MapWarps:
	warp_def 120, 10, 3, 0, MAP_SEVEN_ISLAND_TANOBY_RUINS_MONEAN_CHAMBER
	warp_def 103, 10, 3, 0, MAP_SEVEN_ISLAND_TANOBY_RUINS_LIPTOO_CHAMBER
	warp_def 88, 8, 3, 0, MAP_SEVEN_ISLAND_TANOBY_RUINS_WEEPTH_CHAMBER
	warp_def 44, 11, 3, 0, MAP_SEVEN_ISLAND_TANOBY_RUINS_DILFORD_CHAMBER
	warp_def 32, 9, 3, 0, MAP_SEVEN_ISLAND_TANOBY_RUINS_SCUFIB_CHAMBER
	warp_def 12, 15, 3, 0, MAP_SEVEN_ISLAND_TANOBY_RUINS_RIXY_CHAMBER
	warp_def 11, 6, 3, 0, MAP_SEVEN_ISLAND_TANOBY_RUINS_VIAPOIS_CHAMBER

SevenIsland_TanobyRuins_MapBGEvents:
	bg_hidden_item_event 33, 10, 3, ITEM_HEART_SCALE, FLAG_HIDDEN_ITEM_SEVEN_ISLAND_TANOBY_RUINS_HEART_SCALE, 1, FALSE
	bg_hidden_item_event 86, 9, 3, ITEM_HEART_SCALE, FLAG_HIDDEN_ITEM_SEVEN_ISLAND_TANOBY_RUINS_HEART_SCALE_2, 1, FALSE
	bg_hidden_item_event 125, 5, 3, ITEM_HEART_SCALE, FLAG_HIDDEN_ITEM_SEVEN_ISLAND_TANOBY_RUINS_HEART_SCALE_3, 1, FALSE
	bg_hidden_item_event 8, 2, 3, ITEM_HEART_SCALE, FLAG_HIDDEN_ITEM_SEVEN_ISLAND_TANOBY_RUINS_HEART_SCALE_4, 1, FALSE

SevenIsland_TanobyRuins_MapEvents::
	map_events SevenIsland_TanobyRuins_ObjectEvents, SevenIsland_TanobyRuins_MapWarps, NULL, SevenIsland_TanobyRuins_MapBGEvents

