@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/VictoryRoad_2F/map.json
@

	.align 2

VictoryRoad_2F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_SUPER_NERD, 7, 4, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 1, VictoryRoad_2F_EventScript_Dawson, 0
	object_event 2, OBJ_EVENT_GFX_BLACKBELT, 20, 11, 4, MOVEMENT_TYPE_FACE_DOWN_AND_LEFT, 1, 1, TRAINER_TYPE_NORMAL, 4, VictoryRoad_2F_EventScript_Daisuke, 0
	object_event 3, OBJ_EVENT_GFX_ROCKER, 31, 16, 4, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NORMAL, 4, VictoryRoad_2F_EventScript_Nelson, 0
	object_event 4, OBJ_EVENT_GFX_MAN, 26, 6, 3, MOVEMENT_TYPE_WALK_SEQUENCE_DOWN_RIGHT_LEFT_UP, 4, 4, TRAINER_TYPE_NORMAL, 1, VictoryRoad_2F_EventScript_Vincent, 0
	object_event 5, OBJ_EVENT_GFX_ROCKER, 36, 5, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NORMAL, 3, VictoryRoad_2F_EventScript_Gregory, 0
	object_event 6, OBJ_EVENT_GFX_ITEM_BALL, 17, 6, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, VictoryRoad_2F_EventScript_ItemGuardSpec, FLAG_HIDE_VICTORY_ROAD_2F_GUARD_SPEC
	object_event 7, OBJ_EVENT_GFX_ITEM_BALL, 40, 7, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, VictoryRoad_2F_EventScript_ItemTM07, FLAG_HIDE_VICTORY_ROAD_2F_TM07
	object_event 8, OBJ_EVENT_GFX_ITEM_BALL, 25, 13, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, VictoryRoad_2F_EventScript_ItemFullHeal, FLAG_HIDE_VICTORY_ROAD_2F_FULL_HEAL
	object_event 9, OBJ_EVENT_GFX_ITEM_BALL, 14, 13, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, VictoryRoad_2F_EventScript_ItemTM37, FLAG_HIDE_VICTORY_ROAD_2F_TM37
	object_event 10, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 8, 7, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, 0
	object_event 11, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 6, 17, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, 0
	object_event 12, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 33, 19, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, FLAG_HIDE_VICTORY_ROAD_2F_BOULDER
	object_event 13, OBJ_EVENT_GFX_COOLTRAINER_M, 40, 9, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, VictoryRoad_2F_EventScript_DoubleEdgeTutor, 0

VictoryRoad_2F_MapWarps:
	warp_def 1, 9, 3, 0, MAP_VICTORY_ROAD_1F
	warp_def 3, 3, 3, 0, MAP_VICTORY_ROAD_3F
	warp_def 34, 9, 3, 1, MAP_VICTORY_ROAD_3F
	warp_def 38, 9, 3, 2, MAP_VICTORY_ROAD_3F
	warp_def 36, 17, 4, 3, MAP_VICTORY_ROAD_3F
	warp_def 49, 13, 0, 1, MAP_ROUTE23
	warp_def 48, 12, 3, 1, MAP_ROUTE23
	warp_def 47, 13, 0, 1, MAP_ROUTE23
	warp_def 34, 19, 3, 4, MAP_VICTORY_ROAD_3F

VictoryRoad_2F_MapCoordEvents:
	coord_event 2, 19, 3, VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER1, 99, VictoryRoad_2F_EventScript_FloorSwitch1
	coord_event 14, 19, 3, VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER2, 99, VictoryRoad_2F_EventScript_FloorSwitch2

VictoryRoad_2F_MapEvents::
	map_events VictoryRoad_2F_ObjectEvents, VictoryRoad_2F_MapWarps, VictoryRoad_2F_MapCoordEvents, NULL

