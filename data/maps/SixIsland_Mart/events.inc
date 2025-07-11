@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SixIsland_Mart/map.json
@

	.align 2

SixIsland_Mart_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_CLERK, 2, 3, 0, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, SixIsland_Mart_EventScript_Clerk, 0
	object_event 2, OBJ_EVENT_GFX_OLD_WOMAN, 8, 3, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, SixIsland_Mart_EventScript_OldWoman, 0
	object_event 3, OBJ_EVENT_GFX_PICNICKER, 7, 7, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, SixIsland_Mart_EventScript_Picnicker, 0

SixIsland_Mart_MapWarps:
	warp_def 4, 7, 3, 3, MAP_SIX_ISLAND

SixIsland_Mart_MapEvents::
	map_events SixIsland_Mart_ObjectEvents, SixIsland_Mart_MapWarps, NULL, NULL

