@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/PokemonTower_4F/map.json
@

	.align 2

PokemonTower_4F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_CHANNELER, 17, 7, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 3, PokemonTower_4F_EventScript_Laurel, 0
	object_event 2, OBJ_EVENT_GFX_CHANNELER, 15, 13, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NORMAL, 5, PokemonTower_4F_EventScript_Jody, 0
	object_event 3, OBJ_EVENT_GFX_CHANNELER, 4, 12, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NORMAL, 2, PokemonTower_4F_EventScript_Paula, 0
	object_event 4, OBJ_EVENT_GFX_ITEM_BALL, 12, 11, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, PokemonTower_4F_EventScript_ItemElixir, FLAG_HIDE_POKEMON_TOWER_4F_ELIXIR
	object_event 5, OBJ_EVENT_GFX_ITEM_BALL, 8, 11, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, PokemonTower_4F_EventScript_ItemAwakening, FLAG_HIDE_POKEMON_TOWER_4F_AWAKENING
	object_event 6, OBJ_EVENT_GFX_ITEM_BALL, 11, 16, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, PokemonTower_4F_EventScript_ItemGreatBall, FLAG_HIDE_POKEMON_TOWER_4F_GREAT_BALL

PokemonTower_4F_MapWarps:
	warp_def 4, 10, 3, 0, MAP_POKEMON_TOWER_5F
	warp_def 18, 10, 3, 1, MAP_POKEMON_TOWER_3F

PokemonTower_4F_MapEvents::
	map_events PokemonTower_4F_ObjectEvents, PokemonTower_4F_MapWarps, NULL, NULL

