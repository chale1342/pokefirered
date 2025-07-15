@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/TwoIsland/map.json
@

	.align 2

TwoIsland_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_CLERK, 28, 4, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 2, TRAINER_TYPE_NONE, 0, TwoIsland_EventScript_Clerk, 0
	object_event 2, OBJ_EVENT_GFX_WOMAN_1, 31, 6, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NONE, 0, TwoIsland_EventScript_Woman, FLAG_HIDE_TWO_ISLAND_WOMAN
	object_event 3, OBJ_EVENT_GFX_BEAUTY, 30, 11, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NONE, 0, TwoIsland_EventScript_Beauty, FLAG_HIDE_TWO_ISLAND_BEAUTY
	object_event 4, OBJ_EVENT_GFX_SAILOR, 26, 5, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, TwoIsland_EventScript_Sailor, 0
	object_event 5, OBJ_EVENT_GFX_SUPER_NERD, 27, 6, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, TwoIsland_EventScript_SuperNerd, FLAG_HIDE_TWO_ISLAND_SUPER_NERD
	object_event 6, OBJ_EVENT_GFX_CUT_TREE, 30, 16, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, EventScript_CutTree, FLAG_CUT_TREE_TWO_ISLAND_1
	object_event 7, OBJ_EVENT_GFX_ITEM_BALL, 39, 16, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, TwoIsland_EventScript_ItemRevive, FLAG_HIDE_TWO_ISLAND_REVIVE
	object_event 8, OBJ_EVENT_GFX_LITTLE_BOY, 37, 12, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, TwoIsland_EventScript_LittleBoy, 0
	object_event 9, OBJ_EVENT_GFX_BOY, 24, 12, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, TwoIsland_EventScript_Boy, 0

TwoIsland_MapWarps:
	warp_def 39, 9, 0, 0, MAP_TWO_ISLAND_JOYFUL_GAME_CORNER
	warp_def 33, 9, 0, 0, MAP_TWO_ISLAND_HOUSE
	warp_def 21, 7, 0, 0, MAP_TWO_ISLAND_POKEMON_CENTER_1F
	warp_def 10, 8, 3, 0, MAP_TWO_ISLAND_HARBOR

TwoIsland_MapBGEvents:
	bg_sign_event 29, 8, 0, BG_EVENT_PLAYER_FACING_ANY, TwoIsland_EventScript_IslandSign
	bg_sign_event 40, 10, 0, BG_EVENT_PLAYER_FACING_ANY, TwoIsland_EventScript_JoyfulGameCornerSign
	bg_sign_event 8, 3, 0, BG_EVENT_PLAYER_FACING_ANY, TwoIsland_EventScript_FastCurrentSign

TwoIsland_MapEvents::
	map_events TwoIsland_ObjectEvents, TwoIsland_MapWarps, NULL, TwoIsland_MapBGEvents

