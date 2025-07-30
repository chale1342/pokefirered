@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/map.json
@

	.align 2

CinnabarIsland_PokemonLab_ExperimentRoom_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_BOY, 11, 8, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NONE, 0, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_Garett, 0
	object_event 2, OBJ_EVENT_GFX_SCIENTIST, 12, 3, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_FossilScientist, 0

CinnabarIsland_PokemonLab_ExperimentRoom_MapWarps:
	warp_def 7, 9, 3, 5, MAP_CINNABAR_ISLAND_POKEMON_LAB_ENTRANCE

CinnabarIsland_PokemonLab_ExperimentRoom_MapEvents::
	map_events CinnabarIsland_PokemonLab_ExperimentRoom_ObjectEvents, CinnabarIsland_PokemonLab_ExperimentRoom_MapWarps, NULL, NULL

