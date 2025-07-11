@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/PokemonLeague_LancesRoom/map.json
@

	.align 2

PokemonLeague_LancesRoom_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_LANCE, 6, 8, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, PokemonLeague_LancesRoom_EventScript_Lance, 0

PokemonLeague_LancesRoom_MapWarps:
	warp_def 23, 13, 3, 1, MAP_POKEMON_LEAGUE_AGATHAS_ROOM
	warp_def 6, 5, 0, 0, MAP_POKEMON_LEAGUE_CHAMPIONS_ROOM

PokemonLeague_LancesRoom_MapEvents::
	map_events PokemonLeague_LancesRoom_ObjectEvents, PokemonLeague_LancesRoom_MapWarps, NULL, NULL

