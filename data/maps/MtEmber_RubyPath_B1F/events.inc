@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/MtEmber_RubyPath_B1F/map.json
@

	.align 2

MtEmber_RubyPath_B1F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_ROCK_SMASH_ROCK, 1, 8, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, EventScript_RockSmash, FLAG_TEMP_12
	object_event 2, OBJ_EVENT_GFX_ROCK_SMASH_ROCK, 1, 11, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, EventScript_RockSmash, FLAG_TEMP_13
	object_event 3, OBJ_EVENT_GFX_ROCK_SMASH_ROCK, 3, 12, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, EventScript_RockSmash, FLAG_TEMP_14
	object_event 4, OBJ_EVENT_GFX_ROCK_SMASH_ROCK, 5, 14, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, EventScript_RockSmash, FLAG_TEMP_15

MtEmber_RubyPath_B1F_MapWarps:
	warp_def 9, 21, 0, 1, MAP_MT_EMBER_RUBY_PATH_1F
	warp_def 6, 1, 0, 0, MAP_MT_EMBER_RUBY_PATH_B2F

MtEmber_RubyPath_B1F_MapEvents::
	map_events MtEmber_RubyPath_B1F_ObjectEvents, MtEmber_RubyPath_B1F_MapWarps, NULL, NULL

