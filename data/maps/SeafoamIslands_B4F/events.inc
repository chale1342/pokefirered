@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SeafoamIslands_B4F/map.json
@

	.align 2

SeafoamIslands_B4F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 8, 18, 1, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, 0x0, FLAG_HIDE_SEAFOAM_B4F_BOULDER_1
	object_event 2, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 9, 18, 1, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, 0x0, FLAG_HIDE_SEAFOAM_B4F_BOULDER_2
	object_event 3, OBJ_EVENT_GFX_ARTICUNO, 9, 2, 4, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SeafoamIslands_B4F_EventScript_Articuno, FLAG_HIDE_ARTICUNO
	object_event 4, OBJ_EVENT_GFX_ITEM_BALL, 22, 19, 4, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SeafoamIslands_B4F_EventScript_ItemUltraBall, FLAG_HIDE_SEAFOAM_ISLANDS_B4F_ULTRA_BALL

SeafoamIslands_B4F_MapWarps:
	warp_def 15, 9, 4, 3, MAP_SEAFOAM_ISLANDS_B3F
	warp_def 32, 5, 4, 4, MAP_SEAFOAM_ISLANDS_B3F
	warp_def 8, 17, 1, 7, MAP_SEAFOAM_ISLANDS_B3F
	warp_def 9, 17, 1, 8, MAP_SEAFOAM_ISLANDS_B3F

SeafoamIslands_B4F_MapCoordEvents:
	coord_event 26, 19, 1, VAR_MAP_SCENE_SEAFOAM_ISLANDS_B4F, 0, SeafoamIslands_B4F_EventScript_UpwardCurrent
	coord_event 27, 19, 1, VAR_MAP_SCENE_SEAFOAM_ISLANDS_B4F, 0, SeafoamIslands_B4F_EventScript_UpwardCurrent
	coord_event 28, 19, 1, VAR_MAP_SCENE_SEAFOAM_ISLANDS_B4F, 0, SeafoamIslands_B4F_EventScript_UpwardCurrent

SeafoamIslands_B4F_MapBGEvents:
	bg_hidden_item_event 13, 8, 0, ITEM_WATER_STONE, FLAG_HIDDEN_ITEM_SEAFOAM_ISLANDS_B4F_WATER_STONE, 1, FALSE
	bg_sign_event 30, 2, 0, BG_EVENT_PLAYER_FACING_ANY, SeafoamIslands_B4F_EventScript_FastCurrentSign
	bg_sign_event 14, 18, 0, BG_EVENT_PLAYER_FACING_ANY, SeafoamIslands_B4F_EventScript_BoulderHintSign

SeafoamIslands_B4F_MapEvents::
	map_events SeafoamIslands_B4F_ObjectEvents, SeafoamIslands_B4F_MapWarps, SeafoamIslands_B4F_MapCoordEvents, SeafoamIslands_B4F_MapBGEvents

