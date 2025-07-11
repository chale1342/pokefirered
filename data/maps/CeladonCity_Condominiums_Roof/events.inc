@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/CeladonCity_Condominiums_Roof/map.json
@

	.align 2

CeladonCity_Condominiums_Roof_MapWarps:
	warp_def 4, 2, 3, 1, MAP_CELADON_CITY_CONDOMINIUMS_3F
	warp_def 10, 2, 3, 2, MAP_CELADON_CITY_CONDOMINIUMS_3F
	warp_def 2, 12, 3, 1, MAP_CELADON_CITY_CONDOMINIUMS_ROOF_ROOM

CeladonCity_Condominiums_Roof_MapBGEvents:
	bg_sign_event 4, 12, 0, BG_EVENT_PLAYER_FACING_ANY, CeladonCity_Condominiums_Roof_EventScript_Sign
	bg_sign_event 3, 12, 0, BG_EVENT_PLAYER_FACING_ANY, CeladonCity_Condominiums_Roof_EventScript_Sign

CeladonCity_Condominiums_Roof_MapEvents::
	map_events NULL, CeladonCity_Condominiums_Roof_MapWarps, NULL, CeladonCity_Condominiums_Roof_MapBGEvents

