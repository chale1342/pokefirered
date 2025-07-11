@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Route2_EastBuilding/map.json
@

	.align 2

Route2_EastBuilding_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_SCIENTIST, 4, 6, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, Route2_EastBuilding_EventScript_Aide, 0
	object_event 2, OBJ_EVENT_GFX_ROCKER, 10, 3, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 2, 1, TRAINER_TYPE_NONE, 0, Route2_EastBuilding_EventScript_Rocker, 0

Route2_EastBuilding_MapWarps:
	warp_def 6, 10, 0, 5, MAP_ROUTE2
	warp_def 7, 10, 3, 5, MAP_ROUTE2
	warp_def 8, 10, 3, 5, MAP_ROUTE2
	warp_def 7, 1, 3, 6, MAP_ROUTE2

Route2_EastBuilding_MapEvents::
	map_events Route2_EastBuilding_ObjectEvents, Route2_EastBuilding_MapWarps, NULL, NULL

