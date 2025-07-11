@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/VictoryRoad_3F/map.json
@

	.align 2

VictoryRoad_3F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_COOLTRAINER_M, 40, 7, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NORMAL, 1, VictoryRoad_3F_EventScript_George, 0
	object_event 2, OBJ_EVENT_GFX_COOLTRAINER_F, 21, 5, 4, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NORMAL, 4, VictoryRoad_3F_EventScript_Alexa, 0
	object_event 3, OBJ_EVENT_GFX_COOLTRAINER_M, 10, 17, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NORMAL, 5, VictoryRoad_3F_EventScript_Colby, 0
	object_event 4, OBJ_EVENT_GFX_COOLTRAINER_F, 11, 16, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NORMAL, 5, VictoryRoad_3F_EventScript_Caroline, 0
	object_event 5, OBJ_EVENT_GFX_ITEM_BALL, 38, 7, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, VictoryRoad_3F_EventScript_ItemMaxRevive, FLAG_HIDE_VICTORY_ROAD_3F_MAX_REVIVE
	object_event 6, OBJ_EVENT_GFX_ITEM_BALL, 12, 9, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, VictoryRoad_3F_EventScript_ItemTM50, FLAG_HIDE_VICTORY_ROAD_3F_TM50
	object_event 7, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 19, 15, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, 0
	object_event 8, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 33, 18, 0, MOVEMENT_TYPE_FACE_DOWN, 0, 0, FLAG_HIDE_VICTORY_ROAD_2F_BOULDER, 0, EventScript_StrengthBoulder, FLAG_HIDE_VICTORY_ROAD_3F_BOULDER
	object_event 9, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 35, 13, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, 0
	object_event 10, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 32, 5, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, 0
	object_event 11, OBJ_EVENT_GFX_COOLTRAINER_M, 38, 13, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 1, VictoryRoad_3F_EventScript_Ray, 0
	object_event 12, OBJ_EVENT_GFX_COOLTRAINER_F, 39, 13, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 1, VictoryRoad_3F_EventScript_Tyra, 0

VictoryRoad_3F_MapWarps:
	warp_def 5, 2, 3, 1, MAP_VICTORY_ROAD_2F
	warp_def 34, 9, 3, 2, MAP_VICTORY_ROAD_2F
	warp_def 37, 10, 3, 3, MAP_VICTORY_ROAD_2F
	warp_def 39, 17, 3, 4, MAP_VICTORY_ROAD_2F
	warp_def 34, 18, 3, 8, MAP_VICTORY_ROAD_2F

VictoryRoad_3F_MapCoordEvents:
	coord_event 7, 7, 3, VAR_MAP_SCENE_VICTORY_ROAD_3F, 99, VictoryRoad_3F_EventScript_FloorSwitch

VictoryRoad_3F_MapEvents::
	map_events VictoryRoad_3F_ObjectEvents, VictoryRoad_3F_MapWarps, VictoryRoad_3F_MapCoordEvents, NULL

