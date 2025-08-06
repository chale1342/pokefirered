@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/CeladonCity_Gym/map.json
@

	.align 2

CeladonCity_Gym_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_LASS, 3, 11, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NORMAL, 3, CeladonCity_Gym_EventScript_Kay, 0
	object_event 2, OBJ_EVENT_GFX_BEAUTY, 9, 10, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NORMAL, 3, CeladonCity_Gym_EventScript_Bridget, 0
	object_event 3, OBJ_EVENT_GFX_PICNICKER, 10, 7, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 2, CeladonCity_Gym_EventScript_Tina, 0
	object_event 4, OBJ_EVENT_GFX_BEAUTY, 2, 6, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 4, CeladonCity_Gym_EventScript_Tamia, 0
	object_event 5, OBJ_EVENT_GFX_BEAUTY, 5, 4, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 3, CeladonCity_Gym_EventScript_Lori, 0
	object_event 6, OBJ_EVENT_GFX_LASS, 7, 4, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 2, CeladonCity_Gym_EventScript_Lisa, 0
	object_event 7, OBJ_EVENT_GFX_ERIKA, 6, 4, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, CeladonCity_Gym_EventScript_Erika, 0
	object_event 8, OBJ_EVENT_GFX_COOLTRAINER_F, 8, 7, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NORMAL, 2, CeladonCity_Gym_EventScript_Mary, 0
	object_event 9, OBJ_EVENT_GFX_CUT_TREE, 6, 8, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, EventScript_CutTree, FLAG_TEMP_12
	object_event 10, OBJ_EVENT_GFX_CUT_TREE, 3, 5, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, EventScript_CutTree, FLAG_TEMP_13
	object_event 11, OBJ_EVENT_GFX_CUT_TREE, 9, 6, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, EventScript_CutTree, FLAG_TEMP_14

CeladonCity_Gym_MapWarps:
	warp_def 5, 18, 3, 6, MAP_CELADON_CITY
	warp_def 6, 18, 3, 6, MAP_CELADON_CITY
	warp_def 7, 18, 3, 6, MAP_CELADON_CITY

CeladonCity_Gym_MapBGEvents:
	bg_sign_event 4, 16, 0, BG_EVENT_PLAYER_FACING_ANY, CeladonCity_Gym_EventScript_GymStatue
	bg_sign_event 8, 16, 0, BG_EVENT_PLAYER_FACING_ANY, CeladonCity_Gym_EventScript_GymStatue

CeladonCity_Gym_MapEvents::
	map_events CeladonCity_Gym_ObjectEvents, CeladonCity_Gym_MapWarps, NULL, CeladonCity_Gym_MapBGEvents

