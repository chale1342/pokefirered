@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/FiveIsland_LostCave_Room4/map.json
@

	.align 2

FiveIsland_LostCave_Room4_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_WOMAN_1, 6, 4, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 1, FiveIsland_LostCave_Room4_EventScript_Laura, 0

FiveIsland_LostCave_Room4_MapWarps:
	warp_def 5, 1, 3, 0, MAP_FIVE_ISLAND_LOST_CAVE_ROOM12
	warp_def 8, 5, 3, 4, MAP_FIVE_ISLAND_LOST_CAVE_ROOM1
	warp_def 5, 8, 3, 0, MAP_FIVE_ISLAND_LOST_CAVE_ROOM5
	warp_def 2, 5, 3, 2, MAP_FIVE_ISLAND_LOST_CAVE_ROOM1

FiveIsland_LostCave_Room4_MapEvents::
	map_events FiveIsland_LostCave_Room4_ObjectEvents, FiveIsland_LostCave_Room4_MapWarps, NULL, NULL

