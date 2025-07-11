@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/OneIsland_PokemonCenter_1F/map.json
@

	.align 2

OneIsland_PokemonCenter_1F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_NURSE, 5, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, OneIsland_PokemonCenter_1F_EventScript_Nurse, 0
	object_event 2, OBJ_EVENT_GFX_BILL, 14, 6, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NONE, 0, OneIsland_PokemonCenter_1F_EventScript_Bill, FLAG_HIDE_ONE_ISLAND_POKECENTER_BILL
	object_event 3, OBJ_EVENT_GFX_CELIO, 15, 6, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NONE, 0, OneIsland_PokemonCenter_1F_EventScript_Celio, FLAG_HIDE_ONE_ISLAND_POKECENTER_CELIO
	object_event 4, OBJ_EVENT_GFX_LITTLE_BOY, 6, 8, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, OneIsland_PokemonCenter_1F_EventScript_LittleBoy, 0
	object_event 5, OBJ_EVENT_GFX_HIKER, 3, 7, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, OneIsland_PokemonCenter_1F_EventScript_Hiker, 0
	object_event 6, OBJ_EVENT_GFX_BATTLE_GIRL, 7, 4, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, OneIsland_PokemonCenter_1F_EventScript_BattleGirl, 0

OneIsland_PokemonCenter_1F_MapWarps:
	warp_def 9, 9, 3, 0, MAP_ONE_ISLAND
	warp_def 1, 5, 4, 0, MAP_ONE_ISLAND_POKEMON_CENTER_2F

OneIsland_PokemonCenter_1F_MapCoordEvents:
	coord_event 12, 6, 3, VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 2, OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandTriggerTop
	coord_event 12, 7, 3, VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 2, OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandTriggerMidTop
	coord_event 12, 8, 3, VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 2, OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandTriggerMidBottom
	coord_event 12, 9, 3, VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 2, OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandTriggerBottom

OneIsland_PokemonCenter_1F_MapBGEvents:
	bg_sign_event 12, 2, 0, BG_EVENT_PLAYER_FACING_ANY, OneIsland_PokemonCenter_1F_EventScript_NetworkMachine
	bg_sign_event 12, 3, 0, BG_EVENT_PLAYER_FACING_ANY, OneIsland_PokemonCenter_1F_EventScript_NetworkMachine
	bg_sign_event 12, 4, 0, BG_EVENT_PLAYER_FACING_ANY, OneIsland_PokemonCenter_1F_EventScript_NetworkMachine
	bg_sign_event 12, 5, 0, BG_EVENT_PLAYER_FACING_ANY, OneIsland_PokemonCenter_1F_EventScript_NetworkMachine
	bg_sign_event 13, 5, 0, BG_EVENT_PLAYER_FACING_ANY, OneIsland_PokemonCenter_1F_EventScript_NetworkMachine
	bg_sign_event 15, 5, 0, BG_EVENT_PLAYER_FACING_ANY, OneIsland_PokemonCenter_1F_EventScript_NetworkMachine
	bg_sign_event 14, 5, 0, BG_EVENT_PLAYER_FACING_ANY, OneIsland_PokemonCenter_1F_EventScript_NetworkMachine
	bg_sign_event 16, 5, 0, BG_EVENT_PLAYER_FACING_ANY, OneIsland_PokemonCenter_1F_EventScript_NetworkMachine
	bg_sign_event 17, 5, 0, BG_EVENT_PLAYER_FACING_ANY, OneIsland_PokemonCenter_1F_EventScript_NetworkMachine

OneIsland_PokemonCenter_1F_MapEvents::
	map_events OneIsland_PokemonCenter_1F_ObjectEvents, OneIsland_PokemonCenter_1F_MapWarps, OneIsland_PokemonCenter_1F_MapCoordEvents, OneIsland_PokemonCenter_1F_MapBGEvents

