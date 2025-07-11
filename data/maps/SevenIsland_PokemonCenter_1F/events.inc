@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SevenIsland_PokemonCenter_1F/map.json
@

	.align 2

SevenIsland_PokemonCenter_1F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_NURSE, 7, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SevenIsland_PokemonCenter_1F_EventScript_Nurse, 0
	object_event 2, OBJ_EVENT_GFX_OLD_MAN_1, 11, 5, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SevenIsland_PokemonCenter_1F_EventScript_OldMan, 0
	object_event 3, OBJ_EVENT_GFX_SAILOR, 14, 6, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, SevenIsland_PokemonCenter_1F_EventScript_Sailor, 0
	object_event 4, OBJ_EVENT_GFX_BEAUTY, 4, 4, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, SevenIsland_PokemonCenter_1F_EventScript_Beauty, 0
	object_event 5, 0, 3, 1, 0, MOVEMENT_TYPE_INVISIBLE, 1, 1, TRAINER_TYPE_NONE, 0, SevenIsland_PokemonCenter_1F_EventScript_PokemonJournal, FLAG_HIDE_POSTGAME_GOSSIPERS
	object_event 6, 0, 2, 1, 0, MOVEMENT_TYPE_INVISIBLE, 1, 1, TRAINER_TYPE_NONE, 0, SevenIsland_PokemonCenter_1F_EventScript_PokemonJournal, FLAG_HIDE_POSTGAME_GOSSIPERS

SevenIsland_PokemonCenter_1F_MapWarps:
	warp_def 7, 8, 3, 2, MAP_SEVEN_ISLAND
	warp_def 1, 6, 4, 0, MAP_SEVEN_ISLAND_POKEMON_CENTER_2F

SevenIsland_PokemonCenter_1F_MapEvents::
	map_events SevenIsland_PokemonCenter_1F_ObjectEvents, SevenIsland_PokemonCenter_1F_MapWarps, NULL, NULL

