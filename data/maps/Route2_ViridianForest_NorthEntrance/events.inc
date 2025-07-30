@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Route2_ViridianForest_NorthEntrance/map.json
@

	.align 2

Route2_ViridianForest_NorthEntrance_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_YOUNGSTER, 5, 4, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, Route2_ViridianForest_NorthEntrance_EventScript_Youngster, 0
	object_event 2, OBJ_EVENT_GFX_OLD_MAN_1, 4, 7, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, Route2_ViridianForest_NorthEntrance_EventScript_OldMan, 0
	object_event 3, OBJ_EVENT_GFX_COOLTRAINER_F, 10, 5, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, Route2_ViridianForest_NorthEntrance_EventScript_CooltrainerF, 0

Route2_ViridianForest_NorthEntrance_MapWarps:
	warp_def 6, 10, 3, 2, MAP_VIRIDIAN_FOREST
	warp_def 7, 10, 3, 2, MAP_VIRIDIAN_FOREST
	warp_def 8, 10, 3, 2, MAP_VIRIDIAN_FOREST
	warp_def 7, 1, 3, 0, MAP_ROUTE2

Route2_ViridianForest_NorthEntrance_MapEvents::
	map_events Route2_ViridianForest_NorthEntrance_ObjectEvents, Route2_ViridianForest_NorthEntrance_MapWarps, NULL, NULL

