@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/ViridianCity_School/map.json
@

	.align 2

ViridianCity_School_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_WOMAN_2, 6, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, ViridianCity_School_EventScript_Woman, 0
	object_event 2, OBJ_EVENT_GFX_LASS, 4, 5, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NONE, 0, ViridianCity_School_EventScript_Lass, 0

ViridianCity_School_MapWarps:
	warp_def 3, 7, 0, 3, MAP_VIRIDIAN_CITY
	warp_def 4, 7, 0, 3, MAP_VIRIDIAN_CITY
	warp_def 5, 7, 3, 3, MAP_VIRIDIAN_CITY

ViridianCity_School_MapBGEvents:
	bg_sign_event 4, 4, 0, BG_EVENT_PLAYER_FACING_ANY, ViridianCity_School_EventScript_Notebook
	bg_sign_event 5, 1, 0, BG_EVENT_PLAYER_FACING_ANY, ViridianCity_School_EventScript_Blackboard
	bg_sign_event 4, 1, 0, BG_EVENT_PLAYER_FACING_ANY, ViridianCity_School_EventScript_Blackboard
	bg_sign_event 9, 2, 0, BG_EVENT_PLAYER_FACING_NORTH, ViridianCity_School_EventScript_PokemonJournal
	bg_sign_event 8, 2, 0, BG_EVENT_PLAYER_FACING_NORTH, ViridianCity_School_EventScript_PokemonJournal

ViridianCity_School_MapEvents::
	map_events ViridianCity_School_ObjectEvents, ViridianCity_School_MapWarps, NULL, ViridianCity_School_MapBGEvents

