@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/FiveIsland_LostCave_Room13/map.json
@

	.align 2

FiveIsland_LostCave_Room13_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_ITEM_BALL, 5, 5, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, FiveIsland_LostCave_Room13_EventScript_ItemMaxRevive, FLAG_HIDE_FIVE_ISLAND_LOST_CAVE_ROOM13_MAX_REVIVE

FiveIsland_LostCave_Room13_MapWarps:
	warp_def 2, 5, 3, 2, MAP_FIVE_ISLAND_LOST_CAVE_ROOM1

FiveIsland_LostCave_Room13_MapEvents::
	map_events FiveIsland_LostCave_Room13_ObjectEvents, FiveIsland_LostCave_Room13_MapWarps, NULL, NULL

