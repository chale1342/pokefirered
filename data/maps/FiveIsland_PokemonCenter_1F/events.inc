@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/FiveIsland_PokemonCenter_1F/map.json
@

	.align 2

FiveIsland_PokemonCenter_1F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_NURSE, 7, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, FiveIsland_PokemonCenter_1F_EventScript_Nurse, 0
	object_event 2, OBJ_EVENT_GFX_COOLTRAINER_F, 9, 4, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NONE, 0, FiveIsland_PokemonCenter_1F_EventScript_CooltrainerF, 0
	object_event 3, OBJ_EVENT_GFX_CHEF, 4, 8, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, FiveIsland_PokemonCenter_1F_EventScript_Chef, 0
	object_event 4, 0, 2, 1, 0, MOVEMENT_TYPE_INVISIBLE, 1, 1, TRAINER_TYPE_NONE, 0, FiveIsland_PokemonCenter_1F_EventScript_PokemonJournal, FLAG_HIDE_POSTGAME_GOSSIPERS
	object_event 5, 0, 3, 1, 0, MOVEMENT_TYPE_INVISIBLE, 1, 1, TRAINER_TYPE_NONE, 0, FiveIsland_PokemonCenter_1F_EventScript_PokemonJournal, FLAG_HIDE_POSTGAME_GOSSIPERS

FiveIsland_PokemonCenter_1F_MapWarps:
	warp_def 7, 8, 3, 1, MAP_FIVE_ISLAND
	warp_def 1, 6, 4, 0, MAP_FIVE_ISLAND_POKEMON_CENTER_2F

FiveIsland_PokemonCenter_1F_MapEvents::
	map_events FiveIsland_PokemonCenter_1F_ObjectEvents, FiveIsland_PokemonCenter_1F_MapWarps, NULL, NULL

