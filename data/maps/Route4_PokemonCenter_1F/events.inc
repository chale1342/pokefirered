@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Route4_PokemonCenter_1F/map.json
@

	.align 2

Route4_PokemonCenter_1F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_NURSE, 7, 2, 0, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, Route4_PokemonCenter_1F_EventScript_Nurse, 0
	object_event 2, OBJ_EVENT_GFX_BALDING_MAN, 1, 3, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, Route4_PokemonCenter_1F_EventScript_MagikarpSalesman, 0
	object_event 3, OBJ_EVENT_GFX_GENTLEMAN, 12, 5, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, Route4_PokemonCenter_1F_EventScript_Gentleman, 0
	object_event 4, OBJ_EVENT_GFX_BOY, 5, 4, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, Route4_PokemonCenter_1F_EventScript_Boy, 0
	object_event 5, OBJ_EVENT_GFX_YOUNGSTER, 14, 4, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, Route4_PokemonCenter_1F_EventScript_Youngster, 0
	object_event 6, OBJ_EVENT_GFX_CLIPBOARD, 12, 6, 0, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, Route4_PokemonCenter_1F_EventScript_Newspaper, 0

Route4_PokemonCenter_1F_MapWarps:
	warp_def 6, 8, 3, 2, MAP_ROUTE4
	warp_def 7, 8, 3, 2, MAP_ROUTE4
	warp_def 8, 8, 3, 2, MAP_ROUTE4
	warp_def 1, 6, 4, 0, MAP_ROUTE4_POKEMON_CENTER_2F

Route4_PokemonCenter_1F_MapEvents::
	map_events Route4_PokemonCenter_1F_ObjectEvents, Route4_PokemonCenter_1F_MapWarps, NULL, NULL

