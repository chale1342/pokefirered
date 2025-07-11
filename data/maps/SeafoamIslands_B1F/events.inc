@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SeafoamIslands_B1F/map.json
@

	.align 2

SeafoamIslands_B1F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 22, 8, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, FLAG_HIDE_SEAFOAM_B2F_BOULDER_1, 0, EventScript_StrengthBoulder, FLAG_HIDE_SEAFOAM_B1F_BOULDER_1
	object_event 2, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 30, 8, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, FLAG_HIDE_SEAFOAM_B2F_BOULDER_2, 0, EventScript_StrengthBoulder, FLAG_HIDE_SEAFOAM_B1F_BOULDER_2
	object_event 3, OBJ_EVENT_GFX_ITEM_BALL, 19, 18, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SeafoamIslands_B1F_EventScript_ItemWaterStone, FLAG_HIDE_SEAFOAM_ISLANDS_B1F_WATER_STONE
	object_event 4, OBJ_EVENT_GFX_ITEM_BALL, 24, 14, 4, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SeafoamIslands_B1F_EventScript_ItemRevive, FLAG_HIDE_SEAFOAM_ISLANDS_B1F_REVIVE

SeafoamIslands_B1F_MapWarps:
	warp_def 10, 6, 4, 0, MAP_SEAFOAM_ISLANDS_1F
	warp_def 31, 4, 3, 1, MAP_SEAFOAM_ISLANDS_1F
	warp_def 28, 19, 3, 2, MAP_SEAFOAM_ISLANDS_1F
	warp_def 7, 3, 3, 3, MAP_SEAFOAM_ISLANDS_B2F
	warp_def 17, 9, 4, 4, MAP_SEAFOAM_ISLANDS_B2F
	warp_def 25, 19, 3, 5, MAP_SEAFOAM_ISLANDS_B2F
	warp_def 32, 14, 3, 6, MAP_SEAFOAM_ISLANDS_B2F
	warp_def 23, 8, 3, 7, MAP_SEAFOAM_ISLANDS_B2F
	warp_def 28, 8, 3, 8, MAP_SEAFOAM_ISLANDS_B2F
	warp_def 21, 8, 3, 5, MAP_SEAFOAM_ISLANDS_1F
	warp_def 29, 8, 3, 6, MAP_SEAFOAM_ISLANDS_1F

SeafoamIslands_B1F_MapEvents::
	map_events SeafoamIslands_B1F_ObjectEvents, SeafoamIslands_B1F_MapWarps, NULL, NULL

