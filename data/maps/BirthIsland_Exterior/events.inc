@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/BirthIsland_Exterior/map.json
@

	.align 2

BirthIsland_Exterior_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_METEORITE, 15, 12, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, BirthIsland_Exterior_EventScript_Triangle, FLAG_HIDE_BIRTH_ISLAND_METEORITE
	object_event 2, OBJ_EVENT_GFX_VAR_0, 15, 3, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, 0x0, FLAG_HIDE_DEOXYS

BirthIsland_Exterior_MapWarps:
	warp_def 15, 24, 3, 0, MAP_BIRTH_ISLAND_HARBOR

BirthIsland_Exterior_MapEvents::
	map_events BirthIsland_Exterior_ObjectEvents, BirthIsland_Exterior_MapWarps, NULL, NULL

