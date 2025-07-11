@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/DiglettsCave_SouthEntrance/map.json
@

	.align 2

DiglettsCave_SouthEntrance_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_OLD_MAN_1, 4, 4, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, DiglettsCave_SouthEntrance_EventScript_OldMan, 0

DiglettsCave_SouthEntrance_MapWarps:
	warp_def 4, 6, 3, 0, MAP_ROUTE11
	warp_def 6, 4, 3, 1, MAP_DIGLETTS_CAVE_B1F

DiglettsCave_SouthEntrance_MapEvents::
	map_events DiglettsCave_SouthEntrance_ObjectEvents, DiglettsCave_SouthEntrance_MapWarps, NULL, NULL

