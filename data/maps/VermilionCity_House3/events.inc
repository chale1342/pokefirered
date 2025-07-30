@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/VermilionCity_House3/map.json
@

	.align 2

VermilionCity_House3_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_BOY, 7, 4, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, VermilionCity_House3_EventScript_Boy, 0
	object_event 2, OBJ_EVENT_GFX_PIDGEY, 2, 5, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 2, 1, TRAINER_TYPE_NONE, 0, VermilionCity_House3_EventScript_Pidgey, 0
	object_event 3, OBJ_EVENT_GFX_CLIPBOARD, 6, 4, 0, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, 0x0, 0
	object_event 4, OBJ_EVENT_GFX_LASS, 2, 4, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, VermilionCity_House3_EventScript_Lass, 0

VermilionCity_House3_MapWarps:
	warp_def 3, 7, 3, 8, MAP_VERMILION_CITY
	warp_def 4, 7, 3, 8, MAP_VERMILION_CITY
	warp_def 5, 7, 3, 8, MAP_VERMILION_CITY

VermilionCity_House3_MapBGEvents:
	bg_sign_event 6, 4, 3, BG_EVENT_PLAYER_FACING_ANY, VermilionCity_House3_EventScript_Letter

VermilionCity_House3_MapEvents::
	map_events VermilionCity_House3_ObjectEvents, VermilionCity_House3_MapWarps, NULL, VermilionCity_House3_MapBGEvents

