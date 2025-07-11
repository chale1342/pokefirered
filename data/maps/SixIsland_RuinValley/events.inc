@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SixIsland_RuinValley/map.json
@

	.align 2

SixIsland_RuinValley_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_SCIENTIST, 24, 25, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NONE, 0, SixIsland_RuinValley_EventScript_Scientist, FLAG_HIDE_RUIN_VALLEY_SCIENTIST
	object_event 2, OBJ_EVENT_GFX_HIKER, 32, 11, 5, MOVEMENT_TYPE_FACE_DOWN_AND_LEFT, 1, 1, TRAINER_TYPE_NORMAL, 4, SixIsland_RuinValley_EventScript_Stanly, 0
	object_event 3, OBJ_EVENT_GFX_HIKER, 33, 16, 5, MOVEMENT_TYPE_FACE_LEFT_AND_RIGHT, 1, 1, TRAINER_TYPE_NORMAL, 2, SixIsland_RuinValley_EventScript_Foster, 0
	object_event 4, OBJ_EVENT_GFX_HIKER, 31, 24, 5, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NORMAL, 1, SixIsland_RuinValley_EventScript_Larry, 0
	object_event 5, OBJ_EVENT_GFX_HIKER, 14, 10, 5, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 2, SixIsland_RuinValley_EventScript_Daryl, 0
	object_event 6, OBJ_EVENT_GFX_SUPER_NERD, 21, 29, 5, MOVEMENT_TYPE_WANDER_AROUND, 2, 3, TRAINER_TYPE_NORMAL, 1, SixIsland_RuinValley_EventScript_Hector, 0
	object_event 7, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 17, 10, 5, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, 0
	object_event 8, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 17, 12, 5, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, 0
	object_event 9, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 18, 11, 5, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, 0
	object_event 10, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 6, 33, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, 0
	object_event 11, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 6, 34, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, 0
	object_event 12, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 41, 32, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, 0
	object_event 13, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 41, 33, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, 0
	object_event 14, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 42, 33, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, 0
	object_event 15, OBJ_EVENT_GFX_ITEM_BALL, 5, 33, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SixIsland_RuinValley_EventScript_ItemHPUp, FLAG_HIDE_SIX_ISLAND_RUIN_VALLEY_HP_UP
	object_event 16, OBJ_EVENT_GFX_ITEM_BALL, 19, 11, 5, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SixIsland_RuinValley_EventScript_ItemFullRestore, FLAG_HIDE_SIX_ISLAND_RUIN_VALLEY_FULL_RESTORE
	object_event 17, OBJ_EVENT_GFX_ITEM_BALL, 43, 32, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SixIsland_RuinValley_EventScript_ItemSunStone, FLAG_HIDE_SIX_ISLAND_RUIN_VALLEY_SUN_STONE

SixIsland_RuinValley_MapWarps:
	warp_def 24, 24, 3, 0, MAP_SIX_ISLAND_DOTTED_HOLE_1F

SixIsland_RuinValley_MapBGEvents:
	bg_sign_event 24, 24, 3, BG_EVENT_PLAYER_FACING_ANY, SixIsland_RuinValley_EventScript_DottedHoleDoor

SixIsland_RuinValley_MapEvents::
	map_events SixIsland_RuinValley_ObjectEvents, SixIsland_RuinValley_MapWarps, NULL, SixIsland_RuinValley_MapBGEvents

