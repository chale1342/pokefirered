@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/VermilionCity/map.json
@

	.align 2

VermilionCity_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_WOMAN_1, 22, 11, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 4, 1, TRAINER_TYPE_NONE, 0, VermilionCity_EventScript_Woman, 0
	object_event 2, OBJ_EVENT_GFX_OLD_MAN_1, 17, 9, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, VermilionCity_EventScript_OldMan1, 0
	object_event 3, OBJ_EVENT_GFX_OLD_MAN_2, 36, 10, 0, MOVEMENT_TYPE_FACE_DOWN_AND_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, VermilionCity_EventScript_OldMan2, 0
	object_event 4, OBJ_EVENT_GFX_MACHOP, 35, 11, 3, MOVEMENT_TYPE_WANDER_AROUND, 2, 2, TRAINER_TYPE_NONE, 0, VermilionCity_EventScript_Machop, 0
	object_event 5, OBJ_EVENT_GFX_SAILOR, 31, 30, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 4, 1, TRAINER_TYPE_NONE, 0, VermilionCity_EventScript_Sailor, 0
	object_event 6, OBJ_EVENT_GFX_SAILOR, 24, 33, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NONE, 0, VermilionCity_EventScript_FerrySailor, 0
	object_event 7, OBJ_EVENT_GFX_CUT_TREE, 19, 24, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, EventScript_CutTree, FLAG_TEMP_12
	object_event 8, OBJ_EVENT_GFX_SCIENTIST, 25, 7, 3, MOVEMENT_TYPE_LOOK_AROUND, 4, 1, TRAINER_TYPE_NONE, 0, VermilionCity_EventScript_OaksAide, FLAG_HIDE_VERMILION_CITY_OAKS_AIDE

VermilionCity_MapWarps:
	warp_def 22, 34, 3, 1, MAP_SSANNE_EXTERIOR
	warp_def 23, 34, 3, 1, MAP_SSANNE_EXTERIOR
	warp_def 24, 34, 3, 1, MAP_SSANNE_EXTERIOR
	warp_def 9, 6, 0, 1, MAP_VERMILION_CITY_HOUSE1
	warp_def 15, 6, 3, 1, MAP_VERMILION_CITY_POKEMON_CENTER_1F
	warp_def 12, 17, 0, 1, MAP_VERMILION_CITY_POKEMON_FAN_CLUB
	warp_def 19, 17, 0, 1, MAP_VERMILION_CITY_HOUSE2
	warp_def 29, 17, 0, 1, MAP_VERMILION_CITY_MART
	warp_def 28, 24, 0, 1, MAP_VERMILION_CITY_HOUSE3
	warp_def 14, 25, 0, 1, MAP_VERMILION_CITY_GYM

VermilionCity_MapCoordEvents:
	coord_event 22, 33, 0, VAR_VERMILION_CITY_TICKET_CHECK_TRIGGER, 0, VermilionCity_EventScript_CheckTicketLeft
	coord_event 23, 33, 0, VAR_VERMILION_CITY_TICKET_CHECK_TRIGGER, 0, VermilionCity_EventScript_CheckTicketRight
	coord_event 22, 32, 0, VAR_TEMP_1, 0, VermilionCity_EventScript_ExitedTicketCheck
	coord_event 23, 32, 0, VAR_TEMP_1, 0, VermilionCity_EventScript_ExitedTicketCheck

VermilionCity_MapBGEvents:
	bg_sign_event 33, 6, 0, BG_EVENT_PLAYER_FACING_ANY, VermilionCity_EventScript_CitySign
	bg_sign_event 10, 17, 3, BG_EVENT_PLAYER_FACING_ANY, VermilionCity_EventScript_PokemonFanClubSign
	bg_sign_event 10, 24, 0, BG_EVENT_PLAYER_FACING_ANY, VermilionCity_EventScript_GymSign
	bg_sign_event 34, 18, 0, BG_EVENT_PLAYER_FACING_ANY, VermilionCity_EventScript_HarborSign
	bg_sign_event 45, 17, 3, BG_EVENT_PLAYER_FACING_ANY, VermilionCity_EventScript_SnorlaxNotice
	bg_hidden_item_event 14, 11, 3, ITEM_MAX_ETHER, FLAG_HIDDEN_ITEM_VERMILION_CITY_MAX_ETHER, 1, FALSE

VermilionCity_MapEvents::
	map_events VermilionCity_ObjectEvents, VermilionCity_MapWarps, VermilionCity_MapCoordEvents, VermilionCity_MapBGEvents

