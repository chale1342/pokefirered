@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/TwoIsland_JoyfulGameCorner/map.json
@

	.align 2

TwoIsland_JoyfulGameCorner_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_BALDING_MAN, 5, 5, 1, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, TwoIsland_JoyfulGameCorner_EventScript_LostellesDaddy, 0
	object_event 2, OBJ_EVENT_GFX_BIKER, 5, 8, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NONE, 0, 0x0, FLAG_HIDE_TWO_ISLAND_GAME_CORNER_BIKER
	object_event 3, OBJ_EVENT_GFX_LITTLE_GIRL, 6, 5, 1, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, TwoIsland_JoyfulGameCorner_EventScript_Lostelle, FLAG_HIDE_TWO_ISLAND_GAME_CORNER_LOSTELLE
	object_event 4, OBJ_EVENT_GFX_MAN, 4, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, TwoIsland_JoyfulGameCorner_EventScript_InfoMan, 0

TwoIsland_JoyfulGameCorner_MapWarps:
	warp_def 5, 8, 3, 0, MAP_TWO_ISLAND

TwoIsland_JoyfulGameCorner_MapBGEvents:
	bg_sign_event 1, 1, 0, BG_EVENT_PLAYER_FACING_ANY, TwoIsland_JoyfulGameCorner_EventScript_ShowPokemonJumpRecords
	bg_sign_event 0, 1, 0, BG_EVENT_PLAYER_FACING_ANY, TwoIsland_JoyfulGameCorner_EventScript_ShowDodrioBerryPickingRecords

TwoIsland_JoyfulGameCorner_MapEvents::
	map_events TwoIsland_JoyfulGameCorner_ObjectEvents, TwoIsland_JoyfulGameCorner_MapWarps, NULL, TwoIsland_JoyfulGameCorner_MapBGEvents

