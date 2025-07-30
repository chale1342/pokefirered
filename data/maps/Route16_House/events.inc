@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Route16_House/map.json
@

	.align 2

Route16_House_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_WOMAN_1, 4, 2, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, Route16_House_EventScript_Woman, 0
	object_event 2, OBJ_EVENT_GFX_FEAROW, 9, 3, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, Route16_House_EventScript_Fearow, 0

Route16_House_MapWarps:
	warp_def 3, 7, 3, 0, MAP_ROUTE16
	warp_def 4, 7, 3, 0, MAP_ROUTE16
	warp_def 5, 7, 3, 0, MAP_ROUTE16

Route16_House_MapEvents::
	map_events Route16_House_ObjectEvents, Route16_House_MapWarps, NULL, NULL

