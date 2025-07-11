@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/ViridianCity_Gym/map.json
@

	.align 2

ViridianCity_Gym_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_BLACKBELT, 10, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 3, ViridianCity_Gym_EventScript_Takashi, 0
	object_event 2, OBJ_EVENT_GFX_COOLTRAINER_M, 12, 10, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 3, ViridianCity_Gym_EventScript_Yuji, 0
	object_event 3, OBJ_EVENT_GFX_BLACKBELT, 11, 14, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NORMAL, 3, ViridianCity_Gym_EventScript_Atsushi, 0
	object_event 4, OBJ_EVENT_GFX_MAN, 10, 10, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 3, ViridianCity_Gym_EventScript_Jason, 0
	object_event 5, OBJ_EVENT_GFX_MAN, 2, 21, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NORMAL, 2, ViridianCity_Gym_EventScript_Cole, 0
	object_event 6, OBJ_EVENT_GFX_BLACKBELT, 3, 11, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NORMAL, 2, ViridianCity_Gym_EventScript_Kiyo, 0
	object_event 7, OBJ_EVENT_GFX_COOLTRAINER_M, 6, 8, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 3, ViridianCity_Gym_EventScript_Samuel, 0
	object_event 8, OBJ_EVENT_GFX_GIOVANNI, 2, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, ViridianCity_Gym_EventScript_Giovanni, FLAG_HIDE_VIRIDIAN_GIOVANNI
	object_event 9, OBJ_EVENT_GFX_COOLTRAINER_M, 13, 7, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NORMAL, 3, ViridianCity_Gym_EventScript_Warren, 0
	object_event 10, OBJ_EVENT_GFX_GYM_GUY, 16, 20, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, ViridianCity_Gym_EventScript_GymGuy, 0

ViridianCity_Gym_MapWarps:
	warp_def 16, 22, 3, 2, MAP_VIRIDIAN_CITY
	warp_def 17, 22, 3, 2, MAP_VIRIDIAN_CITY
	warp_def 18, 22, 3, 2, MAP_VIRIDIAN_CITY

ViridianCity_Gym_MapBGEvents:
	bg_sign_event 15, 20, 0, BG_EVENT_PLAYER_FACING_ANY, ViridianCity_Gym_EventScript_GymStatue
	bg_sign_event 19, 20, 0, BG_EVENT_PLAYER_FACING_ANY, ViridianCity_Gym_EventScript_GymStatue
	bg_hidden_item_event 2, 2, 3, ITEM_MACHO_BRACE, FLAG_HIDDEN_ITEM_VIRIDIAN_CITY_GYM_MACHO_BRACE, 1, TRUE

ViridianCity_Gym_MapEvents::
	map_events ViridianCity_Gym_ObjectEvents, ViridianCity_Gym_MapWarps, NULL, ViridianCity_Gym_MapBGEvents

