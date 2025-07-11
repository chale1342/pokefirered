@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/OneIsland_KindleRoad_EmberSpa/map.json
@

	.align 2

OneIsland_KindleRoad_EmberSpa_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_OLD_MAN_1, 11, 13, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, OneIsland_KindleRoad_EmberSpa_EventScript_OldMan, 0
	object_event 2, OBJ_EVENT_GFX_BALDING_MAN, 15, 11, 3, MOVEMENT_TYPE_FACE_DOWN_AND_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, OneIsland_KindleRoad_EmberSpa_EventScript_BaldingMan1, 0
	object_event 3, OBJ_EVENT_GFX_BLACKBELT, 6, 8, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 2, 1, TRAINER_TYPE_NONE, 0, OneIsland_KindleRoad_EmberSpa_EventScript_BlackBelt, FLAG_HIDE_POSTGAME_GOSSIPERS
	object_event 4, OBJ_EVENT_GFX_OLD_WOMAN, 20, 7, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, OneIsland_KindleRoad_EmberSpa_EventScript_OldWoman, 0
	object_event 5, OBJ_EVENT_GFX_OLD_MAN_1, 10, 5, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, OneIsland_KindleRoad_EmberSpa_EventScript_RockSmashMan, 0
	object_event 6, OBJ_EVENT_GFX_BALDING_MAN, 11, 20, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, OneIsland_KindleRoad_EmberSpa_EventScript_BaldingMan2, 0

OneIsland_KindleRoad_EmberSpa_MapWarps:
	warp_def 13, 36, 3, 2, MAP_ONE_ISLAND_KINDLE_ROAD

OneIsland_KindleRoad_EmberSpa_MapCoordEvents:
	coord_event 13, 13, 3, VAR_TEMP_1, 0, OneIsland_KindleRoad_EmberSpa_EventScript_SpaHeal

OneIsland_KindleRoad_EmberSpa_MapEvents::
	map_events OneIsland_KindleRoad_EmberSpa_ObjectEvents, OneIsland_KindleRoad_EmberSpa_MapWarps, OneIsland_KindleRoad_EmberSpa_MapCoordEvents, NULL

