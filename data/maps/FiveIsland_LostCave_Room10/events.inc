@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/FiveIsland_LostCave_Room10/map.json
@

	.align 2

FiveIsland_LostCave_Room10_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_WOMAN_2, 5, 5, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NONE, 0, 0x0, FLAG_HIDE_LOST_CAVE_SELPHY
	object_event 2, OBJ_EVENT_GFX_ITEM_BALL, 5, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, FiveIsland_LostCave_Room10_EventScript_ItemSilkScarf, FLAG_HIDE_FIVE_ISLAND_LOST_CAVE_ROOM10_SILK_SCARF

FiveIsland_LostCave_Room10_MapWarps:
	warp_def 5, 8, 3, 1, MAP_FIVE_ISLAND_LOST_CAVE_ROOM1

FiveIsland_LostCave_Room10_MapEvents::
	map_events FiveIsland_LostCave_Room10_ObjectEvents, FiveIsland_LostCave_Room10_MapWarps, NULL, NULL

