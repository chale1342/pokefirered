@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SeafoamIslands_B2F/map.json
@

	.align 2

SeafoamIslands_B2F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 22, 8, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, FLAG_HIDE_SEAFOAM_B3F_BOULDER_1, 0, EventScript_StrengthBoulder, FLAG_HIDE_SEAFOAM_B2F_BOULDER_1
	object_event 2, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 30, 8, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, FLAG_HIDE_SEAFOAM_B3F_BOULDER_2, 0, EventScript_StrengthBoulder, FLAG_HIDE_SEAFOAM_B2F_BOULDER_2
	object_event 3, OBJ_EVENT_GFX_ITEM_BALL, 18, 15, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SeafoamIslands_B2F_EventScript_ItemBigPearl, FLAG_HIDE_SEAFOAM_ISLANDS_B2F_BIG_PEARL

SeafoamIslands_B2F_MapWarps:
	warp_def 7, 17, 3, 0, MAP_SEAFOAM_ISLANDS_B3F
	warp_def 32, 4, 3, 1, MAP_SEAFOAM_ISLANDS_B3F
	warp_def 31, 17, 4, 2, MAP_SEAFOAM_ISLANDS_B3F
	warp_def 7, 4, 3, 3, MAP_SEAFOAM_ISLANDS_B1F
	warp_def 17, 9, 4, 4, MAP_SEAFOAM_ISLANDS_B1F
	warp_def 25, 19, 3, 5, MAP_SEAFOAM_ISLANDS_B1F
	warp_def 32, 14, 4, 6, MAP_SEAFOAM_ISLANDS_B1F
	warp_def 22, 7, 3, 7, MAP_SEAFOAM_ISLANDS_B1F
	warp_def 29, 8, 3, 8, MAP_SEAFOAM_ISLANDS_B1F
	warp_def 24, 8, 3, 5, MAP_SEAFOAM_ISLANDS_B3F
	warp_def 27, 8, 3, 6, MAP_SEAFOAM_ISLANDS_B3F

SeafoamIslands_B2F_MapEvents::
	map_events SeafoamIslands_B2F_ObjectEvents, SeafoamIslands_B2F_MapWarps, NULL, NULL

