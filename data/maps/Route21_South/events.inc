@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Route21_South/map.json
@

	.align 2

Route21_South_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_FISHER, 11, 8, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NORMAL, 0, Route21_South_EventScript_Claude, 0
	object_event 2, OBJ_EVENT_GFX_FISHER, 14, 15, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NORMAL, 0, Route21_South_EventScript_Nolan, 0
	object_event 3, OBJ_EVENT_GFX_SWIMMER_M_WATER, 15, 24, 1, MOVEMENT_TYPE_FACE_LEFT_AND_RIGHT, 1, 1, TRAINER_TYPE_NORMAL, 3, Route21_South_EventScript_Jack, 0
	object_event 4, OBJ_EVENT_GFX_SWIMMER_M_WATER, 15, 38, 1, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NORMAL, 3, Route21_South_EventScript_Jerome, 0
	object_event 5, OBJ_EVENT_GFX_SWIMMER_M_WATER, 10, 29, 1, MOVEMENT_TYPE_WANDER_AROUND, 2, 2, TRAINER_TYPE_NORMAL, 4, Route21_South_EventScript_Roland, 0

Route21_South_MapEvents::
	map_events Route21_South_ObjectEvents, NULL, NULL, NULL

