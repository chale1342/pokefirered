@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/PokemonTower_6F/map.json
@

	.align 2

PokemonTower_6F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_CHANNELER, 13, 10, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NORMAL, 3, PokemonTower_6F_EventScript_Angelica, 0
	object_event 2, OBJ_EVENT_GFX_CHANNELER, 18, 6, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NORMAL, 3, PokemonTower_6F_EventScript_Jennifer, 0
	object_event 3, OBJ_EVENT_GFX_CHANNELER, 9, 6, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 3, PokemonTower_6F_EventScript_Emilia, 0
	object_event 4, OBJ_EVENT_GFX_ITEM_BALL, 5, 15, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, PokemonTower_6F_EventScript_ItemRareCandy, FLAG_HIDE_POKEMON_TOWER_6F_RARE_CANDY
	object_event 5, OBJ_EVENT_GFX_ITEM_BALL, 15, 15, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, PokemonTower_6F_EventScript_ItemXAccuracy, FLAG_HIDE_POKEMON_TOWER_6F_X_ACCURACY

PokemonTower_6F_MapWarps:
	warp_def 11, 16, 3, 0, MAP_POKEMON_TOWER_7F
	warp_def 18, 10, 3, 1, MAP_POKEMON_TOWER_5F

PokemonTower_6F_MapCoordEvents:
	coord_event 11, 15, 3, VAR_MAP_SCENE_POKEMON_TOWER_6F, 0, PokemonTower_6F_EventScript_MarowakGhost
	coord_event 12, 16, 3, VAR_MAP_SCENE_POKEMON_TOWER_6F, 0, PokemonTower_6F_EventScript_MarowakGhost

PokemonTower_6F_MapEvents::
	map_events PokemonTower_6F_ObjectEvents, PokemonTower_6F_MapWarps, PokemonTower_6F_MapCoordEvents, NULL

