@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/PalletTown/map.json
@

	.align 2

PalletTown_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_WOMAN_1, 3, 10, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 4, TRAINER_TYPE_NONE, 0, PalletTown_EventScript_SignLady, 0
	object_event 2, OBJ_EVENT_GFX_FAT_MAN, 13, 17, 3, MOVEMENT_TYPE_WANDER_AROUND, 6, 2, TRAINER_TYPE_NONE, 0, PalletTown_EventScript_FatMan, 0
	object_event 3, OBJ_EVENT_GFX_PROF_OAK, 10, 8, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NONE, 0, 0x0, FLAG_HIDE_OAK_IN_PALLET_TOWN
	object_event 4, OBJ_EVENT_GFX_YOUNGSTER, 5, 8, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, TRAINER_TYPE_NONE, 0, PalletTown_EventScript_Mom, 0

PalletTown_MapWarps:
	warp_def 6, 7, 0, 1, MAP_PALLET_TOWN_PLAYERS_HOUSE_1F
	warp_def 15, 7, 0, 0, MAP_PALLET_TOWN_RIVALS_HOUSE
	warp_def 16, 13, 0, 0, MAP_PALLET_TOWN_PROFESSOR_OAKS_LAB

PalletTown_MapCoordEvents:
	coord_event 12, 1, 3, VAR_MAP_SCENE_PALLET_TOWN_OAK, 0, PalletTown_EventScript_OakTriggerLeft
	coord_event 13, 1, 3, VAR_MAP_SCENE_PALLET_TOWN_OAK, 0, PalletTown_EventScript_OakTriggerRight
	coord_event 13, 2, 3, VAR_TEMP_2, 1, PalletTown_EventScript_SignLadyTrigger

PalletTown_MapBGEvents:
	bg_sign_event 16, 16, 0, BG_EVENT_PLAYER_FACING_ANY, PalletTown_EventScript_OaksLabSign
	bg_sign_event 4, 7, 0, BG_EVENT_PLAYER_FACING_ANY, PalletTown_EventScript_PlayersHouseSign
	bg_sign_event 13, 7, 0, BG_EVENT_PLAYER_FACING_ANY, PalletTown_EventScript_RivalsHouseSign
	bg_sign_event 9, 11, 0, BG_EVENT_PLAYER_FACING_ANY, PalletTown_EventScript_TownSign
	bg_sign_event 5, 14, 0, BG_EVENT_PLAYER_FACING_ANY, PalletTown_EventScript_TrainerTips

PalletTown_MapEvents::
	map_events PalletTown_ObjectEvents, PalletTown_MapWarps, PalletTown_MapCoordEvents, PalletTown_MapBGEvents

