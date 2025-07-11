@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/TrainerTower_7F/map.json
@

	.align 2

TrainerTower_7F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_TRAINER_TOWER_DUDE, 9, 7, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, TrainerTower_EventScript_Owner, FLAG_TEMP_6
	object_event 2, OBJ_EVENT_GFX_VAR_0, 10, 10, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, TrainerTower_EventScript_DoublesTrainer1, FLAG_TEMP_2
	object_event 3, OBJ_EVENT_GFX_VAR_1, 15, 13, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, TrainerTower_EventScript_SinglesTrainer, FLAG_TEMP_3
	object_event 4, OBJ_EVENT_GFX_VAR_2, 10, 16, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NONE, 0, TrainerTower_EventScript_KnockoutTrainer, FLAG_TEMP_4
	object_event 5, OBJ_EVENT_GFX_VAR_3, 11, 10, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, TrainerTower_EventScript_DoublesTrainer2, FLAG_TEMP_5

TrainerTower_7F_MapWarps:
	warp_def 15, 6, 3, 1, MAP_TRAINER_TOWER_8F
	warp_def 4, 6, 3, 0, MAP_TRAINER_TOWER_6F
	warp_def 13, 5, 0, 0, MAP_TRAINER_TOWER_ELEVATOR

TrainerTower_7F_MapCoordEvents:
	coord_event 10, 13, 3, VAR_TEMP_E, 0, TrainerTower_EventScript_SingleBattleTrigger
	coord_event 9, 12, 3, VAR_TEMP_F, 0, TrainerTower_EventScript_DoubleBattleTriggerTop
	coord_event 9, 13, 3, VAR_TEMP_F, 0, TrainerTower_EventScript_DoubleBattleTriggerBottom

TrainerTower_7F_MapEvents::
	map_events TrainerTower_7F_ObjectEvents, TrainerTower_7F_MapWarps, TrainerTower_7F_MapCoordEvents, NULL

