@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/PokemonTower_7F/map.json
@

	.align 2

PokemonTower_7F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_MR_FUJI, 11, 4, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, PokemonTower_7F_EventScript_MrFuji, FLAG_HIDE_TOWER_FUJI
	object_event 2, OBJ_EVENT_GFX_ROCKET_M, 9, 10, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NORMAL, 4, PokemonTower_7F_EventScript_Grunt1, FLAG_HIDE_TOWER_ROCKET_1
	object_event 3, OBJ_EVENT_GFX_ROCKET_M, 13, 8, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NORMAL, 4, PokemonTower_7F_EventScript_Grunt2, FLAG_HIDE_TOWER_ROCKET_2
	object_event 4, OBJ_EVENT_GFX_ROCKET_M, 9, 6, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NORMAL, 4, PokemonTower_7F_EventScript_Grunt3, FLAG_HIDE_TOWER_ROCKET_3

PokemonTower_7F_MapWarps:
	warp_def 11, 16, 3, 0, MAP_POKEMON_TOWER_6F

PokemonTower_7F_MapBGEvents:
	bg_hidden_item_event 11, 4, 3, ITEM_SOOTHE_BELL, FLAG_HIDDEN_ITEM_POKEMON_TOWER_7F_SOOTHE_BELL, 1, TRUE

PokemonTower_7F_MapEvents::
	map_events PokemonTower_7F_ObjectEvents, PokemonTower_7F_MapWarps, NULL, PokemonTower_7F_MapBGEvents

