@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/CinnabarIsland_PokemonLab_Entrance/map.json
@

	.align 2

CinnabarIsland_PokemonLab_Entrance_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_SCIENTIST, 2, 4, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, CinnabarIsland_PokemonLab_Entrance_EventScript_Scientist, 0

CinnabarIsland_PokemonLab_Entrance_MapWarps:
	warp_def 3, 9, 3, 2, MAP_CINNABAR_ISLAND
	warp_def 4, 9, 3, 2, MAP_CINNABAR_ISLAND
	warp_def 5, 9, 3, 2, MAP_CINNABAR_ISLAND
	warp_def 13, 5, 0, 0, MAP_CINNABAR_ISLAND_POKEMON_LAB_LOUNGE
	warp_def 19, 5, 0, 0, MAP_CINNABAR_ISLAND_POKEMON_LAB_RESEARCH_ROOM
	warp_def 25, 5, 0, 0, MAP_CINNABAR_ISLAND_POKEMON_LAB_EXPERIMENT_ROOM

CinnabarIsland_PokemonLab_Entrance_MapBGEvents:
	bg_sign_event 4, 1, 0, BG_EVENT_PLAYER_FACING_ANY, CinnabarIsland_PokemonLab_Entrance_EventScript_DrFujiPhoto
	bg_sign_event 12, 5, 0, BG_EVENT_PLAYER_FACING_ANY, CinnabarIsland_PokemonLab_Entrance_EventScript_MeetingRoomSign
	bg_sign_event 18, 5, 0, BG_EVENT_PLAYER_FACING_ANY, CinnabarIsland_PokemonLab_Entrance_EventScript_RAndDRoomSign
	bg_sign_event 24, 5, 0, BG_EVENT_PLAYER_FACING_ANY, CinnabarIsland_PokemonLab_Entrance_EventScript_TestingRoomSign

CinnabarIsland_PokemonLab_Entrance_MapEvents::
	map_events CinnabarIsland_PokemonLab_Entrance_ObjectEvents, CinnabarIsland_PokemonLab_Entrance_MapWarps, NULL, CinnabarIsland_PokemonLab_Entrance_MapBGEvents

