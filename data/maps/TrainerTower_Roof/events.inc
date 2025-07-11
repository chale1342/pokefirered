@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/TrainerTower_Roof/map.json
@

	.align 2

TrainerTower_Roof_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_TRAINER_TOWER_DUDE, 9, 7, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, TrainerTower_EventScript_Owner, FLAG_TEMP_6

TrainerTower_Roof_MapWarps:
	warp_def 13, 5, 0, 0, MAP_TRAINER_TOWER_ELEVATOR
	warp_def 4, 6, 3, 0, MAP_TRAINER_TOWER_8F

TrainerTower_Roof_MapEvents::
	map_events TrainerTower_Roof_ObjectEvents, TrainerTower_Roof_MapWarps, NULL, NULL

