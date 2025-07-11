@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/PokemonMansion_1F/map.json
@

	.align 2

PokemonMansion_1F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_SCIENTIST, 22, 24, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NORMAL, 4, PokemonMansion_1F_EventScript_Ted, 0
	object_event 2, OBJ_EVENT_GFX_ITEM_BALL, 29, 32, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, PokemonMansion_1F_EventScript_ItemCarbos, FLAG_HIDE_POKEMON_MANSION_1F_CARBOS
	object_event 3, OBJ_EVENT_GFX_ITEM_BALL, 22, 6, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, PokemonMansion_1F_EventScript_ItemEscapeRope, FLAG_HIDE_POKEMON_MANSION_1F_ESCAPE_ROPE
	object_event 4, OBJ_EVENT_GFX_ITEM_BALL, 27, 15, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, PokemonMansion_1F_EventScript_ItemProtein, FLAG_HIDE_POKEMON_MANSION_1F_PROTEIN
	object_event 5, OBJ_EVENT_GFX_YOUNGSTER, 8, 8, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 2, 1, TRAINER_TYPE_NORMAL, 1, PokemonMansion_1F_EventScript_Johnson, 0

PokemonMansion_1F_MapWarps:
	warp_def 7, 33, 3, 0, MAP_CINNABAR_ISLAND
	warp_def 8, 33, 3, 0, MAP_CINNABAR_ISLAND
	warp_def 9, 33, 3, 0, MAP_CINNABAR_ISLAND
	warp_def 10, 13, 3, 2, MAP_POKEMON_MANSION_2F
	warp_def 25, 27, 3, 0, MAP_POKEMON_MANSION_B1F
	warp_def 34, 33, 3, 0, MAP_CINNABAR_ISLAND
	warp_def 35, 34, 0, 0, MAP_CINNABAR_ISLAND
	warp_def 19, 22, 3, 3, MAP_POKEMON_MANSION_3F
	warp_def 20, 22, 3, 4, MAP_POKEMON_MANSION_3F
	warp_def 11, 13, 0, 2, MAP_POKEMON_MANSION_2F

PokemonMansion_1F_MapBGEvents:
	bg_sign_event 5, 5, 0, BG_EVENT_PLAYER_FACING_NORTH, PokemonMansion_1F_EventScript_Statue
	bg_hidden_item_event 2, 21, 0, ITEM_MOON_STONE, FLAG_HIDDEN_ITEM_POKEMON_MANSION_1F_MOON_STONE, 1, FALSE

PokemonMansion_1F_MapEvents::
	map_events PokemonMansion_1F_ObjectEvents, PokemonMansion_1F_MapWarps, NULL, PokemonMansion_1F_MapBGEvents

