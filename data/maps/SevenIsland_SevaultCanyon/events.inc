@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SevenIsland_SevaultCanyon/map.json
@

	.align 2

SevenIsland_SevaultCanyon_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_BATTLE_GIRL, 13, 43, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NORMAL, 2, SevenIsland_SevaultCanyon_EventScript_Cyndy, 0
	object_event 2, OBJ_EVENT_GFX_MAN, 13, 36, 3, MOVEMENT_TYPE_FACE_DOWN_AND_RIGHT, 1, 1, TRAINER_TYPE_NORMAL, 2, SevenIsland_SevaultCanyon_EventScript_Evan, 0
	object_event 3, OBJ_EVENT_GFX_CAMPER, 3, 35, 3, MOVEMENT_TYPE_FACE_UP_LEFT_AND_RIGHT, 1, 1, TRAINER_TYPE_NORMAL, 3, SevenIsland_SevaultCanyon_EventScript_Jackson, 0
	object_event 4, OBJ_EVENT_GFX_PICNICKER, 3, 36, 3, MOVEMENT_TYPE_FACE_DOWN_LEFT_AND_RIGHT, 1, 1, TRAINER_TYPE_NORMAL, 3, SevenIsland_SevaultCanyon_EventScript_Katelyn, 0
	object_event 5, OBJ_EVENT_GFX_COOLTRAINER_M, 7, 56, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NORMAL, 1, SevenIsland_SevaultCanyon_EventScript_Leroy, 0
	object_event 6, OBJ_EVENT_GFX_COOLTRAINER_F, 11, 63, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NORMAL, 1, SevenIsland_SevaultCanyon_EventScript_Michelle, 0
	object_event 7, OBJ_EVENT_GFX_COOLTRAINER_M, 14, 13, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NORMAL, 1, SevenIsland_SevaultCanyon_EventScript_Lex, 0
	object_event 8, OBJ_EVENT_GFX_COOLTRAINER_F, 14, 14, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NORMAL, 1, SevenIsland_SevaultCanyon_EventScript_Nya, 0
	object_event 9, OBJ_EVENT_GFX_ROCK_SMASH_ROCK, 3, 41, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, EventScript_RockSmash, FLAG_TEMP_12
	object_event 10, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 13, 47, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, 0
	object_event 11, OBJ_EVENT_GFX_ROCK_SMASH_ROCK, 7, 44, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, EventScript_RockSmash, FLAG_TEMP_13
	object_event 12, OBJ_EVENT_GFX_ROCK_SMASH_ROCK, 12, 47, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, EventScript_RockSmash, FLAG_TEMP_15
	object_event 13, OBJ_EVENT_GFX_ROCK_SMASH_ROCK, 15, 46, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, EventScript_RockSmash, FLAG_TEMP_16
	object_event 14, OBJ_EVENT_GFX_ROCK_SMASH_ROCK, 16, 47, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, EventScript_RockSmash, FLAG_TEMP_17
	object_event 15, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 17, 47, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, 0
	object_event 16, OBJ_EVENT_GFX_ROCK_SMASH_ROCK, 11, 31, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, EventScript_RockSmash, FLAG_TEMP_1B
	object_event 17, OBJ_EVENT_GFX_ITEM_BALL, 18, 45, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SevenIsland_SevaultCanyon_EventScript_ItemKingsRock, FLAG_HIDE_SEVEN_ISLAND_SEVAULT_CANYON_KINGS_ROCK
	object_event 18, OBJ_EVENT_GFX_ITEM_BALL, 7, 38, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SevenIsland_SevaultCanyon_EventScript_ItemMaxElixir, FLAG_HIDE_SEVEN_ISLAND_SEVAULT_CANYON_MAX_ELIXIR
	object_event 19, OBJ_EVENT_GFX_ITEM_BALL, 17, 23, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SevenIsland_SevaultCanyon_EventScript_ItemNugget, FLAG_HIDE_SEVEN_ISLAND_SEVAULT_CANYON_NUGGET
	object_event 20, OBJ_EVENT_GFX_BLACKBELT, 8, 26, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NONE, 0, SevenIsland_SevaultCanyon_EventScript_BlackBelt, 0

SevenIsland_SevaultCanyon_MapWarps:
	warp_def 7, 17, 5, 0, MAP_SEVEN_ISLAND_SEVAULT_CANYON_TANOBY_KEY
	warp_def 14, 61, 0, 0, MAP_SEVEN_ISLAND_SEVAULT_CANYON_HOUSE

SevenIsland_SevaultCanyon_MapBGEvents:
	bg_hidden_item_event 15, 66, 3, ITEM_CHERI_BERRY, FLAG_HIDDEN_ITEM_SEVEN_ISLAND_SEVAULT_CANYON_CHERI_BERRY, 1, FALSE
	bg_sign_event 16, 71, 0, BG_EVENT_PLAYER_FACING_ANY, SevenIsland_SevaultCanyon_EventScript_RouteSign

SevenIsland_SevaultCanyon_MapEvents::
	map_events SevenIsland_SevaultCanyon_ObjectEvents, SevenIsland_SevaultCanyon_MapWarps, NULL, SevenIsland_SevaultCanyon_MapBGEvents

