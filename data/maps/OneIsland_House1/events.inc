@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/OneIsland_House1/map.json
@

	.align 2

OneIsland_House1_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_OLD_MAN_1, 4, 5, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, OneIsland_House1_EventScript_OldMan, 0
	object_event 2, OBJ_EVENT_GFX_OLD_WOMAN, 7, 5, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, OneIsland_House1_EventScript_OldWoman, 0

OneIsland_House1_MapWarps:
	warp_def 4, 7, 3, 1, MAP_ONE_ISLAND

OneIsland_House1_MapEvents::
	map_events OneIsland_House1_ObjectEvents, OneIsland_House1_MapWarps, NULL, NULL

