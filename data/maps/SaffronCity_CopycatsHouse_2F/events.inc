@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SaffronCity_CopycatsHouse_2F/map.json
@

	.align 2

SaffronCity_CopycatsHouse_2F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_DODUO, 6, 8, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, SaffronCity_CopycatsHouse_2F_EventScript_Doduo, 0
	object_event 2, OBJ_EVENT_GFX_PIKACHU, 4, 6, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SaffronCity_CopycatsHouse_2F_EventScript_Doll, 0
	object_event 3, OBJ_EVENT_GFX_JIGGLYPUFF, 7, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SaffronCity_CopycatsHouse_2F_EventScript_Doll, 0
	object_event 4, OBJ_EVENT_GFX_LITTLE_GIRL, 9, 6, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, SaffronCity_CopycatsHouse_2F_EventScript_Copycat, 0

SaffronCity_CopycatsHouse_2F_MapWarps:
	warp_def 10, 2, 3, 3, MAP_SAFFRON_CITY_COPYCATS_HOUSE_1F

SaffronCity_CopycatsHouse_2F_MapBGEvents:
	bg_sign_event 1, 1, 0, BG_EVENT_PLAYER_FACING_ANY, SaffronCity_CopycatsHouse_2F_EventScript_Computer
	bg_sign_event 3, 5, 0, BG_EVENT_PLAYER_FACING_ANY, SaffronCity_CopycatsHouse_2F_EventScript_Game
	bg_hidden_item_event 2, 1, 0, ITEM_NUGGET, FLAG_HIDDEN_ITEM_SAFFRON_CITY_COPYCATS_HOUSE_2F_NUGGET, 1, FALSE

SaffronCity_CopycatsHouse_2F_MapEvents::
	map_events SaffronCity_CopycatsHouse_2F_ObjectEvents, SaffronCity_CopycatsHouse_2F_MapWarps, NULL, SaffronCity_CopycatsHouse_2F_MapBGEvents

