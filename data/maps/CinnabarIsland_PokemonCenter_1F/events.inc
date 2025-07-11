@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/CinnabarIsland_PokemonCenter_1F/map.json
@

	.align 2

CinnabarIsland_PokemonCenter_1F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_NURSE, 7, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, CinnabarIsland_PokemonCenter_1F_EventScript_Nurse, 0
	object_event 2, OBJ_EVENT_GFX_COOLTRAINER_F, 2, 4, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, CinnabarIsland_PokemonCenter_1F_EventScript_CooltrainerF, 0
	object_event 3, OBJ_EVENT_GFX_GENTLEMAN, 9, 7, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, CinnabarIsland_PokemonCenter_1F_EventScript_Gentleman, 0
	object_event 4, OBJ_EVENT_GFX_YOUNGSTER, 14, 6, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, CinnabarIsland_PokemonCenter_1F_EventScript_Youngster, 0
	object_event 5, 0, 2, 1, 0, MOVEMENT_TYPE_INVISIBLE, 1, 1, TRAINER_TYPE_NONE, 0, CinnabarIsland_PokemonCenter_1F_EventScript_PokemonJournalMrFuji, FLAG_HIDE_POSTGAME_GOSSIPERS
	object_event 6, 0, 3, 1, 0, MOVEMENT_TYPE_INVISIBLE, 1, 1, TRAINER_TYPE_NONE, 0, CinnabarIsland_PokemonCenter_1F_EventScript_PokemonJournalMrFuji, FLAG_HIDE_POSTGAME_GOSSIPERS
	object_event 7, OBJ_EVENT_GFX_BILL, 11, 5, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, CinnabarIsland_PokemonCenter_1F_EventScript_Bill, FLAG_HIDE_CINNABAR_POKECENTER_BILL

CinnabarIsland_PokemonCenter_1F_MapWarps:
	warp_def 7, 8, 0, 3, MAP_CINNABAR_ISLAND
	warp_def 6, 8, 3, 3, MAP_CINNABAR_ISLAND
	warp_def 8, 8, 0, 3, MAP_CINNABAR_ISLAND
	warp_def 1, 6, 4, 0, MAP_CINNABAR_ISLAND_POKEMON_CENTER_2F

CinnabarIsland_PokemonCenter_1F_MapEvents::
	map_events CinnabarIsland_PokemonCenter_1F_ObjectEvents, CinnabarIsland_PokemonCenter_1F_MapWarps, NULL, NULL

