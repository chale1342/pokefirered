@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Route12_NorthEntrance_1F/map.json
@

	.align 2

Route12_NorthEntrance_1F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_POLICEMAN, 1, 5, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, Route12_NorthEntrance_1F_EventScript_Guard, 0

Route12_NorthEntrance_1F_MapWarps:
	warp_def 5, 1, 3, 1, MAP_ROUTE12
	warp_def 6, 1, 0, 2, MAP_ROUTE12
	warp_def 5, 11, 3, 3, MAP_ROUTE12
	warp_def 6, 11, 3, 3, MAP_ROUTE12
	warp_def 8, 10, 3, 0, MAP_ROUTE12_NORTH_ENTRANCE_2F

Route12_NorthEntrance_1F_MapEvents::
	map_events Route12_NorthEntrance_1F_ObjectEvents, Route12_NorthEntrance_1F_MapWarps, NULL, NULL

