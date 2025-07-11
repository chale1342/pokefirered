@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/MtEmber_RubyPath_B3F/map.json
@

	.align 2

MtEmber_RubyPath_B3F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 10, 4, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, 0
	object_event 2, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 26, 12, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, 0
	object_event 3, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 28, 8, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, 0
	object_event 4, OBJ_EVENT_GFX_ROCK_SMASH_ROCK, 7, 2, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, EventScript_RockSmash, FLAG_TEMP_12
	object_event 5, OBJ_EVENT_GFX_ROCK_SMASH_ROCK, 4, 3, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, EventScript_RockSmash, FLAG_TEMP_13
	object_event 6, OBJ_EVENT_GFX_ROCK_SMASH_ROCK, 6, 6, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, EventScript_RockSmash, FLAG_TEMP_14
	object_event 7, OBJ_EVENT_GFX_ROCK_SMASH_ROCK, 7, 6, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, EventScript_RockSmash, FLAG_TEMP_15
	object_event 8, OBJ_EVENT_GFX_ROCK_SMASH_ROCK, 4, 5, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, EventScript_RockSmash, FLAG_TEMP_16
	object_event 9, OBJ_EVENT_GFX_ROCK_SMASH_ROCK, 5, 2, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, EventScript_RockSmash, FLAG_TEMP_17
	object_event 10, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 15, 13, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, 0

MtEmber_RubyPath_B3F_MapWarps:
	warp_def 1, 4, 0, 1, MAP_MT_EMBER_RUBY_PATH_B2F
	warp_def 19, 19, 3, 0, MAP_MT_EMBER_RUBY_PATH_B1F_STAIRS
	warp_def 5, 19, 3, 1, MAP_MT_EMBER_RUBY_PATH_B4F

MtEmber_RubyPath_B3F_MapEvents::
	map_events MtEmber_RubyPath_B3F_ObjectEvents, MtEmber_RubyPath_B3F_MapWarps, NULL, NULL

