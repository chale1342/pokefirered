@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/ViridianForest/map.json
@

	.align 2

ViridianForest_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_YOUNGSTER, 29, 58, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NONE, 0, ViridianForest_EventScript_Youngster, 0
	object_event 2, OBJ_EVENT_GFX_BOY, 45, 58, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, ViridianForest_EventScript_Boy, 0
	object_event 3, OBJ_EVENT_GFX_BUG_CATCHER, 47, 45, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NORMAL, 5, ViridianForest_EventScript_Rick, 0
	object_event 4, OBJ_EVENT_GFX_BUG_CATCHER, 47, 29, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NORMAL, 4, ViridianForest_EventScript_Doug, 0
	object_event 5, OBJ_EVENT_GFX_BUG_CATCHER, 7, 22, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NORMAL, 4, ViridianForest_EventScript_Sammy, 0
	object_event 6, OBJ_EVENT_GFX_ITEM_BALL, 5, 41, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, ViridianForest_EventScript_ItemPokeBall, FLAG_HIDE_VIRIDIAN_FOREST_POKE_BALL
	object_event 7, OBJ_EVENT_GFX_ITEM_BALL, 40, 21, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, ViridianForest_EventScript_ItemAntidote, FLAG_HIDE_VIRIDIAN_FOREST_ANTIDOTE
	object_event 8, OBJ_EVENT_GFX_ITEM_BALL, 21, 34, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, ViridianForest_EventScript_ItemPotion, FLAG_HIDE_VIRIDIAN_FOREST_POTION
	object_event 9, OBJ_EVENT_GFX_BUG_CATCHER, 43, 6, 3, MOVEMENT_TYPE_FACE_DOWN_AND_UP, 1, 1, TRAINER_TYPE_NORMAL, 1, ViridianForest_EventScript_Anthony, 0
	object_event 10, OBJ_EVENT_GFX_BUG_CATCHER, 16, 5, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NORMAL, 1, ViridianForest_EventScript_Charlie, 0
	object_event 11, OBJ_EVENT_GFX_ITEM_BALL, 49, 60, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, ViridianForest_EventScript_ItemPotion2, FLAG_HIDE_VIRIDIAN_FOREST_POTION_2

ViridianForest_MapWarps:
	warp_def 29, 62, 3, 3, MAP_ROUTE2_VIRIDIAN_FOREST_SOUTH_ENTRANCE
	warp_def 28, 62, 3, 3, MAP_ROUTE2_VIRIDIAN_FOREST_SOUTH_ENTRANCE
	warp_def 5, 9, 3, 1, MAP_ROUTE2_VIRIDIAN_FOREST_NORTH_ENTRANCE
	warp_def 6, 9, 3, 1, MAP_ROUTE2_VIRIDIAN_FOREST_NORTH_ENTRANCE
	warp_def 30, 62, 3, 3, MAP_ROUTE2_VIRIDIAN_FOREST_SOUTH_ENTRANCE
	warp_def 4, 9, 3, 1, MAP_ROUTE2_VIRIDIAN_FOREST_NORTH_ENTRANCE

ViridianForest_MapBGEvents:
	bg_sign_event 39, 59, 3, BG_EVENT_PLAYER_FACING_ANY, ViridianForest_EventScript_TrainerTips1
	bg_sign_event 43, 26, 0, BG_EVENT_PLAYER_FACING_ANY, ViridianForest_EventScript_TrainerTips3
	bg_sign_event 9, 29, 0, BG_EVENT_PLAYER_FACING_ANY, ViridianForest_EventScript_TrainerTips4
	bg_sign_event 6, 12, 0, BG_EVENT_PLAYER_FACING_ANY, ViridianForest_EventScript_ExitSign
	bg_sign_event 28, 44, 0, BG_EVENT_PLAYER_FACING_ANY, ViridianForest_EventScript_TrainerTips2
	bg_sign_event 31, 60, 0, BG_EVENT_PLAYER_FACING_ANY, ViridianForest_EventScript_TrainerTips5
	bg_hidden_item_event 3, 22, 3, ITEM_POTION, FLAG_HIDDEN_ITEM_VIRIDIAN_FOREST_POTION, 1, FALSE
	bg_hidden_item_event 28, 57, 0, ITEM_ANTIDOTE, FLAG_HIDDEN_ITEM_VIRIDIAN_FOREST_ANTIDOTE, 1, FALSE

ViridianForest_MapEvents::
	map_events ViridianForest_ObjectEvents, ViridianForest_MapWarps, NULL, ViridianForest_MapBGEvents

