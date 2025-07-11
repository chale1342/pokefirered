@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/FuchsiaCity_WardensHouse/map.json
@

	.align 2

FuchsiaCity_WardensHouse_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_OLD_MAN_2, 3, 5, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, FuchsiaCity_WardensHouse_EventScript_Warden, 0
	object_event 2, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 11, 6, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, 0
	object_event 3, OBJ_EVENT_GFX_ITEM_BALL, 11, 5, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, FuchsiaCity_WardensHouse_EventScript_ItemRareCandy, FLAG_HIDE_FUCHSIA_CITY_WARDENS_HOUSE_RARE_CANDY
	object_event 4, 0, 4, 1, 0, MOVEMENT_TYPE_INVISIBLE, 1, 1, TRAINER_TYPE_NONE, 0, FuchsiaCity_WardensHouse_EventScript_PokemonJournalKoga, FLAG_HIDE_FAME_CHECKER_KOGA_JOURNAL

FuchsiaCity_WardensHouse_MapWarps:
	warp_def 5, 10, 0, 1, MAP_FUCHSIA_CITY
	warp_def 6, 9, 3, 1, MAP_FUCHSIA_CITY
	warp_def 7, 10, 0, 1, MAP_FUCHSIA_CITY

FuchsiaCity_WardensHouse_MapBGEvents:
	bg_sign_event 7, 4, 0, BG_EVENT_PLAYER_FACING_ANY, FuchsiaCity_WardensHouse_EventScript_DisplaySign2
	bg_sign_event 4, 4, 0, BG_EVENT_PLAYER_FACING_ANY, FuchsiaCity_WardensHouse_EventScript_DisplaySign1
	bg_sign_event 5, 4, 0, BG_EVENT_PLAYER_FACING_ANY, FuchsiaCity_WardensHouse_EventScript_DisplaySign1
	bg_sign_event 6, 4, 0, BG_EVENT_PLAYER_FACING_ANY, FuchsiaCity_WardensHouse_EventScript_DisplaySign2

FuchsiaCity_WardensHouse_MapEvents::
	map_events FuchsiaCity_WardensHouse_ObjectEvents, FuchsiaCity_WardensHouse_MapWarps, NULL, FuchsiaCity_WardensHouse_MapBGEvents

