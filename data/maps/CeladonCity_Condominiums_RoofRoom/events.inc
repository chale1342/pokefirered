@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/CeladonCity_Condominiums_RoofRoom/map.json
@

	.align 2

CeladonCity_Condominiums_RoofRoom_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_BLACKBELT, 3, 5, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, CeladonCity_Condominiums_RoofRoom_EventScript_BlackBelt, 0
	object_event 2, OBJ_EVENT_GFX_ITEM_BALL, 7, 3, 0, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, CeladonCity_Condominiums_RoofRoom_EventScript_EeveeBall, FLAG_HIDE_EEVEE_BALL

CeladonCity_Condominiums_RoofRoom_MapWarps:
	warp_def 3, 8, 0, 2, MAP_CELADON_CITY_CONDOMINIUMS_ROOF
	warp_def 4, 7, 3, 2, MAP_CELADON_CITY_CONDOMINIUMS_ROOF
	warp_def 5, 8, 0, 2, MAP_CELADON_CITY_CONDOMINIUMS_ROOF

CeladonCity_Condominiums_RoofRoom_MapBGEvents:
	bg_sign_event 4, 1, 0, BG_EVENT_PLAYER_FACING_ANY, CeladonCity_Condominiums_RoofRoom_EventScript_Blackboard
	bg_sign_event 5, 1, 0, BG_EVENT_PLAYER_FACING_ANY, CeladonCity_Condominiums_RoofRoom_EventScript_Blackboard
	bg_sign_event 4, 4, 0, BG_EVENT_PLAYER_FACING_ANY, CeladonCity_Condominiums_RoofRoom_EventScript_TMsPamphlet

CeladonCity_Condominiums_RoofRoom_MapEvents::
	map_events CeladonCity_Condominiums_RoofRoom_ObjectEvents, CeladonCity_Condominiums_RoofRoom_MapWarps, NULL, CeladonCity_Condominiums_RoofRoom_MapBGEvents

