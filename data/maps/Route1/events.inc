@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Route1/map.json
@

	.align 2

Route1_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_CLERK, 6, 28, 3, MOVEMENT_TYPE_WANDER_UP_AND_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, Route1_EventScript_MartClerk, 0
	object_event 2, OBJ_EVENT_GFX_BOY, 19, 16, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 3, TRAINER_TYPE_NONE, 0, Route1_EventScript_Boy, 0

Route1_MapBGEvents:
	bg_sign_event 9, 31, 0, BG_EVENT_PLAYER_FACING_ANY, Route1_EventScript_RouteSign

Route1_MapEvents::
	map_events Route1_ObjectEvents, NULL, NULL, Route1_MapBGEvents

