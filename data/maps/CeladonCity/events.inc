@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/CeladonCity/map.json
@

	.align 2

CeladonCity_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_ROCKET_M, 48, 15, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 4, 1, TRAINER_TYPE_NONE, 0, CeladonCity_EventScript_RocketGrunt1, FLAG_HIDE_CELADON_ROCKETS
	object_event 2, OBJ_EVENT_GFX_FAT_MAN, 38, 14, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, CeladonCity_EventScript_FatMan, 0
	object_event 3, OBJ_EVENT_GFX_POLIWRATH, 36, 14, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, CeladonCity_EventScript_Poliwrath, 0
	object_event 4, OBJ_EVENT_GFX_LITTLE_GIRL, 11, 18, 3, MOVEMENT_TYPE_WALK_SEQUENCE_RIGHT_DOWN_LEFT_UP, 4, 4, TRAINER_TYPE_NONE, 0, CeladonCity_EventScript_LittleGirl, 0
	object_event 5, OBJ_EVENT_GFX_WOMAN_2, 18, 22, 3, MOVEMENT_TYPE_WANDER_AROUND, 2, 5, TRAINER_TYPE_NONE, 0, CeladonCity_EventScript_Woman, 0
	object_event 6, OBJ_EVENT_GFX_OLD_MAN_1, 30, 24, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, CeladonCity_EventScript_OldMan2, 0
	object_event 7, OBJ_EVENT_GFX_OLD_MAN_2, 26, 19, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, CeladonCity_EventScript_SoftboiledTutor, 0
	object_event 8, OBJ_EVENT_GFX_ROCKET_M, 38, 31, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 5, 1, TRAINER_TYPE_NONE, 0, CeladonCity_EventScript_RocketGrunt2, FLAG_HIDE_CELADON_ROCKETS
	object_event 9, OBJ_EVENT_GFX_OLD_MAN_1, 9, 30, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NONE, 0, CeladonCity_EventScript_OldMan1, 0
	object_event 10, OBJ_EVENT_GFX_CUT_TREE, 52, 22, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, EventScript_CutTree, FLAG_TEMP_14
	object_event 11, OBJ_EVENT_GFX_CUT_TREE, 40, 35, 0, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, EventScript_CutTree, FLAG_TEMP_13
	object_event 12, OBJ_EVENT_GFX_BOY, 25, 10, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NONE, 0, CeladonCity_EventScript_Boy, 0
	clone_event 13, OBJ_EVENT_GFX_CUT_TREE, -7, 21, LOCALID_ROUTE16_CUT_TREE, MAP_ROUTE16
	object_event 14, OBJ_EVENT_GFX_ITEM_BALL, 5, 3, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, CeladonCity_EventScript_ItemEther, FLAG_HIDE_CELADON_CITY_ETHER
	object_event 15, OBJ_EVENT_GFX_SCIENTIST, 47, 24, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, CeladonCity_EventScript_SilphCoScientist, FLAG_HIDE_CELADON_ROCKETS

CeladonCity_MapWarps:
	warp_def 34, 21, 0, 0, MAP_CELADON_CITY_GAME_CORNER
	warp_def 11, 14, 0, 1, MAP_CELADON_CITY_DEPARTMENT_STORE_1F
	warp_def 15, 14, 0, 4, MAP_CELADON_CITY_DEPARTMENT_STORE_1F
	warp_def 30, 11, 0, 1, MAP_CELADON_CITY_CONDOMINIUMS_1F
	warp_def 48, 11, 0, 1, MAP_CELADON_CITY_POKEMON_CENTER_1F
	warp_def 39, 20, 0, 1, MAP_CELADON_CITY_GAME_CORNER_PRIZE_ROOM
	warp_def 11, 30, 0, 1, MAP_CELADON_CITY_GYM
	warp_def 37, 29, 0, 1, MAP_CELADON_CITY_RESTAURANT
	warp_def 41, 29, 0, 1, MAP_CELADON_CITY_HOUSE1
	warp_def 49, 29, 0, 1, MAP_CELADON_CITY_HOTEL
	warp_def 29, 5, 0, 5, MAP_CELADON_CITY_CONDOMINIUMS_1F
	warp_def 30, 4, 3, 5, MAP_CELADON_CITY_CONDOMINIUMS_1F
	warp_def 31, 5, 0, 5, MAP_CELADON_CITY_CONDOMINIUMS_1F

CeladonCity_MapBGEvents:
	bg_sign_event 45, 23, 0, BG_EVENT_PLAYER_FACING_ANY, CeladonCity_EventScript_TrainerTips2
	bg_sign_event 38, 23, 0, BG_EVENT_PLAYER_FACING_ANY, CeladonCity_EventScript_PrizeExchangeSign
	bg_sign_event 33, 23, 0, BG_EVENT_PLAYER_FACING_ANY, CeladonCity_EventScript_GameCornerSign
	bg_sign_event 22, 18, 3, BG_EVENT_PLAYER_FACING_ANY, CeladonCity_EventScript_CitySign
	bg_sign_event 26, 11, 0, BG_EVENT_PLAYER_FACING_ANY, CeladonCity_EventScript_MansionSign
	bg_sign_event 33, 16, 0, BG_EVENT_PLAYER_FACING_ANY, CeladonCity_EventScript_TrainerTips1
	bg_sign_event 18, 14, 3, BG_EVENT_PLAYER_FACING_ANY, CeladonCity_EventScript_DeptStoreSign
	bg_sign_event 16, 31, 0, BG_EVENT_PLAYER_FACING_ANY, CeladonCity_EventScript_GymSign
	bg_hidden_item_event 55, 20, 3, ITEM_PP_UP, FLAG_HIDDEN_ITEM_CELADON_CITY_PP_UP, 1, FALSE

CeladonCity_MapEvents::
	map_events CeladonCity_ObjectEvents, CeladonCity_MapWarps, NULL, CeladonCity_MapBGEvents

