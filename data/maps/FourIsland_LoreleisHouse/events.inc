@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/FourIsland_LoreleisHouse/map.json
@

	.align 2

FourIsland_LoreleisHouse_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_LORELEI, 7, 4, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, FourIsland_LoreleisHouse_EventScript_Lorelei, FLAG_HIDE_LORELEI_IN_HER_HOUSE
	object_event 2, OBJ_EVENT_GFX_WIGGLYTUFF, 0, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, FourIsland_LoreleisHouse_EventScript_Doll, 0
	object_event 3, OBJ_EVENT_GFX_SEEL, 10, 3, 0, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, FourIsland_LoreleisHouse_EventScript_Doll, 0
	object_event 4, OBJ_EVENT_GFX_PIKACHU, 9, 3, 0, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, FourIsland_LoreleisHouse_EventScript_Doll, 0
	object_event 5, OBJ_EVENT_GFX_SLOWPOKE, 7, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, FourIsland_LoreleisHouse_EventScript_Doll, 0
	object_event 6, OBJ_EVENT_GFX_SLOWBRO, 6, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, FourIsland_LoreleisHouse_EventScript_Doll, 0
	object_event 7, OBJ_EVENT_GFX_PSYDUCK, 6, 4, 0, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, FourIsland_LoreleisHouse_EventScript_Doll, 0
	object_event 8, OBJ_EVENT_GFX_MEOWTH, 9, 4, 0, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, FourIsland_LoreleisHouse_EventScript_Doll, FLAG_HIDE_LORELEI_HOUSE_MEOWTH_DOLL
	object_event 9, OBJ_EVENT_GFX_CHANSEY, 10, 4, 0, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, FourIsland_LoreleisHouse_EventScript_Doll, FLAG_HIDE_LORELEI_HOUSE_CHANSEY_DOLL
	object_event 10, OBJ_EVENT_GFX_JIGGLYPUFF, 0, 3, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, FourIsland_LoreleisHouse_EventScript_Doll, FLAG_HIDE_LORELEI_HOUSE_JIGGLYPUFF_DOLL
	object_event 11, OBJ_EVENT_GFX_NIDORAN_F, 0, 5, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, FourIsland_LoreleisHouse_EventScript_Doll, FLAG_HIDE_LORELEIS_HOUSE_NIDORAN_F_DOLL
	object_event 12, OBJ_EVENT_GFX_NIDORAN_M, 1, 5, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, FourIsland_LoreleisHouse_EventScript_Doll, FLAG_HIDE_LORELEIS_HOUSE_NIDORAN_M_DOLL
	object_event 13, OBJ_EVENT_GFX_PIDGEOT, 9, 0, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, FourIsland_LoreleisHouse_EventScript_Doll, FLAG_HIDE_LORELEIS_HOUSE_PIDGEOT_DOLL
	object_event 14, OBJ_EVENT_GFX_FEAROW, 10, 0, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, FourIsland_LoreleisHouse_EventScript_Doll, FLAG_HIDE_LORELEIS_HOUSE_FEAROW_DOLL
	object_event 15, OBJ_EVENT_GFX_LAPRAS_DOLL, 9, 6, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, FourIsland_LoreleisHouse_EventScript_Doll, FLAG_HIDE_LORELEIS_HOUSE_LAPRAS_DOLL

FourIsland_LoreleisHouse_MapWarps:
	warp_def 4, 7, 3, 4, MAP_FOUR_ISLAND

FourIsland_LoreleisHouse_MapEvents::
	map_events FourIsland_LoreleisHouse_ObjectEvents, FourIsland_LoreleisHouse_MapWarps, NULL, NULL

