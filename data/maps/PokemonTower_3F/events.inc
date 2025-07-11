@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/PokemonTower_3F/map.json
@

	.align 2

PokemonTower_3F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_CHANNELER, 10, 14, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 3, PokemonTower_3F_EventScript_Patricia, 0
	object_event 2, OBJ_EVENT_GFX_CHANNELER, 9, 9, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 3, PokemonTower_3F_EventScript_Carly, 0
	object_event 3, OBJ_EVENT_GFX_CHANNELER, 12, 4, 3, MOVEMENT_TYPE_FACE_DOWN_AND_UP, 1, 1, TRAINER_TYPE_NORMAL, 2, PokemonTower_3F_EventScript_Hope, 0
	object_event 4, OBJ_EVENT_GFX_ITEM_BALL, 13, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, PokemonTower_3F_EventScript_ItemEscapeRope, FLAG_HIDE_POKEMON_TOWER_3F_ESCAPE_ROPE

PokemonTower_3F_MapWarps:
	warp_def 4, 10, 3, 0, MAP_POKEMON_TOWER_2F
	warp_def 18, 10, 3, 1, MAP_POKEMON_TOWER_4F

PokemonTower_3F_MapEvents::
	map_events PokemonTower_3F_ObjectEvents, PokemonTower_3F_MapWarps, NULL, NULL

