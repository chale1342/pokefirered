@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/PokemonLeague_AgathasRoom/map.json
@

	.align 2

PokemonLeague_AgathasRoom_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_AGATHA, 6, 5, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, PokemonLeague_AgathasRoom_EventScript_Agatha, 0

PokemonLeague_AgathasRoom_MapWarps:
	warp_def 6, 12, 0, 1, MAP_POKEMON_LEAGUE_BRUNOS_ROOM
	warp_def 6, 2, 0, 0, MAP_POKEMON_LEAGUE_LANCES_ROOM

PokemonLeague_AgathasRoom_MapEvents::
	map_events PokemonLeague_AgathasRoom_ObjectEvents, PokemonLeague_AgathasRoom_MapWarps, NULL, NULL

