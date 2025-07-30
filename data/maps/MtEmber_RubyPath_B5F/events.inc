@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/MtEmber_RubyPath_B5F/map.json
@

	.align 2

MtEmber_RubyPath_B5F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_RUBY, 7, 7, 0, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, MtEmber_RubyPath_B5F_EventScript_Ruby, FLAG_HIDE_RUBY

MtEmber_RubyPath_B5F_MapWarps:
	warp_def 11, 7, 3, 0, MAP_MT_EMBER_RUBY_PATH_B4F

MtEmber_RubyPath_B5F_MapBGEvents:
	bg_sign_event 7, 2, 0, BG_EVENT_PLAYER_FACING_NORTH, MtEmber_RubyPath_B5F_EventScript_BrailleMessage

MtEmber_RubyPath_B5F_MapEvents::
	map_events MtEmber_RubyPath_B5F_ObjectEvents, MtEmber_RubyPath_B5F_MapWarps, NULL, MtEmber_RubyPath_B5F_MapBGEvents

