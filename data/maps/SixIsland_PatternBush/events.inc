@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SixIsland_PatternBush/map.json
@

	.align 2

SixIsland_PatternBush_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_WOMAN_2, 48, 15, 3, MOVEMENT_TYPE_FACE_DOWN_UP_AND_RIGHT, 1, 1, TRAINER_TYPE_NORMAL, 3, SixIsland_PatternBush_EventScript_Bethany, 0
	object_event 2, OBJ_EVENT_GFX_WOMAN_2, 10, 5, 3, MOVEMENT_TYPE_FACE_DOWN_AND_RIGHT, 1, 1, TRAINER_TYPE_NORMAL, 2, SixIsland_PatternBush_EventScript_Allison, 0
	object_event 3, OBJ_EVENT_GFX_BUG_CATCHER, 51, 6, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 2, SixIsland_PatternBush_EventScript_Garret, 0
	object_event 4, OBJ_EVENT_GFX_BUG_CATCHER, 12, 13, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 2, TRAINER_TYPE_NORMAL, 2, SixIsland_PatternBush_EventScript_Jonah, 0
	object_event 5, OBJ_EVENT_GFX_BUG_CATCHER, 37, 23, 3, MOVEMENT_TYPE_WALK_SEQUENCE_LEFT_UP_RIGHT_DOWN, 2, 5, TRAINER_TYPE_NORMAL, 1, SixIsland_PatternBush_EventScript_Vance, 0
	object_event 6, OBJ_EVENT_GFX_YOUNGSTER, 32, 5, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 2, SixIsland_PatternBush_EventScript_Nash, 0
	object_event 7, OBJ_EVENT_GFX_YOUNGSTER, 52, 20, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NORMAL, 4, SixIsland_PatternBush_EventScript_Cordell, 0
	object_event 8, OBJ_EVENT_GFX_LASS, 8, 21, 3, MOVEMENT_TYPE_FACE_DOWN_AND_LEFT, 1, 1, TRAINER_TYPE_NORMAL, 5, SixIsland_PatternBush_EventScript_Dalia, 0
	object_event 9, OBJ_EVENT_GFX_LASS, 39, 6, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NORMAL, 3, SixIsland_PatternBush_EventScript_Joana, 0
	object_event 10, OBJ_EVENT_GFX_CAMPER, 3, 9, 3, MOVEMENT_TYPE_WANDER_UP_AND_DOWN, 1, 2, TRAINER_TYPE_NORMAL, 3, SixIsland_PatternBush_EventScript_Riley, 0
	object_event 11, OBJ_EVENT_GFX_PICNICKER, 19, 24, 3, MOVEMENT_TYPE_WALK_RIGHT_AND_LEFT, 5, 1, TRAINER_TYPE_NORMAL, 1, SixIsland_PatternBush_EventScript_Marcy, 0
	object_event 12, OBJ_EVENT_GFX_HIKER, 30, 19, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NORMAL, 3, SixIsland_PatternBush_EventScript_Layton, 0

SixIsland_PatternBush_MapWarps:
	warp_def 54, 26, 3, 0, MAP_SIX_ISLAND_GREEN_PATH
	warp_def 55, 26, 3, 0, MAP_SIX_ISLAND_GREEN_PATH
	warp_def 56, 26, 3, 1, MAP_SIX_ISLAND_GREEN_PATH
	warp_def 3, 26, 3, 2, MAP_SIX_ISLAND_GREEN_PATH
	warp_def 4, 26, 3, 2, MAP_SIX_ISLAND_GREEN_PATH
	warp_def 5, 26, 3, 3, MAP_SIX_ISLAND_GREEN_PATH

SixIsland_PatternBush_MapEvents::
	map_events SixIsland_PatternBush_ObjectEvents, SixIsland_PatternBush_MapWarps, NULL, NULL

