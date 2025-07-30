@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Route5_PokemonDayCare/map.json
@

	.align 2

Route5_PokemonDayCare_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_GENTLEMAN, 4, 4, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, Route5_PokemonDayCare_EventScript_DaycareMan, 0

Route5_PokemonDayCare_MapWarps:
	warp_def 3, 7, 0, 1, MAP_ROUTE5
	warp_def 4, 7, 0, 1, MAP_ROUTE5
	warp_def 5, 7, 0, 1, MAP_ROUTE5

Route5_PokemonDayCare_MapEvents::
	map_events Route5_PokemonDayCare_ObjectEvents, Route5_PokemonDayCare_MapWarps, NULL, NULL

