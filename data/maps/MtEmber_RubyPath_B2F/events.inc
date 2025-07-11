@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/MtEmber_RubyPath_B2F/map.json
@

	.align 2

MtEmber_RubyPath_B2F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 9, 3, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, 0
	object_event 2, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 12, 5, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, 0
	object_event 3, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 12, 2, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, 0
	object_event 4, OBJ_EVENT_GFX_ROCK_SMASH_ROCK, 4, 8, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, EventScript_RockSmash, FLAG_TEMP_12
	object_event 5, OBJ_EVENT_GFX_ROCK_SMASH_ROCK, 1, 8, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, EventScript_RockSmash, FLAG_TEMP_13
	object_event 6, OBJ_EVENT_GFX_ROCK_SMASH_ROCK, 4, 5, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, EventScript_RockSmash, FLAG_TEMP_14
	object_event 7, OBJ_EVENT_GFX_ROCK_SMASH_ROCK, 5, 5, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, EventScript_RockSmash, FLAG_TEMP_15

MtEmber_RubyPath_B2F_MapWarps:
	warp_def 1, 7, 3, 1, MAP_MT_EMBER_RUBY_PATH_B1F
	warp_def 13, 9, 3, 0, MAP_MT_EMBER_RUBY_PATH_B3F

MtEmber_RubyPath_B2F_MapEvents::
	map_events MtEmber_RubyPath_B2F_ObjectEvents, MtEmber_RubyPath_B2F_MapWarps, NULL, NULL

