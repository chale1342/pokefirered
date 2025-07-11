@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/MtEmber_Exterior/map.json
@

	.align 2

MtEmber_Exterior_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_HIKER, 29, 45, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NONE, 0, MtEmber_Exterior_EventScript_ExplosionTutor, 0
	object_event 2, OBJ_EVENT_GFX_ROCKET_M, 41, 40, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, MtEmber_Exterior_EventScript_Grunt1, FLAG_HIDE_MT_EMBER_EXTERIOR_ROCKETS
	object_event 3, OBJ_EVENT_GFX_ROCKET_M, 42, 40, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, MtEmber_Exterior_EventScript_Grunt2, FLAG_HIDE_MT_EMBER_EXTERIOR_ROCKETS
	object_event 4, OBJ_EVENT_GFX_BATTLE_GIRL, 22, 35, 3, MOVEMENT_TYPE_WALK_SEQUENCE_DOWN_RIGHT_UP_LEFT, 5, 3, TRAINER_TYPE_NORMAL, 1, MtEmber_Exterior_EventScript_Jocelyn, 0
	object_event 5, OBJ_EVENT_GFX_CAMPER, 15, 28, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 5, MtEmber_Exterior_EventScript_Logan, 0
	object_event 6, OBJ_EVENT_GFX_PICNICKER, 14, 42, 3, MOVEMENT_TYPE_FACE_DOWN_AND_LEFT, 1, 1, TRAINER_TYPE_NORMAL, 3, MtEmber_Exterior_EventScript_Beth, 0
	object_event 7, OBJ_EVENT_GFX_ROCK_SMASH_ROCK, 29, 41, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, EventScript_RockSmash, FLAG_TEMP_12
	object_event 8, OBJ_EVENT_GFX_ROCK_SMASH_ROCK, 30, 42, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, EventScript_RockSmash, FLAG_TEMP_13
	object_event 9, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 22, 45, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, 0
	object_event 10, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 17, 46, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, 0
	object_event 11, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 36, 14, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, 0
	object_event 12, OBJ_EVENT_GFX_ROCK_SMASH_ROCK, 34, 14, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, EventScript_RockSmash, FLAG_TEMP_14
	object_event 13, OBJ_EVENT_GFX_ROCK_SMASH_ROCK, 36, 15, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, EventScript_RockSmash, FLAG_TEMP_15
	object_event 14, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 35, 14, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, 0
	object_event 15, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 35, 17, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, 0
	object_event 16, OBJ_EVENT_GFX_ROCK_SMASH_ROCK, 18, 39, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, EventScript_RockSmash, FLAG_TEMP_16
	object_event 17, OBJ_EVENT_GFX_ROCK_SMASH_ROCK, 19, 40, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, EventScript_RockSmash, FLAG_TEMP_17
	object_event 18, OBJ_EVENT_GFX_ITEM_BALL, 13, 6, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, MtEmber_Exterior_EventScript_ItemUltraBall, FLAG_HIDE_MT_EMBER_EXTERIOR_ULTRA_BALL
	object_event 19, OBJ_EVENT_GFX_ITEM_BALL, 38, 10, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, MtEmber_Exterior_EventScript_ItemFireStone, FLAG_HIDE_MT_EMBER_EXTERIOR_FIRE_STONE
	object_event 20, OBJ_EVENT_GFX_ITEM_BALL, 48, 20, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, MtEmber_Exterior_EventScript_ItemDireHit, FLAG_HIDE_MT_EMBER_EXTERIOR_DIRE_HIT

MtEmber_Exterior_MapWarps:
	warp_def 28, 48, 3, 0, MAP_ONE_ISLAND_KINDLE_ROAD
	warp_def 29, 48, 3, 1, MAP_ONE_ISLAND_KINDLE_ROAD
	warp_def 14, 24, 3, 0, MAP_MT_EMBER_SUMMIT_PATH_1F
	warp_def 39, 19, 3, 1, MAP_MT_EMBER_SUMMIT_PATH_3F
	warp_def 29, 7, 3, 0, MAP_MT_EMBER_SUMMIT
	warp_def 42, 39, 0, 0, MAP_MT_EMBER_RUBY_PATH_1F

MtEmber_Exterior_MapCoordEvents:
	coord_event 37, 43, 0, VAR_MAP_SCENE_MT_EMBER_EXTERIOR, 1, MtEmber_Exterior_EventScript_RocketPasswordScene
	coord_event 38, 43, 0, VAR_MAP_SCENE_MT_EMBER_EXTERIOR, 1, MtEmber_Exterior_EventScript_RocketPasswordScene
	coord_event 39, 43, 0, VAR_MAP_SCENE_MT_EMBER_EXTERIOR, 1, MtEmber_Exterior_EventScript_RocketPasswordScene

MtEmber_Exterior_MapBGEvents:
	bg_hidden_item_event 18, 17, 0, ITEM_FIRE_STONE, FLAG_HIDDEN_ITEM_MT_EMBER_EXTERIOR_FIRE_STONE, 1, FALSE
	bg_hidden_item_event 8, 30, 3, ITEM_ULTRA_BALL, FLAG_HIDDEN_ITEM_MT_EMBER_EXTERIOR_ULTRA_BALL, 1, FALSE

MtEmber_Exterior_MapEvents::
	map_events MtEmber_Exterior_ObjectEvents, MtEmber_Exterior_MapWarps, MtEmber_Exterior_MapCoordEvents, MtEmber_Exterior_MapBGEvents

