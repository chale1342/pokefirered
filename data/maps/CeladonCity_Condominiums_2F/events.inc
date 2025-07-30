@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/CeladonCity_Condominiums_2F/map.json
@

	.align 2

CeladonCity_Condominiums_2F_ObjectEvents:
	object_event 1, 0, 6, 6, 0, MOVEMENT_TYPE_INVISIBLE, 1, 1, TRAINER_TYPE_NONE, 0, CeladonCity_Condominiums_2F_EventScript_PokemonJournalErika, FLAG_HIDE_FAME_CHECKER_ERIKA_JOURNALS
	object_event 2, 0, 5, 6, 0, MOVEMENT_TYPE_INVISIBLE, 1, 1, TRAINER_TYPE_NONE, 0, CeladonCity_Condominiums_2F_EventScript_PokemonJournalErika, FLAG_HIDE_FAME_CHECKER_ERIKA_JOURNALS

CeladonCity_Condominiums_2F_MapWarps:
	warp_def 4, 2, 3, 3, MAP_CELADON_CITY_CONDOMINIUMS_1F
	warp_def 2, 2, 3, 0, MAP_CELADON_CITY_CONDOMINIUMS_3F
	warp_def 11, 2, 3, 3, MAP_CELADON_CITY_CONDOMINIUMS_3F
	warp_def 12, 2, 3, 4, MAP_CELADON_CITY_CONDOMINIUMS_1F

CeladonCity_Condominiums_2F_MapBGEvents:
	bg_sign_event 8, 12, 0, BG_EVENT_PLAYER_FACING_ANY, CeladonCity_Condominiums_2F_EventScript_MeetingRoomSign
	bg_sign_event 7, 12, 0, BG_EVENT_PLAYER_FACING_ANY, CeladonCity_Condominiums_2F_EventScript_MeetingRoomSign

CeladonCity_Condominiums_2F_MapEvents::
	map_events CeladonCity_Condominiums_2F_ObjectEvents, CeladonCity_Condominiums_2F_MapWarps, NULL, CeladonCity_Condominiums_2F_MapBGEvents

