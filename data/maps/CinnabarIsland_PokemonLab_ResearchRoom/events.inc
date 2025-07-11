@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/CinnabarIsland_PokemonLab_ResearchRoom/map.json
@

	.align 2

CinnabarIsland_PokemonLab_ResearchRoom_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_SUPER_NERD, 5, 4, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, CinnabarIsland_PokemonLab_ResearchRoom_EventScript_MetronomeTutor, 0
	object_event 2, OBJ_EVENT_GFX_SCIENTIST, 10, 3, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, CinnabarIsland_PokemonLab_ResearchRoom_EventScript_Scientist, 0

CinnabarIsland_PokemonLab_ResearchRoom_MapWarps:
	warp_def 7, 9, 3, 4, MAP_CINNABAR_ISLAND_POKEMON_LAB_ENTRANCE

CinnabarIsland_PokemonLab_ResearchRoom_MapBGEvents:
	bg_sign_event 6, 1, 0, BG_EVENT_PLAYER_FACING_ANY, CinnabarIsland_PokemonLab_ResearchRoom_EventScript_AmberPipe
	bg_sign_event 3, 1, 0, BG_EVENT_PLAYER_FACING_ANY, CinnabarIsland_PokemonLab_ResearchRoom_EventScript_Computer

CinnabarIsland_PokemonLab_ResearchRoom_MapEvents::
	map_events CinnabarIsland_PokemonLab_ResearchRoom_ObjectEvents, CinnabarIsland_PokemonLab_ResearchRoom_MapWarps, NULL, CinnabarIsland_PokemonLab_ResearchRoom_MapBGEvents

