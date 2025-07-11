@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/UndergroundPath_EastEntrance/map.json
@

	.align 2

UndergroundPath_EastEntrance_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_WOMAN_2, 5, 6, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, UndergroundPath_EastEntrance_EventScript_Woman, 0

UndergroundPath_EastEntrance_MapWarps:
	warp_def 5, 8, 3, 0, MAP_ROUTE8
	warp_def 6, 8, 3, 0, MAP_ROUTE8
	warp_def 7, 8, 3, 0, MAP_ROUTE8
	warp_def 7, 4, 3, 0, MAP_UNDERGROUND_PATH_EAST_WEST_TUNNEL

UndergroundPath_EastEntrance_MapEvents::
	map_events UndergroundPath_EastEntrance_ObjectEvents, UndergroundPath_EastEntrance_MapWarps, NULL, NULL

