@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/LavenderTown_VolunteerPokemonHouse/map.json
@

	.align 2

LavenderTown_VolunteerPokemonHouse_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_MR_FUJI, 3, 3, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, LavenderTown_VolunteerPokemonHouse_EventScript_MrFuji, FLAG_HIDE_POKEHOUSE_FUJI
	object_event 2, OBJ_EVENT_GFX_NIDORINO, 1, 4, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, LavenderTown_VolunteerPokemonHouse_EventScript_Nidorino, 0
	object_event 3, OBJ_EVENT_GFX_PSYDUCK, 9, 6, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NONE, 0, LavenderTown_VolunteerPokemonHouse_EventScript_Psyduck, 0
	object_event 4, OBJ_EVENT_GFX_LITTLE_BOY, 9, 5, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, LavenderTown_VolunteerPokemonHouse_EventScript_LittleBoy, 0
	object_event 5, OBJ_EVENT_GFX_YOUNGSTER, 3, 5, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, LavenderTown_VolunteerPokemonHouse_EventScript_Youngster, 0
	object_event 6, OBJ_EVENT_GFX_LITTLE_GIRL, 7, 2, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, LavenderTown_VolunteerPokemonHouse_EventScript_LittleGirl, 0

LavenderTown_VolunteerPokemonHouse_MapWarps:
	warp_def 3, 7, 3, 2, MAP_LAVENDER_TOWN
	warp_def 4, 7, 3, 2, MAP_LAVENDER_TOWN
	warp_def 5, 7, 3, 2, MAP_LAVENDER_TOWN

LavenderTown_VolunteerPokemonHouse_MapBGEvents:
	bg_sign_event 5, 4, 0, BG_EVENT_PLAYER_FACING_ANY, LavenderTown_VolunteerPokemonHouse_EventScript_PokemonFanMagazine
	bg_sign_event 3, 1, 0, BG_EVENT_PLAYER_FACING_ANY, LavenderTown_VolunteerPokemonHouse_EventScript_Bookshelf
	bg_sign_event 4, 1, 0, BG_EVENT_PLAYER_FACING_ANY, LavenderTown_VolunteerPokemonHouse_EventScript_Bookshelf

LavenderTown_VolunteerPokemonHouse_MapEvents::
	map_events LavenderTown_VolunteerPokemonHouse_ObjectEvents, LavenderTown_VolunteerPokemonHouse_MapWarps, NULL, LavenderTown_VolunteerPokemonHouse_MapBGEvents

