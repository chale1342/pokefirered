@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/CeladonCity_House1/map.json
@

	.align 2

CeladonCity_House1_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_OLD_MAN_2, 5, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, CeladonCity_House1_EventScript_RocketChief, 0
	object_event 2, OBJ_EVENT_GFX_ROCKET_M, 2, 4, 3, MOVEMENT_TYPE_WANDER_UP_AND_DOWN, 1, 5, TRAINER_TYPE_NONE, 0, CeladonCity_House1_EventScript_Rocket1, 0
	object_event 3, OBJ_EVENT_GFX_ROCKET_M, 8, 4, 3, MOVEMENT_TYPE_WANDER_UP_AND_DOWN, 1, 5, TRAINER_TYPE_NONE, 0, CeladonCity_House1_EventScript_Rocket2, 0

CeladonCity_House1_MapWarps:
	warp_def 3, 7, 3, 8, MAP_CELADON_CITY
	warp_def 4, 7, 3, 8, MAP_CELADON_CITY
	warp_def 5, 7, 3, 8, MAP_CELADON_CITY

CeladonCity_House1_MapEvents::
	map_events CeladonCity_House1_ObjectEvents, CeladonCity_House1_MapWarps, NULL, NULL

