@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/PokemonMansion_3F/map.json
@

	.align 2

PokemonMansion_3F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_SUPER_NERD, 7, 13, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NORMAL, 1, PokemonMansion_3F_EventScript_Simon, 0
	object_event 2, OBJ_EVENT_GFX_SCIENTIST, 22, 13, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 1, PokemonMansion_3F_EventScript_Braydon, 0
	object_event 3, OBJ_EVENT_GFX_ITEM_BALL, 9, 19, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, PokemonMansion_3F_EventScript_ItemMaxPotion, FLAG_HIDE_POKEMON_MANSION_3F_MAX_POTION
	object_event 4, OBJ_EVENT_GFX_ITEM_BALL, 32, 6, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, PokemonMansion_3F_EventScript_ItemIron, FLAG_HIDE_POKEMON_MANSION_3F_IRON

PokemonMansion_3F_MapWarps:
	warp_def 8, 3, 3, 0, MAP_POKEMON_MANSION_2F
	warp_def 34, 18, 3, 1, MAP_POKEMON_MANSION_2F
	warp_def 11, 11, 3, 3, MAP_POKEMON_MANSION_2F
	warp_def 18, 18, 3, 7, MAP_POKEMON_MANSION_1F
	warp_def 19, 18, 3, 8, MAP_POKEMON_MANSION_1F
	warp_def 23, 18, 3, 4, MAP_POKEMON_MANSION_2F
	warp_def 20, 18, 3, 8, MAP_POKEMON_MANSION_1F
	warp_def 24, 18, 3, 4, MAP_POKEMON_MANSION_2F

PokemonMansion_3F_MapBGEvents:
	bg_sign_event 8, 16, 0, BG_EVENT_PLAYER_FACING_ANY, PokemonMansion_3F_EventScript_DiaryFeb6th
	bg_sign_event 12, 5, 0, BG_EVENT_PLAYER_FACING_NORTH, PokemonMansion_3F_EventScript_Statue
	bg_hidden_item_event 36, 13, 3, ITEM_RARE_CANDY, FLAG_HIDDEN_ITEM_POKEMON_MANSION_3F_RARE_CANDY, 1, FALSE

PokemonMansion_3F_MapEvents::
	map_events PokemonMansion_3F_ObjectEvents, PokemonMansion_3F_MapWarps, NULL, PokemonMansion_3F_MapBGEvents

