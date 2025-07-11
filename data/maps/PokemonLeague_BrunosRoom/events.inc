@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/PokemonLeague_BrunosRoom/map.json
@

	.align 2

PokemonLeague_BrunosRoom_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_BRUNO, 6, 5, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, PokemonLeague_BrunosRoom_EventScript_Bruno, 0

PokemonLeague_BrunosRoom_MapWarps:
	warp_def 6, 12, 0, 1, MAP_POKEMON_LEAGUE_LORELEIS_ROOM
	warp_def 6, 2, 0, 0, MAP_POKEMON_LEAGUE_AGATHAS_ROOM

PokemonLeague_BrunosRoom_MapEvents::
	map_events PokemonLeague_BrunosRoom_ObjectEvents, PokemonLeague_BrunosRoom_MapWarps, NULL, NULL

