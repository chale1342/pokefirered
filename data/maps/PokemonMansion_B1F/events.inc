@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/PokemonMansion_B1F/map.json
@

	.align 2

PokemonMansion_B1F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_ITEM_BALL, 6, 21, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, PokemonMansion_B1F_EventScript_ItemTM22, FLAG_HIDE_POKEMON_MANSION_B1F_TM22
	object_event 2, OBJ_EVENT_GFX_SUPER_NERD, 20, 25, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NORMAL, 1, PokemonMansion_B1F_EventScript_Lewis, 0
	object_event 3, OBJ_EVENT_GFX_SCIENTIST, 34, 13, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 6, PokemonMansion_B1F_EventScript_Ivan, 0
	object_event 4, OBJ_EVENT_GFX_ITEM_BALL, 23, 4, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, PokemonMansion_B1F_EventScript_ItemTM14, FLAG_HIDE_POKEMON_MANSION_B1F_TM14
	object_event 5, OBJ_EVENT_GFX_ITEM_BALL, 2, 29, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, PokemonMansion_B1F_EventScript_ItemFullRestore, FLAG_HIDE_POKEMON_MANSION_B1F_FULL_RESTORE
	object_event 6, OBJ_EVENT_GFX_ITEM_BALL, 5, 7, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, PokemonMansion_B1F_EventScript_ItemSecretKey, FLAG_HIDE_POKEMON_MANSION_B1F_SECRET_KEY

PokemonMansion_B1F_MapWarps:
	warp_def 34, 29, 3, 4, MAP_POKEMON_MANSION_1F

PokemonMansion_B1F_MapBGEvents:
	bg_sign_event 21, 27, 0, BG_EVENT_PLAYER_FACING_ANY, PokemonMansion_B1F_EventScript_DiarySep1st
	bg_sign_event 24, 29, 0, BG_EVENT_PLAYER_FACING_NORTH, PokemonMansion_B1F_EventScript_Statue
	bg_sign_event 27, 5, 0, BG_EVENT_PLAYER_FACING_NORTH, PokemonMansion_B1F_EventScript_Statue
	bg_hidden_item_event 35, 5, 3, ITEM_ELIXIR, FLAG_HIDDEN_ITEM_POKEMON_MANSION_B1F_ELIXIR, 1, FALSE

PokemonMansion_B1F_MapEvents::
	map_events PokemonMansion_B1F_ObjectEvents, PokemonMansion_B1F_MapWarps, NULL, PokemonMansion_B1F_MapBGEvents

