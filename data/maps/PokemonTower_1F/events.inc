@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/PokemonTower_1F/map.json
@

	.align 2

PokemonTower_1F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_WORKER_F, 18, 13, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NONE, 0, PokemonTower_1F_EventScript_WorkerF, 0
	object_event 2, OBJ_EVENT_GFX_CHANNELER, 18, 7, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, PokemonTower_1F_EventScript_Channeler, 0
	object_event 3, OBJ_EVENT_GFX_WOMAN_2, 15, 6, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NONE, 0, PokemonTower_1F_EventScript_Woman1, 0
	object_event 4, OBJ_EVENT_GFX_WOMAN_3, 7, 8, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, PokemonTower_1F_EventScript_Woman2, 0
	object_event 5, OBJ_EVENT_GFX_BALDING_MAN, 8, 12, 3, MOVEMENT_TYPE_WANDER_AROUND, 2, 2, TRAINER_TYPE_NONE, 0, PokemonTower_1F_EventScript_BaldingMan, 0

PokemonTower_1F_MapWarps:
	warp_def 10, 19, 3, 0, MAP_LAVENDER_TOWN
	warp_def 11, 18, 3, 0, MAP_LAVENDER_TOWN
	warp_def 12, 19, 3, 0, MAP_LAVENDER_TOWN
	warp_def 18, 9, 3, 1, MAP_POKEMON_TOWER_2F

PokemonTower_1F_MapEvents::
	map_events PokemonTower_1F_ObjectEvents, PokemonTower_1F_MapWarps, NULL, NULL

