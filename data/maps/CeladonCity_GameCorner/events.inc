@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/CeladonCity_GameCorner/map.json
@

	.align 2

CeladonCity_GameCorner_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_WORKER_F, 4, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, CeladonCity_GameCorner_EventScript_InfoClerk, 0
	object_event 2, OBJ_EVENT_GFX_WORKER_M, 6, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, CeladonCity_GameCorner_EventScript_CoinsClerk, 0
	object_event 3, OBJ_EVENT_GFX_BALDING_MAN, 1, 6, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, CeladonCity_GameCorner_EventScript_BaldingMan, 0
	object_event 4, OBJ_EVENT_GFX_WOMAN_2, 1, 8, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, CeladonCity_GameCorner_EventScript_Woman1, 0
	object_event 5, OBJ_EVENT_GFX_FISHER, 4, 7, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, CeladonCity_GameCorner_EventScript_Fisher, 0
	object_event 6, OBJ_EVENT_GFX_GYM_GUY, 7, 10, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, CeladonCity_GameCorner_EventScript_GymGuy, 0
	object_event 7, OBJ_EVENT_GFX_WOMAN_1, 7, 8, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, CeladonCity_GameCorner_EventScript_Woman2, 0
	object_event 8, OBJ_EVENT_GFX_OLD_MAN_2, 10, 9, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, CeladonCity_GameCorner_EventScript_OldMan, 0
	object_event 9, OBJ_EVENT_GFX_SCIENTIST, 13, 7, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, CeladonCity_GameCorner_EventScript_Scientist, 0
	object_event 10, OBJ_EVENT_GFX_GENTLEMAN, 16, 10, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, CeladonCity_GameCorner_EventScript_Gentleman, 0
	object_event 11, OBJ_EVENT_GFX_ROCKET_M, 11, 2, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NORMAL, 0, CeladonCity_GameCorner_EventScript_RocketGrunt, FLAG_HIDE_GAME_CORNER_ROCKET

CeladonCity_GameCorner_MapWarps:
	warp_def 9, 13, 0, 0, MAP_CELADON_CITY
	warp_def 10, 13, 0, 0, MAP_CELADON_CITY
	warp_def 11, 13, 0, 0, MAP_CELADON_CITY
	warp_def 15, 2, 3, 0, MAP_ROCKET_HIDEOUT_B1F

CeladonCity_GameCorner_MapBGEvents:
	bg_hidden_item_event 2, 4, 3, ITEM_NONE, FLAG_HIDDEN_ITEM_CELADON_CITY_GAME_CORNER_COINS, 10, FALSE
	bg_hidden_item_event 3, 8, 3, ITEM_NONE, FLAG_HIDDEN_ITEM_CELADON_CITY_GAME_CORNER_COINS_2, 10, FALSE
	bg_hidden_item_event 2, 11, 3, ITEM_NONE, FLAG_HIDDEN_ITEM_CELADON_CITY_GAME_CORNER_COINS_3, 20, FALSE
	bg_hidden_item_event 6, 12, 3, ITEM_NONE, FLAG_HIDDEN_ITEM_CELADON_CITY_GAME_CORNER_COINS_4, 10, FALSE
	bg_hidden_item_event 9, 9, 3, ITEM_NONE, FLAG_HIDDEN_ITEM_CELADON_CITY_GAME_CORNER_COINS_5, 10, FALSE
	bg_hidden_item_event 8, 5, 3, ITEM_NONE, FLAG_HIDDEN_ITEM_CELADON_CITY_GAME_CORNER_COINS_6, 20, FALSE
	bg_hidden_item_event 10, 4, 3, ITEM_NONE, FLAG_HIDDEN_ITEM_CELADON_CITY_GAME_CORNER_COINS_7, 10, FALSE
	bg_hidden_item_event 13, 3, 3, ITEM_NONE, FLAG_HIDDEN_ITEM_CELADON_CITY_GAME_CORNER_COINS_8, 10, FALSE
	bg_hidden_item_event 15, 5, 3, ITEM_NONE, FLAG_HIDDEN_ITEM_CELADON_CITY_GAME_CORNER_COINS_9, 10, FALSE
	bg_hidden_item_event 17, 5, 3, ITEM_NONE, FLAG_HIDDEN_ITEM_CELADON_CITY_GAME_CORNER_COINS_10, 40, FALSE
	bg_hidden_item_event 15, 13, 3, ITEM_NONE, FLAG_HIDDEN_ITEM_CELADON_CITY_GAME_CORNER_COINS_11, 100, FALSE
	bg_hidden_item_event 12, 12, 3, ITEM_NONE, FLAG_HIDDEN_ITEM_CELADON_CITY_GAME_CORNER_COINS_12, 10, FALSE
	bg_sign_event 0, 7, 0, BG_EVENT_PLAYER_FACING_WEST, CeladonCity_GameCorner_EventScript_SlotMachine0
	bg_sign_event 0, 9, 0, BG_EVENT_PLAYER_FACING_WEST, CeladonCity_GameCorner_EventScript_SlotMachine1
	bg_sign_event 0, 10, 0, BG_EVENT_PLAYER_FACING_WEST, CeladonCity_GameCorner_EventScript_SlotMachine2
	bg_sign_event 5, 6, 0, BG_EVENT_PLAYER_FACING_EAST, CeladonCity_GameCorner_EventScript_SlotMachine3
	bg_sign_event 5, 8, 0, BG_EVENT_PLAYER_FACING_EAST, CeladonCity_GameCorner_EventScript_UnusableSlotMachine1
	bg_sign_event 5, 9, 0, BG_EVENT_PLAYER_FACING_EAST, CeladonCity_GameCorner_EventScript_SlotMachine5
	bg_sign_event 5, 10, 0, BG_EVENT_PLAYER_FACING_EAST, CeladonCity_GameCorner_EventScript_SlotMachine6
	bg_sign_event 6, 6, 0, BG_EVENT_PLAYER_FACING_WEST, CeladonCity_GameCorner_EventScript_SlotMachine7
	bg_sign_event 6, 7, 0, BG_EVENT_PLAYER_FACING_WEST, CeladonCity_GameCorner_EventScript_SlotMachine8
	bg_sign_event 6, 9, 0, BG_EVENT_PLAYER_FACING_WEST, CeladonCity_GameCorner_EventScript_SlotMachine9
	bg_sign_event 11, 6, 0, BG_EVENT_PLAYER_FACING_EAST, CeladonCity_GameCorner_EventScript_SlotMachine10
	bg_sign_event 11, 7, 0, BG_EVENT_PLAYER_FACING_EAST, CeladonCity_GameCorner_EventScript_SlotMachine11
	bg_sign_event 11, 8, 0, BG_EVENT_PLAYER_FACING_EAST, CeladonCity_GameCorner_EventScript_SlotMachine12
	bg_sign_event 11, 10, 0, BG_EVENT_PLAYER_FACING_EAST, CeladonCity_GameCorner_EventScript_SlotMachine13
	bg_sign_event 12, 6, 0, BG_EVENT_PLAYER_FACING_WEST, CeladonCity_GameCorner_EventScript_SlotMachine14
	bg_sign_event 12, 8, 0, BG_EVENT_PLAYER_FACING_WEST, CeladonCity_GameCorner_EventScript_UnusableSlotMachine2
	bg_sign_event 12, 9, 0, BG_EVENT_PLAYER_FACING_WEST, CeladonCity_GameCorner_EventScript_SlotMachine16
	bg_sign_event 12, 10, 0, BG_EVENT_PLAYER_FACING_WEST, CeladonCity_GameCorner_EventScript_SlotMachine17
	bg_sign_event 17, 6, 0, BG_EVENT_PLAYER_FACING_EAST, CeladonCity_GameCorner_EventScript_UnusableSlotMachine3
	bg_sign_event 17, 7, 0, BG_EVENT_PLAYER_FACING_EAST, CeladonCity_GameCorner_EventScript_SlotMachine19
	bg_sign_event 17, 8, 0, BG_EVENT_PLAYER_FACING_EAST, CeladonCity_GameCorner_EventScript_SlotMachine20
	bg_sign_event 17, 9, 0, BG_EVENT_PLAYER_FACING_EAST, CeladonCity_GameCorner_EventScript_SlotMachine21
	bg_sign_event 11, 1, 0, BG_EVENT_PLAYER_FACING_ANY, CeladonCity_GameCorner_EventScript_Poster
	bg_sign_event 17, 13, 0, BG_EVENT_PLAYER_FACING_EAST, CeladonCity_GameCorner_EventScript_PhotoPrinter

CeladonCity_GameCorner_MapEvents::
	map_events CeladonCity_GameCorner_ObjectEvents, CeladonCity_GameCorner_MapWarps, NULL, CeladonCity_GameCorner_MapBGEvents

