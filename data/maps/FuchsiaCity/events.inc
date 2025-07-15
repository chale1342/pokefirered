@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/FuchsiaCity/map.json
@

	.align 2

FuchsiaCity_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_FAT_MAN, 37, 17, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, FuchsiaCity_EventScript_Erik, 0
	object_event 2, OBJ_EVENT_GFX_SLOWPOKE, 36, 15, 3, MOVEMENT_TYPE_WANDER_AROUND_SLOWER, 4, 1, TRAINER_TYPE_NONE, 0, 0x0, 0
	object_event 3, OBJ_EVENT_GFX_VOLTORB, 33, 8, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, 0x0, 0
	object_event 4, OBJ_EVENT_GFX_YOUNGSTER, 33, 11, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NONE, 0, FuchsiaCity_EventScript_Youngster, 0
	object_event 5, OBJ_EVENT_GFX_CHANSEY, 39, 8, 3, MOVEMENT_TYPE_WANDER_AROUND, 3, 1, TRAINER_TYPE_NONE, 0, 0x0, 0
	object_event 6, OBJ_EVENT_GFX_LITTLE_BOY, 14, 15, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 3, 1, TRAINER_TYPE_NONE, 0, FuchsiaCity_EventScript_LittleBoy, 0
	object_event 7, OBJ_EVENT_GFX_LAPRAS, 12, 20, 1, MOVEMENT_TYPE_WANDER_AROUND, 2, 1, TRAINER_TYPE_NONE, 0, 0x0, 0
	object_event 8, OBJ_EVENT_GFX_OLD_MAN_1, 36, 20, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 4, 1, TRAINER_TYPE_NONE, 0, FuchsiaCity_EventScript_OldMan, 0
	object_event 9, OBJ_EVENT_GFX_VAR_0, 8, 8, 1, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, 0x0, 0
	object_event 10, OBJ_EVENT_GFX_KANGASKHAN, 16, 9, 3, MOVEMENT_TYPE_WANDER_AROUND, 4, 1, TRAINER_TYPE_NONE, 0, 0x0, 0
	object_event 11, OBJ_EVENT_GFX_CUT_TREE, 30, 10, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, EventScript_CutTree, FLAG_CUT_TREE_FUCHSIA_CITY_1
	object_event 12, OBJ_EVENT_GFX_CUT_TREE, 21, 13, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, EventScript_CutTree, FLAG_CUT_TREE_FUCHSIA_CITY_2
	object_event 13, OBJ_EVENT_GFX_CUT_TREE, 32, 16, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, EventScript_CutTree, FLAG_CUT_TREE_FUCHSIA_CITY_3
	object_event 14, OBJ_EVENT_GFX_CUT_TREE, 24, 22, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, EventScript_CutTree, FLAG_CUT_TREE_FUCHSIA_CITY_4
	object_event 15, OBJ_EVENT_GFX_BUG_CATCHER, 15, 11, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NONE, 0, FuchsiaCity_EventScript_SubstituteTutor, 0
	object_event 16, OBJ_EVENT_GFX_LASS, 40, 6, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, FuchsiaCity_EventScript_Lass, FLAG_HIDE_POSTGAME_GOSSIPERS

FuchsiaCity_MapWarps:
	warp_def 24, 5, 0, 2, MAP_FUCHSIA_CITY_SAFARI_ZONE_ENTRANCE
	warp_def 33, 31, 0, 1, MAP_FUCHSIA_CITY_WARDENS_HOUSE
	warp_def 11, 15, 0, 1, MAP_FUCHSIA_CITY_MART
	warp_def 28, 16, 0, 1, MAP_FUCHSIA_CITY_SAFARI_ZONE_OFFICE
	warp_def 9, 32, 0, 1, MAP_FUCHSIA_CITY_GYM
	warp_def 14, 31, 0, 1, MAP_FUCHSIA_CITY_HOUSE1
	warp_def 25, 31, 3, 1, MAP_FUCHSIA_CITY_POKEMON_CENTER_1F
	warp_def 38, 31, 0, 1, MAP_FUCHSIA_CITY_HOUSE2
	warp_def 39, 28, 3, 3, MAP_FUCHSIA_CITY_HOUSE2
	warp_def 39, 29, 3, 3, MAP_FUCHSIA_CITY_HOUSE2
	warp_def 19, 31, 0, 0, MAP_FUCHSIA_CITY_HOUSE3

FuchsiaCity_MapBGEvents:
	bg_sign_event 31, 18, 3, BG_EVENT_PLAYER_FACING_ANY, FuchsiaCity_EventScript_CitySign
	bg_sign_event 26, 18, 0, BG_EVENT_PLAYER_FACING_ANY, FuchsiaCity_EventScript_SafariZoneSign
	bg_sign_event 5, 32, 0, BG_EVENT_PLAYER_FACING_ANY, FuchsiaCity_EventScript_GymSign
	bg_sign_event 31, 31, 0, BG_EVENT_PLAYER_FACING_ANY, FuchsiaCity_EventScript_WardensHomeSign
	bg_sign_event 35, 10, 0, BG_EVENT_PLAYER_FACING_ANY, FuchsiaCity_EventScript_VoltorbSign
	bg_sign_event 38, 16, 3, BG_EVENT_PLAYER_FACING_ANY, FuchsiaCity_EventScript_SlowpokeSign
	bg_sign_event 41, 10, 0, BG_EVENT_PLAYER_FACING_ANY, FuchsiaCity_EventScript_ChanseySign
	bg_sign_event 17, 10, 0, BG_EVENT_PLAYER_FACING_ANY, FuchsiaCity_EventScript_KangaskhanSign
	bg_sign_event 11, 10, 0, BG_EVENT_PLAYER_FACING_ANY, FuchsiaCity_EventScript_FossilMonSign
	bg_sign_event 17, 18, 3, BG_EVENT_PLAYER_FACING_ANY, FuchsiaCity_EventScript_LaprasSign
	bg_sign_event 22, 7, 0, BG_EVENT_PLAYER_FACING_ANY, FuchsiaCity_EventScript_SafariGameSign
	bg_hidden_item_event 33, 26, 3, ITEM_MAX_REVIVE, FLAG_HIDDEN_ITEM_FUCHSIA_CITY_MAX_REVIVE, 1, FALSE

FuchsiaCity_MapEvents::
	map_events FuchsiaCity_ObjectEvents, FuchsiaCity_MapWarps, NULL, FuchsiaCity_MapBGEvents

