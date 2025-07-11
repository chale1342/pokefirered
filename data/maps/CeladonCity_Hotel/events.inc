@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/CeladonCity_Hotel/map.json
@

	.align 2

CeladonCity_Hotel_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_OLD_WOMAN, 5, 4, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, CeladonCity_Hotel_EventScript_Receptionist, 0
	object_event 2, OBJ_EVENT_GFX_BEAUTY, 3, 6, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, CeladonCity_Hotel_EventScript_Beauty, 0
	object_event 3, OBJ_EVENT_GFX_MAN, 9, 7, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, CeladonCity_Hotel_EventScript_BeautyBoyfriend, 0
	object_event 4, OBJ_EVENT_GFX_LITTLE_BOY, 2, 6, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, CeladonCity_Hotel_EventScript_BeautyBrother, 0

CeladonCity_Hotel_MapWarps:
	warp_def 3, 10, 0, 9, MAP_CELADON_CITY
	warp_def 4, 9, 0, 9, MAP_CELADON_CITY
	warp_def 5, 10, 0, 9, MAP_CELADON_CITY

CeladonCity_Hotel_MapEvents::
	map_events CeladonCity_Hotel_ObjectEvents, CeladonCity_Hotel_MapWarps, NULL, NULL

