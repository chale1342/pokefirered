@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/PewterCity_Gym/map.json
@

	.align 2

PewterCity_Gym_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_BROCK, 6, 5, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, PewterCity_Gym_EventScript_Brock, 0
	object_event 2, OBJ_EVENT_GFX_CAMPER, 3, 8, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NORMAL, 4, PewterCity_Gym_EventScript_Liam, 0
	object_event 3, OBJ_EVENT_GFX_GYM_GUY, 7, 12, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, PewterCity_Gym_EventScript_GymGuy, 0

PewterCity_Gym_MapWarps:
	warp_def 5, 14, 3, 2, MAP_PEWTER_CITY
	warp_def 6, 14, 3, 2, MAP_PEWTER_CITY
	warp_def 7, 14, 3, 2, MAP_PEWTER_CITY

PewterCity_Gym_MapBGEvents:
	bg_sign_event 4, 12, 0, BG_EVENT_PLAYER_FACING_ANY, PewterCity_Gym_EventScript_GymStatue
	bg_sign_event 8, 12, 0, BG_EVENT_PLAYER_FACING_ANY, PewterCity_Gym_EventScript_GymStatue

PewterCity_Gym_MapEvents::
	map_events PewterCity_Gym_ObjectEvents, PewterCity_Gym_MapWarps, NULL, PewterCity_Gym_MapBGEvents

