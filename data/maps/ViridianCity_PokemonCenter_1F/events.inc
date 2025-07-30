@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/ViridianCity_PokemonCenter_1F/map.json
@

	.align 2

ViridianCity_PokemonCenter_1F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_NURSE, 7, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, ViridianCity_PokemonCenter_1F_EventScript_Nurse, 0
	object_event 2, OBJ_EVENT_GFX_GENTLEMAN, 12, 5, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, ViridianCity_PokemonCenter_1F_EventScript_Gentleman, 0
	object_event 3, OBJ_EVENT_GFX_BOY, 4, 7, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, ViridianCity_PokemonCenter_1F_EventScript_Boy, 0
	object_event 4, OBJ_EVENT_GFX_YOUNGSTER, 2, 3, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, ViridianCity_PokemonCenter_1F_EventScript_Youngster, 0
	object_event 5, OBJ_EVENT_GFX_FISHER, 9, 5, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, ViridianCity_PokemonCenter_1F_EventScript_FishingGuru, 0

ViridianCity_PokemonCenter_1F_MapWarps:
	warp_def 6, 8, 3, 0, MAP_VIRIDIAN_CITY
	warp_def 7, 8, 3, 0, MAP_VIRIDIAN_CITY
	warp_def 8, 8, 3, 0, MAP_VIRIDIAN_CITY
	warp_def 1, 6, 4, 0, MAP_VIRIDIAN_CITY_POKEMON_CENTER_2F

ViridianCity_PokemonCenter_1F_MapEvents::
	map_events ViridianCity_PokemonCenter_1F_ObjectEvents, ViridianCity_PokemonCenter_1F_MapWarps, NULL, NULL

