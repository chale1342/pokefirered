@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/MtEmber_RubyPath_1F/map.json
@

	.align 2

MtEmber_RubyPath_1F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_ROCK_SMASH_ROCK, 18, 11, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, EventScript_RockSmash, FLAG_TEMP_12
	object_event 2, OBJ_EVENT_GFX_ROCK_SMASH_ROCK, 23, 16, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, EventScript_RockSmash, FLAG_TEMP_13
	object_event 3, OBJ_EVENT_GFX_ROCK_SMASH_ROCK, 20, 12, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, EventScript_RockSmash, FLAG_TEMP_14
	object_event 4, OBJ_EVENT_GFX_ROCK_SMASH_ROCK, 19, 7, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, EventScript_RockSmash, FLAG_TEMP_15
	object_event 5, OBJ_EVENT_GFX_ROCK_SMASH_ROCK, 21, 15, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, EventScript_RockSmash, FLAG_TEMP_16

MtEmber_RubyPath_1F_MapWarps:
	warp_def 22, 17, 3, 5, MAP_MT_EMBER_EXTERIOR
	warp_def 1, 1, 0, 0, MAP_MT_EMBER_RUBY_PATH_B1F
	warp_def 24, 5, 0, 1, MAP_MT_EMBER_RUBY_PATH_B2F_STAIRS

MtEmber_RubyPath_1F_MapEvents::
	map_events MtEmber_RubyPath_1F_ObjectEvents, MtEmber_RubyPath_1F_MapWarps, NULL, NULL

