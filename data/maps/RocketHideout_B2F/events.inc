@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/RocketHideout_B2F/map.json
@

	.align 2

RocketHideout_B2F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_ROCKET_M, 20, 6, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NORMAL, 2, RocketHideout_B2F_EventScript_Grunt, FLAG_HIDE_MISC_KANTO_ROCKETS
	object_event 2, OBJ_EVENT_GFX_ITEM_BALL, 15, 3, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, RocketHideout_B2F_EventScript_ItemXSpeed, FLAG_HIDE_ROCKET_HIDEOUT_B2F_X_SPEED
	object_event 3, OBJ_EVENT_GFX_ITEM_BALL, 2, 5, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, RocketHideout_B2F_EventScript_ItemMoonStone, FLAG_HIDE_ROCKET_HIDEOUT_B2F_MOON_STONE
	object_event 4, OBJ_EVENT_GFX_ITEM_BALL, 5, 7, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, RocketHideout_B2F_EventScript_ItemTM12, FLAG_HIDE_ROCKET_HIDEOUT_B2F_TM12
	object_event 5, OBJ_EVENT_GFX_ITEM_BALL, 0, 14, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, RocketHideout_B2F_EventScript_ItemSuperPotion, FLAG_HIDE_ROCKET_HIDEOUT_B2F_SUPER_POTION

RocketHideout_B2F_MapWarps:
	warp_def 21, 2, 3, 0, MAP_ROCKET_HIDEOUT_B3F
	warp_def 28, 2, 3, 1, MAP_ROCKET_HIDEOUT_B1F
	warp_def 23, 12, 3, 2, MAP_ROCKET_HIDEOUT_B1F
	warp_def 28, 16, 0, 1, MAP_ROCKET_HIDEOUT_ELEVATOR
	warp_def 29, 16, 0, 1, MAP_ROCKET_HIDEOUT_ELEVATOR

RocketHideout_B2F_MapEvents::
	map_events RocketHideout_B2F_ObjectEvents, RocketHideout_B2F_MapWarps, NULL, NULL

