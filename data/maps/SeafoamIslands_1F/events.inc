@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SeafoamIslands_1F/map.json
@

	.align 2

SeafoamIslands_1F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 22, 12, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, FLAG_HIDE_SEAFOAM_B1F_BOULDER_1, 0, EventScript_StrengthBoulder, FLAG_HIDE_SEAFOAM_1F_BOULDER_1
	object_event 2, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 32, 9, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, FLAG_HIDE_SEAFOAM_B1F_BOULDER_2, 0, EventScript_StrengthBoulder, FLAG_HIDE_SEAFOAM_1F_BOULDER_2
	object_event 3, OBJ_EVENT_GFX_ITEM_BALL, 11, 8, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SeafoamIslands_1F_EventScript_ItemIceHeal, FLAG_HIDE_SEAFOAM_ISLANDS_1F_ICE_HEAL

SeafoamIslands_1F_MapWarps:
	warp_def 10, 6, 3, 0, MAP_SEAFOAM_ISLANDS_B1F
	warp_def 31, 4, 3, 1, MAP_SEAFOAM_ISLANDS_B1F
	warp_def 28, 19, 3, 2, MAP_SEAFOAM_ISLANDS_B1F
	warp_def 6, 21, 3, 0, MAP_ROUTE20
	warp_def 32, 21, 3, 1, MAP_ROUTE20
	warp_def 21, 8, 3, 9, MAP_SEAFOAM_ISLANDS_B1F
	warp_def 30, 8, 3, 10, MAP_SEAFOAM_ISLANDS_B1F

SeafoamIslands_1F_MapEvents::
	map_events SeafoamIslands_1F_ObjectEvents, SeafoamIslands_1F_MapWarps, NULL, NULL

