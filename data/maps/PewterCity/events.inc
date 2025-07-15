@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/PewterCity/map.json
@

	.align 2

PewterCity_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_LASS, 6, 15, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, PewterCity_EventScript_Lass, 0
	object_event 2, OBJ_EVENT_GFX_MAN, 33, 17, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, PewterCity_EventScript_MuseumGuide, FLAG_HIDE_PEWTER_MUSEUM_GUIDE
	object_event 3, OBJ_EVENT_GFX_FAT_MAN, 21, 28, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, PewterCity_EventScript_FatMan, 0
	object_event 4, OBJ_EVENT_GFX_BUG_CATCHER, 33, 27, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 2, 1, TRAINER_TYPE_NONE, 0, PewterCity_EventScript_BugCatcher, 0
	object_event 5, OBJ_EVENT_GFX_BOY, 42, 20, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, PewterCity_EventScript_GymGuide, FLAG_HIDE_PEWTER_CITY_GYM_GUIDE
	object_event 6, OBJ_EVENT_GFX_CUT_TREE, 30, 5, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, EventScript_CutTree, FLAG_CUT_TREE_PEWTER_CITY_1
	object_event 7, OBJ_EVENT_GFX_SCIENTIST, 46, 20, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, PewterCity_EventScript_RunningShoesAide, FLAG_HIDE_PEWTER_CITY_RUNNING_SHOES_GUY

PewterCity_MapWarps:
	warp_def 17, 6, 0, 1, MAP_PEWTER_CITY_MUSEUM_1F
	warp_def 25, 4, 0, 3, MAP_PEWTER_CITY_MUSEUM_1F
	warp_def 15, 16, 0, 1, MAP_PEWTER_CITY_GYM
	warp_def 28, 18, 0, 1, MAP_PEWTER_CITY_MART
	warp_def 33, 11, 0, 1, MAP_PEWTER_CITY_HOUSE1
	warp_def 17, 25, 0, 1, MAP_PEWTER_CITY_POKEMON_CENTER_1F
	warp_def 9, 30, 0, 1, MAP_PEWTER_CITY_HOUSE2

PewterCity_MapCoordEvents:
	coord_event 42, 21, 3, VAR_MAP_SCENE_PEWTER_CITY, 0, PewterCity_EventScript_GymGuideTriggerTop
	coord_event 42, 22, 3, VAR_MAP_SCENE_PEWTER_CITY, 0, PewterCity_EventScript_GymGuideTriggerMid
	coord_event 42, 23, 3, VAR_MAP_SCENE_PEWTER_CITY, 0, PewterCity_EventScript_GymGuideTriggerBottom
	coord_event 43, 23, 3, VAR_MAP_SCENE_PEWTER_CITY, 0, PewterCity_EventScript_GymGuideTriggerRight
	coord_event 46, 21, 3, VAR_MAP_SCENE_PEWTER_CITY, 1, PewterCity_EventScript_RunningShoesAideTriggerTop
	coord_event 46, 22, 3, VAR_MAP_SCENE_PEWTER_CITY, 1, PewterCity_EventScript_RunningShoesAideTriggerMid
	coord_event 46, 23, 3, VAR_MAP_SCENE_PEWTER_CITY, 1, PewterCity_EventScript_RunningShoesAideTriggerBottom

PewterCity_MapBGEvents:
	bg_sign_event 19, 7, 0, BG_EVENT_PLAYER_FACING_ANY, PewterCity_EventScript_MuseumSign
	bg_sign_event 39, 19, 0, BG_EVENT_PLAYER_FACING_ANY, PewterCity_EventScript_PoliceNotice
	bg_sign_event 11, 16, 0, BG_EVENT_PLAYER_FACING_ANY, PewterCity_EventScript_GymSign
	bg_sign_event 20, 30, 0, BG_EVENT_PLAYER_FACING_ANY, PewterCity_EventScript_TrainerTips
	bg_sign_event 31, 25, 0, BG_EVENT_PLAYER_FACING_ANY, PewterCity_EventScript_CitySign
	bg_hidden_item_event 6, 3, 3, ITEM_POKE_BALL, FLAG_HIDDEN_ITEM_PEWTER_CITY_POKE_BALL, 1, FALSE

PewterCity_MapEvents::
	map_events PewterCity_ObjectEvents, PewterCity_MapWarps, PewterCity_MapCoordEvents, PewterCity_MapBGEvents

