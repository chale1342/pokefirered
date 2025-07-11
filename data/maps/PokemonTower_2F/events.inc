@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/PokemonTower_2F/map.json
@

	.align 2

PokemonTower_2F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_BLUE, 16, 5, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NONE, 0, 0x0, FLAG_HIDE_TOWER_RIVAL
	object_event 2, OBJ_EVENT_GFX_CHANNELER, 3, 7, 0, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, PokemonTower_2F_EventScript_Channeler, 0

PokemonTower_2F_MapWarps:
	warp_def 4, 10, 3, 0, MAP_POKEMON_TOWER_3F
	warp_def 18, 10, 3, 3, MAP_POKEMON_TOWER_1F

PokemonTower_2F_MapCoordEvents:
	coord_event 17, 5, 3, VAR_MAP_SCENE_POKEMON_TOWER_2F, 0, PokemonTower_2F_EventScript_RivalTriggerRight
	coord_event 16, 6, 3, VAR_MAP_SCENE_POKEMON_TOWER_2F, 0, PokemonTower_2F_EventScript_RivalTriggerDown

PokemonTower_2F_MapEvents::
	map_events PokemonTower_2F_ObjectEvents, PokemonTower_2F_MapWarps, PokemonTower_2F_MapCoordEvents, NULL

