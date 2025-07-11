@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/PewterCity_Museum_2F/map.json
@

	.align 2

PewterCity_Museum_2F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_SCIENTIST, 10, 5, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, PewterCity_Museum_2F_EventScript_Scientist, 0
	object_event 2, OBJ_EVENT_GFX_MAN, 4, 9, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 3, 1, TRAINER_TYPE_NONE, 0, PewterCity_Museum_2F_EventScript_Man, 0
	object_event 3, OBJ_EVENT_GFX_OLD_MAN_2, 0, 6, 3, MOVEMENT_TYPE_LOOK_AROUND, 3, 1, TRAINER_TYPE_NONE, 0, PewterCity_Museum_2F_EventScript_OldMan, 0
	object_event 4, OBJ_EVENT_GFX_LITTLE_GIRL, 15, 8, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, PewterCity_Museum_2F_EventScript_LittleGirl, 0
	object_event 5, OBJ_EVENT_GFX_BALDING_MAN, 16, 8, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, PewterCity_Museum_2F_EventScript_BaldingMan, 0

PewterCity_Museum_2F_MapWarps:
	warp_def 11, 8, 3, 5, MAP_PEWTER_CITY_MUSEUM_1F

PewterCity_Museum_2F_MapBGEvents:
	bg_sign_event 3, 6, 0, BG_EVENT_PLAYER_FACING_ANY, PewterCity_Museum_2F_EventScript_MoonStone
	bg_sign_event 15, 5, 0, BG_EVENT_PLAYER_FACING_ANY, PewterCity_Museum_2F_EventScript_SpaceShuttle
	bg_sign_event 14, 5, 0, BG_EVENT_PLAYER_FACING_ANY, PewterCity_Museum_2F_EventScript_SpaceShuttle
	bg_sign_event 16, 5, 0, BG_EVENT_PLAYER_FACING_ANY, PewterCity_Museum_2F_EventScript_SpaceShuttle
	bg_sign_event 14, 4, 0, BG_EVENT_PLAYER_FACING_ANY, PewterCity_Museum_2F_EventScript_SpaceShuttle
	bg_sign_event 15, 4, 0, BG_EVENT_PLAYER_FACING_ANY, PewterCity_Museum_2F_EventScript_SpaceShuttle
	bg_sign_event 16, 4, 0, BG_EVENT_PLAYER_FACING_ANY, PewterCity_Museum_2F_EventScript_SpaceShuttle
	bg_sign_event 3, 5, 0, BG_EVENT_PLAYER_FACING_ANY, PewterCity_Museum_2F_EventScript_MoonStone

PewterCity_Museum_2F_MapEvents::
	map_events PewterCity_Museum_2F_ObjectEvents, PewterCity_Museum_2F_MapWarps, NULL, PewterCity_Museum_2F_MapBGEvents

