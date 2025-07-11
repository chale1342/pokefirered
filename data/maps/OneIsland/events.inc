@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/OneIsland/map.json
@

	.align 2

OneIsland_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_BILL, 12, 16, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, 0x0, FLAG_HIDE_ONE_ISLAND_BILL
	object_event 2, OBJ_EVENT_GFX_OLD_MAN_1, 16, 12, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, OneIsland_EventScript_OldMan, 0
	object_event 3, OBJ_EVENT_GFX_BALDING_MAN, 13, 9, 3, MOVEMENT_TYPE_FACE_DOWN_AND_UP, 1, 1, TRAINER_TYPE_NONE, 0, OneIsland_EventScript_BaldingMan, 0

OneIsland_MapWarps:
	warp_def 14, 5, 0, 0, MAP_ONE_ISLAND_POKEMON_CENTER_1F
	warp_def 19, 9, 0, 0, MAP_ONE_ISLAND_HOUSE1
	warp_def 8, 11, 0, 0, MAP_ONE_ISLAND_HOUSE2
	warp_def 12, 18, 3, 0, MAP_ONE_ISLAND_HARBOR

OneIsland_MapBGEvents:
	bg_sign_event 14, 13, 0, BG_EVENT_PLAYER_FACING_ANY, OneIsland_EventScript_IslandSign
	bg_sign_event 15, 6, 0, BG_EVENT_PLAYER_FACING_ANY, OneIsland_EventScript_PokemonNetCenterSign

OneIsland_MapEvents::
	map_events OneIsland_ObjectEvents, OneIsland_MapWarps, NULL, OneIsland_MapBGEvents

