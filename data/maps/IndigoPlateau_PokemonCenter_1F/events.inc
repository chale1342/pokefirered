@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/IndigoPlateau_PokemonCenter_1F/map.json
@

	.align 2

IndigoPlateau_PokemonCenter_1F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_CLERK, 0, 7, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, IndigoPlateau_PokemonCenter_1F_EventScript_Clerk, 0
	object_event 2, OBJ_EVENT_GFX_NURSE, 13, 10, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, IndigoPlateau_PokemonCenter_1F_EventScript_Nurse, 0
	object_event 3, OBJ_EVENT_GFX_GYM_GUY, 7, 14, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, IndigoPlateau_PokemonCenter_1F_EventScript_GymGuy, 0
	object_event 4, OBJ_EVENT_GFX_COOLTRAINER_F, 5, 3, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, IndigoPlateau_PokemonCenter_1F_EventScript_DoorGuard, 0
	object_event 5, OBJ_EVENT_GFX_BLACKBELT, 23, 13, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, IndigoPlateau_PokemonCenter_1F_EventScript_BlackBelt, FLAG_HIDE_POSTGAME_GOSSIPERS
	object_event 6, 0, 22, 9, 0, MOVEMENT_TYPE_INVISIBLE, 1, 1, TRAINER_TYPE_NONE, 0, IndigoPlateau_PokemonCenter_1F_EventScript_PokemonJournal, FLAG_HIDE_POSTGAME_GOSSIPERS
	object_event 7, OBJ_EVENT_GFX_COOLTRAINER_M, 16, 15, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, IndigoPlateau_PokemonCenter_1F_EventScript_CooltrainerM, FLAG_HIDE_POSTGAME_GOSSIPERS
	object_event 8, 0, 23, 9, 0, MOVEMENT_TYPE_INVISIBLE, 1, 1, TRAINER_TYPE_NONE, 0, IndigoPlateau_PokemonCenter_1F_EventScript_PokemonJournal, FLAG_HIDE_POSTGAME_GOSSIPERS

IndigoPlateau_PokemonCenter_1F_MapWarps:
	warp_def 11, 16, 3, 0, MAP_INDIGO_PLATEAU_EXTERIOR
	warp_def 4, 1, 3, 0, MAP_POKEMON_LEAGUE_LORELEIS_ROOM
	warp_def 1, 14, 4, 0, MAP_INDIGO_PLATEAU_POKEMON_CENTER_2F

IndigoPlateau_PokemonCenter_1F_MapEvents::
	map_events IndigoPlateau_PokemonCenter_1F_ObjectEvents, IndigoPlateau_PokemonCenter_1F_MapWarps, NULL, NULL

