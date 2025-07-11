@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/FiveIsland/map.json
@

	.align 2

FiveIsland_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_FISHER, 8, 5, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, FiveIsland_EventScript_Fisher, 0
	object_event 2, OBJ_EVENT_GFX_BUG_CATCHER, 16, 10, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, FiveIsland_EventScript_BugCatcher, 0
	clone_event 3, OBJ_EVENT_GFX_CUT_TREE, 32, 9, LOCALID_FIVE_ISLAND_MEADOW_BORDER_TREE, MAP_FIVE_ISLAND_MEADOW

FiveIsland_MapWarps:
	warp_def 12, 14, 3, 0, MAP_FIVE_ISLAND_HARBOR
	warp_def 18, 6, 0, 0, MAP_FIVE_ISLAND_POKEMON_CENTER_1F
	warp_def 12, 6, 0, 0, MAP_FIVE_ISLAND_HOUSE1
	warp_def 22, 9, 0, 0, MAP_FIVE_ISLAND_HOUSE2

FiveIsland_MapBGEvents:
	bg_sign_event 20, 8, 0, BG_EVENT_PLAYER_FACING_ANY, FiveIsland_EventScript_IslandSign

FiveIsland_MapEvents::
	map_events FiveIsland_ObjectEvents, FiveIsland_MapWarps, NULL, FiveIsland_MapBGEvents

