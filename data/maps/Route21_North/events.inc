@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Route21_North/map.json
@

	.align 2

Route21_North_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_FISHER, 7, 27, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NORMAL, 0, Route21_North_EventScript_Ronald, 0
	object_event 2, OBJ_EVENT_GFX_FISHER, 16, 26, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 0, Route21_North_EventScript_Wade, 0
	object_event 3, OBJ_EVENT_GFX_SWIMMER_M_WATER, 12, 44, 1, MOVEMENT_TYPE_WALK_SEQUENCE_LEFT_UP_RIGHT_DOWN, 4, 2, TRAINER_TYPE_NORMAL, 1, Route21_North_EventScript_Spencer, 0
	object_event 4, OBJ_EVENT_GFX_SWIMMER_F_WATER, 14, 35, 1, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 1, Route21_North_EventScript_Lil, 0
	object_event 5, OBJ_EVENT_GFX_TUBER_M_WATER, 15, 35, 1, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 1, Route21_North_EventScript_Ian, 0
	clone_event 6, OBJ_EVENT_GFX_FAT_MAN, 13, -3, LOCALID_PALLET_FAT_MAN, MAP_PALLET_TOWN

Route21_North_MapBGEvents:
	bg_hidden_item_event 17, 42, 3, ITEM_PEARL, FLAG_HIDDEN_ITEM_ROUTE21_NORTH_PEARL, 1, FALSE

Route21_North_MapEvents::
	map_events Route21_North_ObjectEvents, NULL, NULL, Route21_North_MapBGEvents

