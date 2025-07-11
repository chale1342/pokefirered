@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/UndergroundPath_WestEntrance/map.json
@

	.align 2

UndergroundPath_WestEntrance_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_BALDING_MAN, 5, 6, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, UndergroundPath_WestEntrance_EventScript_BaldingMan, 0

UndergroundPath_WestEntrance_MapWarps:
	warp_def 5, 8, 3, 0, MAP_ROUTE7
	warp_def 6, 8, 3, 0, MAP_ROUTE7
	warp_def 7, 8, 3, 0, MAP_ROUTE7
	warp_def 7, 4, 3, 1, MAP_UNDERGROUND_PATH_EAST_WEST_TUNNEL

UndergroundPath_WestEntrance_MapEvents::
	map_events UndergroundPath_WestEntrance_ObjectEvents, UndergroundPath_WestEntrance_MapWarps, NULL, NULL

