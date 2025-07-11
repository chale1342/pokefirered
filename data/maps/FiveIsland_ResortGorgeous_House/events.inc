@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/FiveIsland_ResortGorgeous_House/map.json
@

	.align 2

FiveIsland_ResortGorgeous_House_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_WOMAN_2, 4, 4, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, FiveIsland_ResortGorgeous_House_EventScript_Selphy, FLAG_HIDE_RESORT_GORGEOUS_INSIDE_SELPHY
	object_event 2, OBJ_EVENT_GFX_GENTLEMAN, 6, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, FiveIsland_ResortGorgeous_House_EventScript_Butler, FLAG_HIDE_SELPHYS_BUTLER

FiveIsland_ResortGorgeous_House_MapWarps:
	warp_def 4, 7, 3, 1, MAP_FIVE_ISLAND_RESORT_GORGEOUS

FiveIsland_ResortGorgeous_House_MapBGEvents:
	bg_sign_event 9, 1, 0, BG_EVENT_PLAYER_FACING_NORTH, FiveIsland_ResortGorgeous_House_EventScript_PokemonJournal
	bg_sign_event 8, 1, 0, BG_EVENT_PLAYER_FACING_NORTH, FiveIsland_ResortGorgeous_House_EventScript_PokemonJournal

FiveIsland_ResortGorgeous_House_MapEvents::
	map_events FiveIsland_ResortGorgeous_House_ObjectEvents, FiveIsland_ResortGorgeous_House_MapWarps, NULL, FiveIsland_ResortGorgeous_House_MapBGEvents

