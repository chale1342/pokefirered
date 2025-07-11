@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/VermilionCity_PokemonFanClub/map.json
@

	.align 2

VermilionCity_PokemonFanClub_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_GENTLEMAN, 5, 4, 4, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, VermilionCity_PokemonFanClub_EventScript_Chairman, 0
	object_event 2, OBJ_EVENT_GFX_WORKER_F, 6, 4, 4, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, VermilionCity_PokemonFanClub_EventScript_WorkerF, 0
	object_event 3, OBJ_EVENT_GFX_PIKACHU, 7, 6, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, VermilionCity_PokemonFanClub_EventScript_Pikachu, 0
	object_event 4, OBJ_EVENT_GFX_SEEL, 4, 6, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, VermilionCity_PokemonFanClub_EventScript_Seel, 0
	object_event 5, OBJ_EVENT_GFX_WOMAN_1, 4, 5, 0, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, VermilionCity_PokemonFanClub_EventScript_Woman, 0
	object_event 6, OBJ_EVENT_GFX_FAT_MAN, 7, 5, 0, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, VermilionCity_PokemonFanClub_EventScript_FatMan, 0

VermilionCity_PokemonFanClub_MapWarps:
	warp_def 4, 10, 3, 5, MAP_VERMILION_CITY
	warp_def 5, 10, 3, 5, MAP_VERMILION_CITY
	warp_def 6, 10, 3, 5, MAP_VERMILION_CITY

VermilionCity_PokemonFanClub_MapBGEvents:
	bg_sign_event 2, 1, 0, BG_EVENT_PLAYER_FACING_ANY, VermilionCity_PokemonFanClub_EventScript_RulesSign1
	bg_sign_event 9, 1, 0, BG_EVENT_PLAYER_FACING_ANY, VermilionCity_PokemonFanClub_EventScript_RulesSign2

VermilionCity_PokemonFanClub_MapEvents::
	map_events VermilionCity_PokemonFanClub_ObjectEvents, VermilionCity_PokemonFanClub_MapWarps, NULL, VermilionCity_PokemonFanClub_MapBGEvents

