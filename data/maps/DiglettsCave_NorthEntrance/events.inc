@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/DiglettsCave_NorthEntrance/map.json
@

	.align 2

DiglettsCave_NorthEntrance_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_HIKER, 4, 4, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, DiglettsCave_NorthEntrance_EventScript_Hiker, 0

DiglettsCave_NorthEntrance_MapWarps:
	warp_def 6, 4, 3, 0, MAP_DIGLETTS_CAVE_B1F
	warp_def 4, 6, 3, 3, MAP_ROUTE2

DiglettsCave_NorthEntrance_MapEvents::
	map_events DiglettsCave_NorthEntrance_ObjectEvents, DiglettsCave_NorthEntrance_MapWarps, NULL, NULL

