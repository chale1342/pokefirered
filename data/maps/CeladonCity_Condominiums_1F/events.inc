@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/CeladonCity_Condominiums_1F/map.json
@

	.align 2

CeladonCity_Condominiums_1F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_MEOWTH, 1, 9, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, CeladonCity_Condominiums_1F_EventScript_Meowth, 0
	object_event 2, OBJ_EVENT_GFX_CLEFAIRY, 5, 13, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, CeladonCity_Condominiums_1F_EventScript_Clefairy, 0
	object_event 3, OBJ_EVENT_GFX_NIDORAN_F, 5, 8, 3, MOVEMENT_TYPE_WANDER_AROUND, 2, 1, TRAINER_TYPE_NONE, 0, CeladonCity_Condominiums_1F_EventScript_Nidoran, 0
	object_event 4, OBJ_EVENT_GFX_OLD_WOMAN, 2, 9, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, CeladonCity_Condominiums_1F_EventScript_TeaWoman, 0

CeladonCity_Condominiums_1F_MapWarps:
	warp_def 11, 19, 0, 3, MAP_CELADON_CITY
	warp_def 12, 18, 3, 3, MAP_CELADON_CITY
	warp_def 13, 19, 0, 3, MAP_CELADON_CITY
	warp_def 4, 2, 3, 0, MAP_CELADON_CITY_CONDOMINIUMS_2F
	warp_def 12, 2, 3, 3, MAP_CELADON_CITY_CONDOMINIUMS_2F
	warp_def 2, 1, 3, 11, MAP_CELADON_CITY

CeladonCity_Condominiums_1F_MapBGEvents:
	bg_sign_event 8, 12, 0, BG_EVENT_PLAYER_FACING_ANY, CeladonCity_Condominiums_1F_EventScript_SuiteSign
	bg_sign_event 7, 12, 0, BG_EVENT_PLAYER_FACING_ANY, CeladonCity_Condominiums_1F_EventScript_SuiteSign

CeladonCity_Condominiums_1F_MapEvents::
	map_events CeladonCity_Condominiums_1F_ObjectEvents, CeladonCity_Condominiums_1F_MapWarps, NULL, CeladonCity_Condominiums_1F_MapBGEvents

