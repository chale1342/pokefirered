@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/ThreeIsland/map.json
@

	.align 2

ThreeIsland_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_MAN, 7, 24, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, ThreeIsland_EventScript_AntiBiker1, FLAG_HIDE_THREE_ISLAND_ANTIBIKERS
	object_event 2, OBJ_EVENT_GFX_MAN, 8, 23, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, ThreeIsland_EventScript_AntiBiker2, FLAG_HIDE_THREE_ISLAND_ANTIBIKERS
	object_event 3, OBJ_EVENT_GFX_BIKER, 8, 24, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, ThreeIsland_EventScript_Biker, FLAG_HIDE_THREE_ISLAND_LONE_BIKER
	object_event 4, OBJ_EVENT_GFX_BIKER, 9, 23, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, ThreeIsland_EventScript_Biker, FLAG_HIDE_THREE_ISLAND_BIKERS
	object_event 5, OBJ_EVENT_GFX_BIKER, 9, 24, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, ThreeIsland_EventScript_Biker, FLAG_HIDE_THREE_ISLAND_BIKERS
	object_event 6, OBJ_EVENT_GFX_BIKER, 10, 22, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, ThreeIsland_EventScript_Biker, FLAG_HIDE_THREE_ISLAND_BIKERS
	object_event 7, OBJ_EVENT_GFX_BIKER, 10, 24, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, ThreeIsland_EventScript_Biker, FLAG_HIDE_THREE_ISLAND_BIKERS
	object_event 8, OBJ_EVENT_GFX_BIKER, 11, 23, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, ThreeIsland_EventScript_Biker, FLAG_HIDE_THREE_ISLAND_BIKERS
	object_event 9, OBJ_EVENT_GFX_CUT_TREE, 20, 7, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, EventScript_CutTree, FLAG_TEMP_12
	object_event 10, OBJ_EVENT_GFX_ITEM_BALL, 18, 17, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, ThreeIsland_EventScript_ItemZinc, FLAG_HIDE_THREE_ISLAND_ZINC
	object_event 11, OBJ_EVENT_GFX_WOMAN_1, 15, 7, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, ThreeIsland_EventScript_Woman, 0
	object_event 12, OBJ_EVENT_GFX_LITTLE_BOY, 14, 14, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, ThreeIsland_EventScript_LittleBoy, 0
	object_event 13, OBJ_EVENT_GFX_DODUO, 15, 14, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, ThreeIsland_EventScript_Doduo, 0
	object_event 14, OBJ_EVENT_GFX_BIKER, 15, 31, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, ThreeIsland_EventScript_Biker6, FLAG_HIDE_THREE_ISLAND_BIKERS

ThreeIsland_MapWarps:
	warp_def 3, 31, 0, 0, MAP_THREE_ISLAND_HOUSE1
	warp_def 14, 27, 0, 0, MAP_THREE_ISLAND_POKEMON_CENTER_1F
	warp_def 18, 12, 0, 0, MAP_THREE_ISLAND_MART
	warp_def 4, 6, 0, 0, MAP_THREE_ISLAND_HOUSE2
	warp_def 12, 6, 0, 0, MAP_THREE_ISLAND_HOUSE3
	warp_def 12, 12, 0, 0, MAP_THREE_ISLAND_HOUSE4
	warp_def 13, 19, 0, 0, MAP_THREE_ISLAND_HOUSE5

ThreeIsland_MapCoordEvents:
	coord_event 7, 27, 3, VAR_MAP_SCENE_THREE_ISLAND, 2, ThreeIsland_EventScript_BikerBossIntroTrigger
	coord_event 8, 27, 3, VAR_MAP_SCENE_THREE_ISLAND, 2, ThreeIsland_EventScript_BikerBossIntroTrigger
	coord_event 9, 27, 3, VAR_MAP_SCENE_THREE_ISLAND, 2, ThreeIsland_EventScript_BikerBossIntroTrigger
	coord_event 10, 27, 3, VAR_MAP_SCENE_THREE_ISLAND, 2, ThreeIsland_EventScript_BikerBossIntroTrigger
	coord_event 7, 26, 3, VAR_MAP_SCENE_THREE_ISLAND, 3, ThreeIsland_EventScript_BattleBikersTriggerLeft
	coord_event 8, 26, 3, VAR_MAP_SCENE_THREE_ISLAND, 3, ThreeIsland_EventScript_BattleBikersTriggerMidLeft
	coord_event 9, 26, 3, VAR_MAP_SCENE_THREE_ISLAND, 3, ThreeIsland_EventScript_BattleBikersTriggerMid
	coord_event 11, 27, 3, VAR_MAP_SCENE_THREE_ISLAND, 2, ThreeIsland_EventScript_BikerBossIntroTrigger
	coord_event 10, 26, 3, VAR_MAP_SCENE_THREE_ISLAND, 3, ThreeIsland_EventScript_BattleBikersTriggerMidRight
	coord_event 11, 26, 3, VAR_MAP_SCENE_THREE_ISLAND, 3, ThreeIsland_EventScript_BattleBikersTriggerRight

ThreeIsland_MapBGEvents:
	bg_sign_event 12, 31, 0, BG_EVENT_PLAYER_FACING_ANY, ThreeIsland_EventScript_IslandSign
	bg_hidden_item_event 5, 13, 3, ITEM_PP_UP, FLAG_HIDDEN_ITEM_THREE_ISLAND_PP_UP, 1, FALSE

ThreeIsland_MapEvents::
	map_events ThreeIsland_ObjectEvents, ThreeIsland_MapWarps, ThreeIsland_MapCoordEvents, ThreeIsland_MapBGEvents

