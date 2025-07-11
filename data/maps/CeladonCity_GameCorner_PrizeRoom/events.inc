@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/CeladonCity_GameCorner_PrizeRoom/map.json
@

	.align 2

CeladonCity_GameCorner_PrizeRoom_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_BALDING_MAN, 2, 6, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, CeladonCity_GameCorner_PrizeRoom_EventScript_BaldingMan, 0
	object_event 2, OBJ_EVENT_GFX_OLD_MAN_2, 6, 7, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, CeladonCity_GameCorner_PrizeRoom_EventScript_OldMan, 0
	object_event 3, OBJ_EVENT_GFX_WORKER_M, 4, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkMons, 0
	object_event 4, OBJ_EVENT_GFX_WORKER_M, 6, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkTMs, 0
	object_event 5, OBJ_EVENT_GFX_WORKER_M, 2, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkItems, 0

CeladonCity_GameCorner_PrizeRoom_MapWarps:
	warp_def 3, 9, 0, 5, MAP_CELADON_CITY
	warp_def 4, 8, 3, 5, MAP_CELADON_CITY
	warp_def 5, 9, 0, 5, MAP_CELADON_CITY

CeladonCity_GameCorner_PrizeRoom_MapEvents::
	map_events CeladonCity_GameCorner_PrizeRoom_ObjectEvents, CeladonCity_GameCorner_PrizeRoom_MapWarps, NULL, NULL

