@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/PokemonLeague_LoreleisRoom/map.json
@

	.align 2

PokemonLeague_LoreleisRoom_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_LORELEI, 6, 5, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, PokemonLeague_LoreleisRoom_EventScript_Lorelei, 0

PokemonLeague_LoreleisRoom_MapWarps:
	warp_def 6, 12, 0, 1, MAP_INDIGO_PLATEAU_POKEMON_CENTER_1F
	warp_def 6, 2, 0, 0, MAP_POKEMON_LEAGUE_BRUNOS_ROOM

PokemonLeague_LoreleisRoom_MapEvents::
	map_events PokemonLeague_LoreleisRoom_ObjectEvents, PokemonLeague_LoreleisRoom_MapWarps, NULL, NULL

