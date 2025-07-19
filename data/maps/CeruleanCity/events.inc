@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/CeruleanCity/map.json
@

	.align 2

CeruleanCity_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_POLICEMAN, 31, 12, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, CeruleanCity_EventScript_Policeman, 0
	object_event 2, OBJ_EVENT_GFX_ROCKET_M, 33, 6, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, CeruleanCity_EventScript_Grunt, FLAG_HIDE_CERULEAN_ROCKET
	object_event 3, OBJ_EVENT_GFX_LITTLE_BOY, 16, 21, 3, MOVEMENT_TYPE_WANDER_UP_AND_DOWN, 1, 3, TRAINER_TYPE_NONE, 0, CeruleanCity_EventScript_LittleBoy, 0
	object_event 4, OBJ_EVENT_GFX_BALDING_MAN, 9, 23, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, CeruleanCity_EventScript_BaldingMan, 0
	object_event 5, OBJ_EVENT_GFX_SLOWBRO, 32, 29, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, CeruleanCity_EventScript_Slowbro, 0
	object_event 6, OBJ_EVENT_GFX_LASS, 33, 29, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, CeruleanCity_EventScript_Lass, 0
	object_event 7, OBJ_EVENT_GFX_YOUNGSTER, 34, 22, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, CeruleanCity_EventScript_Youngster, 0
	object_event 8, OBJ_EVENT_GFX_BLUE, 22, 0, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, 0x0, FLAG_HIDE_CERULEAN_RIVAL
	object_event 9, OBJ_EVENT_GFX_CUT_TREE, 26, 32, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, EventScript_CutTree, FLAG_TEMP_13
	clone_event 10, OBJ_EVENT_GFX_CUT_TREE, 50, 18, LOCALID_ROUTE9_CUT_TREE, MAP_ROUTE9
	object_event 11, OBJ_EVENT_GFX_WOMAN_1, 12, 30, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NONE, 0, CeruleanCity_EventScript_Woman, 0
	object_event 12, OBJ_EVENT_GFX_COOLTRAINER_M, 1, 13, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, CeruleanCity_EventScript_CeruleanCaveGuard, FLAG_HIDE_CERULEAN_CAVE_GUARD

CeruleanCity_MapWarps:
	warp_def 10, 11, 0, 1, MAP_CERULEAN_CITY_HOUSE1
	warp_def 30, 11, 0, 1, MAP_CERULEAN_CITY_HOUSE2
	warp_def 15, 17, 0, 1, MAP_CERULEAN_CITY_HOUSE3
	warp_def 22, 19, 0, 1, MAP_CERULEAN_CITY_POKEMON_CENTER_1F
	warp_def 31, 21, 0, 1, MAP_CERULEAN_CITY_GYM
	warp_def 13, 28, 3, 1, MAP_CERULEAN_CITY_BIKE_SHOP
	warp_def 29, 28, 0, 1, MAP_CERULEAN_CITY_MART
	warp_def 1, 12, 0, 0, MAP_CERULEAN_CAVE_1F
	warp_def 10, 8, 3, 3, MAP_CERULEAN_CITY_HOUSE1
	warp_def 31, 8, 3, 3, MAP_CERULEAN_CITY_HOUSE2
	warp_def 31, 9, 3, 3, MAP_CERULEAN_CITY_HOUSE2
	warp_def 14, 28, 3, 1, MAP_CERULEAN_CITY_BIKE_SHOP
	warp_def 23, 28, 0, 0, MAP_CERULEAN_CITY_HOUSE4
	warp_def 17, 11, 0, 0, MAP_CERULEAN_CITY_HOUSE5

CeruleanCity_MapCoordEvents:
	coord_event 22, 6, 3, VAR_MAP_SCENE_CERULEAN_CITY_RIVAL, 0, CeruleanCity_EventScript_RivalTriggerLeft
	coord_event 23, 6, 3, VAR_MAP_SCENE_CERULEAN_CITY_RIVAL, 0, CeruleanCity_EventScript_RivalTriggerMid
	coord_event 24, 6, 3, VAR_MAP_SCENE_CERULEAN_CITY_RIVAL, 0, CeruleanCity_EventScript_RivalTriggerRight
	coord_event 33, 5, 3, VAR_MAP_SCENE_CERULEAN_CITY_ROCKET, 0, CeruleanCity_EventScript_GruntTriggerTop
	coord_event 33, 7, 3, VAR_MAP_SCENE_CERULEAN_CITY_ROCKET, 0, CeruleanCity_EventScript_GruntTriggerBottom

CeruleanCity_MapBGEvents:
	bg_sign_event 20, 25, 0, BG_EVENT_PLAYER_FACING_ANY, CeruleanCity_EventScript_CitySign
	bg_sign_event 27, 21, 0, BG_EVENT_PLAYER_FACING_ANY, CeruleanCity_EventScript_GymSign
	bg_sign_event 11, 28, 0, BG_EVENT_PLAYER_FACING_ANY, CeruleanCity_EventScript_BikeShopSign
	bg_sign_event 19, 32, 0, BG_EVENT_PLAYER_FACING_ANY, CeruleanCity_EventScript_TrainerTips
	bg_hidden_item_event 18, 7, 3, ITEM_RARE_CANDY, FLAG_HIDDEN_ITEM_CERULEAN_CITY_RARE_CANDY, 1, FALSE
	bg_sign_event 11, 25, 0, BG_EVENT_PLAYER_FACING_ANY, CeruleanCity_BikeShop_EventScript_Bicycle
	bg_sign_event 11, 27, 0, BG_EVENT_PLAYER_FACING_ANY, CeruleanCity_BikeShop_EventScript_Bicycle
	bg_sign_event 11, 26, 0, BG_EVENT_PLAYER_FACING_ANY, CeruleanCity_BikeShop_EventScript_Bicycle

CeruleanCity_MapEvents::
	map_events CeruleanCity_ObjectEvents, CeruleanCity_MapWarps, CeruleanCity_MapCoordEvents, CeruleanCity_MapBGEvents

