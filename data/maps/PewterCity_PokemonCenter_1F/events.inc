@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/PewterCity_PokemonCenter_1F/map.json
@

	.align 2

PewterCity_PokemonCenter_1F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_JIGGLYPUFF, 2, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, PewterCity_PokemonCenter_1F_EventScript_Jigglypuff, 0
	object_event 2, OBJ_EVENT_GFX_GENTLEMAN, 4, 8, 3, MOVEMENT_TYPE_FACE_LEFT_AND_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, PewterCity_PokemonCenter_1F_EventScript_Gentleman, 0
	object_event 3, OBJ_EVENT_GFX_NURSE, 7, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, PewterCity_PokemonCenter_1F_EventScript_Nurse, 0
	object_event 4, OBJ_EVENT_GFX_YOUNGSTER, 1, 2, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, PewterCity_PokemonCenter_1F_EventScript_Youngster, 0
	object_event 5, OBJ_EVENT_GFX_WOMAN_1, 13, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, MysteryEventClub_EventScript_Woman, 0
	object_event 6, OBJ_EVENT_GFX_GBA_KID, 10, 7, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, PewterCity_PokemonCenter_1F_EventScript_GBAKid1, 0
	object_event 7, OBJ_EVENT_GFX_GBA_KID, 14, 6, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, PewterCity_PokemonCenter_1F_EventScript_GBAKid2, 0

PewterCity_PokemonCenter_1F_MapWarps:
	warp_def 6, 8, 0, 5, MAP_PEWTER_CITY
	warp_def 7, 8, 3, 5, MAP_PEWTER_CITY
	warp_def 8, 8, 0, 5, MAP_PEWTER_CITY
	warp_def 1, 6, 4, 0, MAP_PEWTER_CITY_POKEMON_CENTER_2F

PewterCity_PokemonCenter_1F_MapEvents::
	map_events PewterCity_PokemonCenter_1F_ObjectEvents, PewterCity_PokemonCenter_1F_MapWarps, NULL, NULL

