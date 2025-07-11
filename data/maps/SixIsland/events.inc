@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SixIsland/map.json
@

	.align 2

SixIsland_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_BOY, 10, 15, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, SixIsland_EventScript_Boy, 0
	object_event 2, OBJ_EVENT_GFX_HIKER, 15, 13, 3, MOVEMENT_TYPE_FACE_DOWN_AND_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, SixIsland_EventScript_Hiker, 0

SixIsland_MapWarps:
	warp_def 11, 23, 3, 0, MAP_SIX_ISLAND_HARBOR
	warp_def 11, 11, 0, 0, MAP_SIX_ISLAND_POKEMON_CENTER_1F
	warp_def 16, 17, 0, 0, MAP_SIX_ISLAND_HOUSE
	warp_def 20, 11, 0, 0, MAP_SIX_ISLAND_MART

SixIsland_MapBGEvents:
	bg_sign_event 9, 17, 0, BG_EVENT_PLAYER_FACING_ANY, SixIsland_EventScript_IslandSign
	bg_hidden_item_event 9, 7, 3, ITEM_LEPPA_BERRY, FLAG_HIDDEN_ITEM_SIX_ISLAND_LEPPA_BERRY, 1, FALSE

SixIsland_MapEvents::
	map_events SixIsland_ObjectEvents, SixIsland_MapWarps, NULL, SixIsland_MapBGEvents

