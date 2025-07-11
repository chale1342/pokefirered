@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/FuchsiaCity_Mart/map.json
@

	.align 2

FuchsiaCity_Mart_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_CLERK, 2, 3, 0, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, FuchsiaCity_Mart_EventScript_Clerk, 0
	object_event 2, OBJ_EVENT_GFX_GENTLEMAN, 6, 3, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, FuchsiaCity_Mart_EventScript_Gentleman, 0
	object_event 3, OBJ_EVENT_GFX_COOLTRAINER_F, 9, 5, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, FuchsiaCity_Mart_EventScript_CooltrainerF, 0

FuchsiaCity_Mart_MapWarps:
	warp_def 3, 7, 3, 2, MAP_FUCHSIA_CITY
	warp_def 4, 7, 3, 2, MAP_FUCHSIA_CITY
	warp_def 5, 7, 3, 2, MAP_FUCHSIA_CITY

FuchsiaCity_Mart_MapEvents::
	map_events FuchsiaCity_Mart_ObjectEvents, FuchsiaCity_Mart_MapWarps, NULL, NULL

