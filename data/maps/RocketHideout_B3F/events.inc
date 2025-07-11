@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/RocketHideout_B3F/map.json
@

	.align 2

RocketHideout_B3F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_ROCKET_M, 19, 9, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NORMAL, 4, RocketHideout_B3F_EventScript_Grunt2, FLAG_HIDE_MISC_KANTO_ROCKETS
	object_event 2, OBJ_EVENT_GFX_ROCKET_M, 2, 20, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NORMAL, 2, RocketHideout_B3F_EventScript_Grunt1, FLAG_HIDE_MISC_KANTO_ROCKETS
	object_event 3, OBJ_EVENT_GFX_ITEM_BALL, 12, 12, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, RocketHideout_B3F_EventScript_ItemRareCandy, FLAG_HIDE_ROCKET_HIDEOUT_B3F_RARE_CANDY
	object_event 4, OBJ_EVENT_GFX_ITEM_BALL, 19, 14, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, RocketHideout_B3F_EventScript_ItemTM21, FLAG_HIDE_ROCKET_HIDEOUT_B3F_TM21
	object_event 5, OBJ_EVENT_GFX_ITEM_BALL, 14, 24, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, RocketHideout_B3F_EventScript_ItemBlackGlasses, FLAG_HIDE_ROCKET_HIDEOUT_B3F_BLACK_GLASSES

RocketHideout_B3F_MapWarps:
	warp_def 18, 2, 3, 0, MAP_ROCKET_HIDEOUT_B2F
	warp_def 15, 18, 3, 0, MAP_ROCKET_HIDEOUT_B4F

RocketHideout_B3F_MapBGEvents:
	bg_hidden_item_event 1, 3, 3, ITEM_NUGGET, FLAG_HIDDEN_ITEM_ROCKET_HIDEOUT_B3F_NUGGET, 1, FALSE

RocketHideout_B3F_MapEvents::
	map_events RocketHideout_B3F_ObjectEvents, RocketHideout_B3F_MapWarps, NULL, RocketHideout_B3F_MapBGEvents

