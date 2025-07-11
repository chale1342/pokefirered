@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/LavenderTown/map.json
@

	.align 2

LavenderTown_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_LITTLE_GIRL, 19, 10, 3, MOVEMENT_TYPE_WANDER_AROUND, 2, 1, TRAINER_TYPE_NONE, 0, LavenderTown_EventScript_LittleGirl, 0
	object_event 2, OBJ_EVENT_GFX_WORKER_M, 12, 12, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, LavenderTown_EventScript_WorkerM, 0
	object_event 3, OBJ_EVENT_GFX_BOY, 10, 7, 3, MOVEMENT_TYPE_FACE_LEFT_AND_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, LavenderTown_EventScript_Boy, 0

LavenderTown_MapWarps:
	warp_def 18, 6, 0, 1, MAP_POKEMON_TOWER_1F
	warp_def 6, 5, 0, 1, MAP_LAVENDER_TOWN_POKEMON_CENTER_1F
	warp_def 10, 11, 0, 1, MAP_LAVENDER_TOWN_VOLUNTEER_POKEMON_HOUSE
	warp_def 5, 16, 0, 1, MAP_LAVENDER_TOWN_HOUSE1
	warp_def 10, 16, 0, 1, MAP_LAVENDER_TOWN_HOUSE2
	warp_def 20, 15, 0, 1, MAP_LAVENDER_TOWN_MART

LavenderTown_MapBGEvents:
	bg_sign_event 12, 4, 0, BG_EVENT_PLAYER_FACING_ANY, LavenderTown_EventScript_SilphScopeNotice
	bg_sign_event 15, 11, 0, BG_EVENT_PLAYER_FACING_ANY, LavenderTown_EventScript_TownSign
	bg_sign_event 21, 7, 0, BG_EVENT_PLAYER_FACING_ANY, LavenderTown_EventScript_PokemonTowerSign
	bg_sign_event 7, 11, 0, BG_EVENT_PLAYER_FACING_ANY, LavenderTown_EventScript_VolunteerHouseSign

LavenderTown_MapEvents::
	map_events LavenderTown_ObjectEvents, LavenderTown_MapWarps, NULL, LavenderTown_MapBGEvents

