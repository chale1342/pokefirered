@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/PokemonMansion_2F/map.json
@

	.align 2

PokemonMansion_2F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_SUPER_NERD, 5, 23, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NORMAL, 1, PokemonMansion_2F_EventScript_Arnie, 0
	object_event 2, OBJ_EVENT_GFX_ITEM_BALL, 36, 8, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, PokemonMansion_2F_EventScript_ItemCalcium, FLAG_HIDE_POKEMON_MANSION_2F_CALCIUM
	object_event 3, OBJ_EVENT_GFX_ITEM_BALL, 18, 23, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, PokemonMansion_2F_EventScript_ItemZinc, FLAG_HIDE_POKEMON_MANSION_2F_ZINC
	object_event 4, OBJ_EVENT_GFX_ITEM_BALL, 35, 17, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, PokemonMansion_2F_EventScript_ItemHPUp, FLAG_HIDE_POKEMON_MANSION_2F_HP_UP

PokemonMansion_2F_MapWarps:
	warp_def 9, 3, 3, 0, MAP_POKEMON_MANSION_3F
	warp_def 34, 22, 3, 1, MAP_POKEMON_MANSION_3F
	warp_def 6, 14, 3, 3, MAP_POKEMON_MANSION_1F
	warp_def 9, 14, 3, 2, MAP_POKEMON_MANSION_3F
	warp_def 27, 17, 3, 5, MAP_POKEMON_MANSION_3F

PokemonMansion_2F_MapBGEvents:
	bg_sign_event 2, 16, 0, BG_EVENT_PLAYER_FACING_NORTH, PokemonMansion_2F_EventScript_Statue
	bg_sign_event 6, 31, 0, BG_EVENT_PLAYER_FACING_ANY, PokemonMansion_2F_EventScript_DiaryJuly10th
	bg_sign_event 25, 4, 0, BG_EVENT_PLAYER_FACING_ANY, PokemonMansion_2F_EventScript_DiaryJuly5th

PokemonMansion_2F_MapEvents::
	map_events PokemonMansion_2F_ObjectEvents, PokemonMansion_2F_MapWarps, NULL, PokemonMansion_2F_MapBGEvents

