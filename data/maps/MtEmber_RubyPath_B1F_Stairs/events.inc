@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/MtEmber_RubyPath_B1F_Stairs/map.json
@

	.align 2

MtEmber_RubyPath_B1F_Stairs_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_ROCK_SMASH_ROCK, 4, 2, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, EventScript_RockSmash, FLAG_TEMP_12

MtEmber_RubyPath_B1F_Stairs_MapWarps:
	warp_def 4, 1, 0, 1, MAP_MT_EMBER_RUBY_PATH_B3F
	warp_def 1, 5, 0, 0, MAP_MT_EMBER_RUBY_PATH_B2F_STAIRS

MtEmber_RubyPath_B1F_Stairs_MapEvents::
	map_events MtEmber_RubyPath_B1F_Stairs_ObjectEvents, MtEmber_RubyPath_B1F_Stairs_MapWarps, NULL, NULL

