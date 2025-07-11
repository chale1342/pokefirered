@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/VictoryRoad_1F/map.json
@

	.align 2

VictoryRoad_1F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_COOLTRAINER_M, 5, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 4, VictoryRoad_1F_EventScript_Rolando, 0
	object_event 2, OBJ_EVENT_GFX_COOLTRAINER_F, 14, 6, 4, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 4, VictoryRoad_1F_EventScript_Naomi, 0
	object_event 3, OBJ_EVENT_GFX_ITEM_BALL, 12, 3, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, VictoryRoad_1F_EventScript_ItemRareCandy, FLAG_HIDE_VICTORY_ROAD_1F_RARE_CANDY
	object_event 4, OBJ_EVENT_GFX_ITEM_BALL, 14, 1, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, VictoryRoad_1F_EventScript_ItemTM02, FLAG_HIDE_VICTORY_ROAD_1F_TM02
	object_event 5, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 7, 18, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, 0
	object_event 6, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 4, 12, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, 0
	object_event 7, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 16, 3, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, 0

VictoryRoad_1F_MapWarps:
	warp_def 3, 2, 3, 0, MAP_VICTORY_ROAD_2F
	warp_def 11, 20, 3, 0, MAP_ROUTE23

VictoryRoad_1F_MapCoordEvents:
	coord_event 20, 16, 3, VAR_MAP_SCENE_VICTORY_ROAD_1F, 99, VictoryRoad_1F_EventScript_FloorSwitch

VictoryRoad_1F_MapBGEvents:
	bg_hidden_item_event 12, 12, 0, ITEM_ULTRA_BALL, FLAG_HIDDEN_ITEM_VICTORY_ROAD_1F_ULTRA_BALL, 1, FALSE
	bg_hidden_item_event 16, 1, 0, ITEM_FULL_RESTORE, FLAG_HIDDEN_ITEM_VICTORY_ROAD_1F_FULL_RESTORE, 1, FALSE

VictoryRoad_1F_MapEvents::
	map_events VictoryRoad_1F_ObjectEvents, VictoryRoad_1F_MapWarps, VictoryRoad_1F_MapCoordEvents, VictoryRoad_1F_MapBGEvents

