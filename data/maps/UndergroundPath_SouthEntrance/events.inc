@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/UndergroundPath_SouthEntrance/map.json
@

	.align 2

UndergroundPath_SouthEntrance_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_WOMAN_2, 5, 6, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, UndergroundPath_SouthEntrance_EventScript_Woman, 0

UndergroundPath_SouthEntrance_MapWarps:
	warp_def 5, 8, 3, 0, MAP_ROUTE6
	warp_def 6, 8, 3, 0, MAP_ROUTE6
	warp_def 7, 8, 3, 0, MAP_ROUTE6
	warp_def 7, 4, 3, 1, MAP_UNDERGROUND_PATH_NORTH_SOUTH_TUNNEL

UndergroundPath_SouthEntrance_MapEvents::
	map_events UndergroundPath_SouthEntrance_ObjectEvents, UndergroundPath_SouthEntrance_MapWarps, NULL, NULL

