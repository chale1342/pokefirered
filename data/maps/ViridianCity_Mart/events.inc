@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/ViridianCity_Mart/map.json
@

	.align 2

ViridianCity_Mart_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_CLERK, 2, 3, 0, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, ViridianCity_Mart_EventScript_Clerk, 0
	object_event 2, OBJ_EVENT_GFX_YOUNGSTER, 6, 2, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, ViridianCity_Mart_EventScript_Youngster, 0
	object_event 3, OBJ_EVENT_GFX_WOMAN_1, 9, 5, 3, MOVEMENT_TYPE_WANDER_UP_AND_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, ViridianCity_Mart_EventScript_Woman, 0
	object_event 4, OBJ_EVENT_GFX_FISHER, 1, 6, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, ViridianCity_Mart_EventScript_FishingGuru, 0

ViridianCity_Mart_MapWarps:
	warp_def 3, 7, 3, 4, MAP_VIRIDIAN_CITY
	warp_def 4, 7, 3, 4, MAP_VIRIDIAN_CITY
	warp_def 5, 7, 3, 4, MAP_VIRIDIAN_CITY

ViridianCity_Mart_MapEvents::
	map_events ViridianCity_Mart_ObjectEvents, ViridianCity_Mart_MapWarps, NULL, NULL

