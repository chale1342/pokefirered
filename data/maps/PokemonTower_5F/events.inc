@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/PokemonTower_5F/map.json
@

	.align 2

PokemonTower_5F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_CHANNELER, 11, 4, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NORMAL, 2, PokemonTower_5F_EventScript_Ruth, 0
	object_event 2, OBJ_EVENT_GFX_CHANNELER, 19, 7, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NORMAL, 3, PokemonTower_5F_EventScript_Tammy, 0
	object_event 3, OBJ_EVENT_GFX_CHANNELER, 7, 12, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NORMAL, 2, PokemonTower_5F_EventScript_Karina, 0
	object_event 4, OBJ_EVENT_GFX_CHANNELER, 11, 16, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NORMAL, 2, PokemonTower_5F_EventScript_Janae, 0
	object_event 5, OBJ_EVENT_GFX_CHANNELER, 12, 8, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, PokemonTower_5F_EventScript_Channeler, 0
	object_event 6, OBJ_EVENT_GFX_ITEM_BALL, 6, 16, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, PokemonTower_5F_EventScript_ItemNugget, FLAG_HIDE_POKEMON_TOWER_5F_NUGGET
	object_event 7, OBJ_EVENT_GFX_ITEM_BALL, 11, 9, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, PokemonTower_5F_EventScript_ItemCleanseTag, FLAG_HIDE_POKEMON_TOWER_5F_CLEANSE_TAG

PokemonTower_5F_MapWarps:
	warp_def 4, 10, 3, 0, MAP_POKEMON_TOWER_4F
	warp_def 18, 10, 3, 1, MAP_POKEMON_TOWER_6F

PokemonTower_5F_MapCoordEvents:
	coord_event 10, 8, 3, VAR_TEMP_1, 0, PokemonTower_5F_EventScript_PurifiedZone
	coord_event 11, 8, 3, VAR_TEMP_1, 0, PokemonTower_5F_EventScript_PurifiedZone
	coord_event 12, 8, 3, VAR_TEMP_1, 0, PokemonTower_5F_EventScript_PurifiedZone
	coord_event 10, 9, 3, VAR_TEMP_1, 0, PokemonTower_5F_EventScript_PurifiedZone
	coord_event 9, 8, 3, VAR_TEMP_1, 1, PokemonTower_5F_EventScript_ExitPurifiedZone
	coord_event 12, 9, 3, VAR_TEMP_1, 0, PokemonTower_5F_EventScript_PurifiedZone
	coord_event 10, 10, 3, VAR_TEMP_1, 0, PokemonTower_5F_EventScript_PurifiedZone
	coord_event 11, 10, 3, VAR_TEMP_1, 0, PokemonTower_5F_EventScript_PurifiedZone
	coord_event 12, 10, 0, VAR_TEMP_1, 0, PokemonTower_5F_EventScript_PurifiedZone
	coord_event 9, 9, 3, VAR_TEMP_1, 1, PokemonTower_5F_EventScript_ExitPurifiedZone
	coord_event 9, 10, 3, VAR_TEMP_1, 1, PokemonTower_5F_EventScript_ExitPurifiedZone
	coord_event 10, 11, 3, VAR_TEMP_1, 1, PokemonTower_5F_EventScript_ExitPurifiedZone
	coord_event 11, 11, 3, VAR_TEMP_1, 1, PokemonTower_5F_EventScript_ExitPurifiedZone
	coord_event 12, 11, 0, VAR_TEMP_1, 1, PokemonTower_5F_EventScript_ExitPurifiedZone
	coord_event 13, 8, 0, VAR_TEMP_1, 1, PokemonTower_5F_EventScript_ExitPurifiedZone
	coord_event 13, 9, 0, VAR_TEMP_1, 1, PokemonTower_5F_EventScript_ExitPurifiedZone
	coord_event 13, 10, 0, VAR_TEMP_1, 1, PokemonTower_5F_EventScript_ExitPurifiedZone

PokemonTower_5F_MapBGEvents:
	bg_hidden_item_event 7, 3, 3, ITEM_BIG_MUSHROOM, FLAG_HIDDEN_ITEM_POKEMON_TOWER_5F_BIG_MUSHROOM, 1, FALSE

PokemonTower_5F_MapEvents::
	map_events PokemonTower_5F_ObjectEvents, PokemonTower_5F_MapWarps, PokemonTower_5F_MapCoordEvents, PokemonTower_5F_MapBGEvents

