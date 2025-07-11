@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/CinnabarIsland/map.json
@

	.align 2

CinnabarIsland_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_WOMAN_2, 14, 6, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, CinnabarIsland_EventScript_Woman, 0
	object_event 2, OBJ_EVENT_GFX_OLD_MAN_1, 11, 11, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, CinnabarIsland_EventScript_OldMan, 0
	object_event 3, OBJ_EVENT_GFX_BILL, 20, 7, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, 0x0, FLAG_HIDE_CINNABAR_BILL
	object_event 4, OBJ_EVENT_GFX_SEAGALLOP, 23, 7, 1, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, 0x0, FLAG_HIDE_CINNABAR_SEAGALLOP

CinnabarIsland_MapWarps:
	warp_def 8, 3, 0, 1, MAP_POKEMON_MANSION_1F
	warp_def 20, 4, 0, 1, MAP_CINNABAR_ISLAND_GYM
	warp_def 8, 9, 0, 1, MAP_CINNABAR_ISLAND_POKEMON_LAB_ENTRANCE
	warp_def 14, 11, 0, 0, MAP_CINNABAR_ISLAND_POKEMON_CENTER_1F
	warp_def 19, 11, 0, 1, MAP_CINNABAR_ISLAND_MART

CinnabarIsland_MapCoordEvents:
	coord_event 20, 5, 3, VAR_TEMP_1, 0, CinnabarIsland_EventScript_GymDoorLocked

CinnabarIsland_MapBGEvents:
	bg_sign_event 12, 3, 0, BG_EVENT_PLAYER_FACING_ANY, CinnabarIsland_EventScript_IslandSign
	bg_sign_event 9, 9, 0, BG_EVENT_PLAYER_FACING_ANY, CinnabarIsland_EventScript_PokemonLabSign
	bg_sign_event 22, 5, 0, BG_EVENT_PLAYER_FACING_ANY, CinnabarIsland_EventScript_GymSign
	bg_sign_event 10, 9, 0, BG_EVENT_PLAYER_FACING_ANY, CinnabarIsland_EventScript_PokemonLabSign

CinnabarIsland_MapEvents::
	map_events CinnabarIsland_ObjectEvents, CinnabarIsland_MapWarps, CinnabarIsland_MapCoordEvents, CinnabarIsland_MapBGEvents

