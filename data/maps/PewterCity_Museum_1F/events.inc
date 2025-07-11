@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/PewterCity_Museum_1F/map.json
@

	.align 2

PewterCity_Museum_1F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_WORKER_M, 16, 5, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, PewterCity_Museum_1F_EventScript_Scientist1, 0
	object_event 2, OBJ_EVENT_GFX_OLD_MAN_1, 2, 4, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, PewterCity_Museum_1F_EventScript_OldMan, 0
	object_event 3, OBJ_EVENT_GFX_SCIENTIST, 21, 3, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, PewterCity_Museum_1F_EventScript_OldAmberScientist, 0
	object_event 4, OBJ_EVENT_GFX_OLD_AMBER, 22, 3, 0, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, PewterCity_Museum_1F_EventScript_OldAmber, FLAG_HIDE_OLD_AMBER
	object_event 5, OBJ_EVENT_GFX_SCIENTIST, 26, 4, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, PewterCity_Museum_1F_EventScript_Scientist2, 0
	object_event 6, OBJ_EVENT_GFX_SCIENTIST, 26, 7, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, PewterCity_Museum_1F_EventScript_SeismicTossTutor, 0

PewterCity_Museum_1F_MapWarps:
	warp_def 13, 9, 3, 0, MAP_PEWTER_CITY
	warp_def 14, 9, 3, 0, MAP_PEWTER_CITY
	warp_def 15, 9, 3, 0, MAP_PEWTER_CITY
	warp_def 21, 9, 3, 1, MAP_PEWTER_CITY
	warp_def 22, 9, 3, 1, MAP_PEWTER_CITY
	warp_def 8, 8, 3, 0, MAP_PEWTER_CITY_MUSEUM_2F

PewterCity_Museum_1F_MapCoordEvents:
	coord_event 12, 5, 3, VAR_MAP_SCENE_PEWTER_CITY_MUSEUM_1F, 0, PewterCity_Museum_1F_EventScript_EntranceTriggerLeft
	coord_event 13, 5, 3, VAR_MAP_SCENE_PEWTER_CITY_MUSEUM_1F, 0, PewterCity_Museum_1F_EventScript_EntranceTriggerMid
	coord_event 14, 5, 3, VAR_MAP_SCENE_PEWTER_CITY_MUSEUM_1F, 0, PewterCity_Museum_1F_EventScript_EntranceTriggerRight

PewterCity_Museum_1F_MapBGEvents:
	bg_sign_event 4, 4, 0, BG_EVENT_PLAYER_FACING_ANY, PewterCity_Museum_1F_EventScript_AerodactylFossil
	bg_sign_event 4, 7, 0, BG_EVENT_PLAYER_FACING_ANY, PewterCity_Museum_1F_EventScript_KabutopsFossil
	bg_sign_event 27, 1, 0, BG_EVENT_PLAYER_FACING_NORTH, PewterCity_Museum_1F_EventScript_PokemonJournalBrock
	bg_sign_event 26, 1, 0, BG_EVENT_PLAYER_FACING_NORTH, PewterCity_Museum_1F_EventScript_PokemonJournalBrock

PewterCity_Museum_1F_MapEvents::
	map_events PewterCity_Museum_1F_ObjectEvents, PewterCity_Museum_1F_MapWarps, PewterCity_Museum_1F_MapCoordEvents, PewterCity_Museum_1F_MapBGEvents

