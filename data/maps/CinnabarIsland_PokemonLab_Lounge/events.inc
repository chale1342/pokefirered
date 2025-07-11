@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/CinnabarIsland_PokemonLab_Lounge/map.json
@

	.align 2

CinnabarIsland_PokemonLab_Lounge_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_SCIENTIST, 5, 3, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, CinnabarIsland_PokemonLab_Lounge_EventScript_Scientist, 0
	object_event 2, OBJ_EVENT_GFX_OLD_MAN_2, 4, 6, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, CinnabarIsland_PokemonLab_Lounge_EventScript_Clifton, 0
	object_event 3, OBJ_EVENT_GFX_WOMAN_2, 10, 5, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, CinnabarIsland_PokemonLab_Lounge_EventScript_Norma, 0

CinnabarIsland_PokemonLab_Lounge_MapWarps:
	warp_def 7, 9, 3, 3, MAP_CINNABAR_ISLAND_POKEMON_LAB_ENTRANCE

CinnabarIsland_PokemonLab_Lounge_MapEvents::
	map_events CinnabarIsland_PokemonLab_Lounge_ObjectEvents, CinnabarIsland_PokemonLab_Lounge_MapWarps, NULL, NULL

