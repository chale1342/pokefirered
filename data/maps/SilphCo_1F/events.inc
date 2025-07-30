@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SilphCo_1F/map.json
@

	.align 2

SilphCo_1F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_WORKER_F, 3, 7, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SilphCo_1F_EventScript_Receptionist, FLAG_HIDE_SAFFRON_CIVILIANS

SilphCo_1F_MapWarps:
	warp_def 7, 21, 0, 0, MAP_SAFFRON_CITY
	warp_def 8, 20, 3, 0, MAP_SAFFRON_CITY
	warp_def 9, 20, 3, 0, MAP_SAFFRON_CITY
	warp_def 31, 2, 3, 3, MAP_SILPH_CO_2F
	warp_def 22, 3, 0, 0, MAP_SILPH_CO_ELEVATOR

SilphCo_1F_MapBGEvents:
	bg_sign_event 30, 1, 0, BG_EVENT_PLAYER_FACING_ANY, SilphCo_1F_EventScript_FloorSign

SilphCo_1F_MapEvents::
	map_events SilphCo_1F_ObjectEvents, SilphCo_1F_MapWarps, NULL, SilphCo_1F_MapBGEvents

