@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/FiveIsland_LostCave_Room1/map.json
@

	.align 2

FiveIsland_LostCave_Room1_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_HIKER, 5, 4, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NORMAL, 1, FiveIsland_LostCave_Room1_EventScript_Lawson, 0

FiveIsland_LostCave_Room1_MapWarps:
	warp_def 8, 2, 3, 1, MAP_FIVE_ISLAND_LOST_CAVE_ENTRANCE
	warp_def 5, 1, 3, 3, MAP_FIVE_ISLAND_LOST_CAVE_ROOM1
	warp_def 8, 5, 3, 3, MAP_FIVE_ISLAND_LOST_CAVE_ROOM2
	warp_def 5, 8, 3, 1, MAP_FIVE_ISLAND_LOST_CAVE_ROOM1
	warp_def 2, 5, 3, 2, MAP_FIVE_ISLAND_LOST_CAVE_ROOM1

FiveIsland_LostCave_Room1_MapEvents::
	map_events FiveIsland_LostCave_Room1_ObjectEvents, FiveIsland_LostCave_Room1_MapWarps, NULL, NULL

