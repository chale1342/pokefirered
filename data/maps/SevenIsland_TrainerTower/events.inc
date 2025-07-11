@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SevenIsland_TrainerTower/map.json
@

	.align 2

SevenIsland_TrainerTower_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_BOY, 56, 26, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NORMAL, 1, SevenIsland_TrainerTower_EventScript_Dario, 0
	object_event 2, OBJ_EVENT_GFX_WOMAN_1, 56, 29, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 1, SevenIsland_TrainerTower_EventScript_Rodette, 0

SevenIsland_TrainerTower_MapWarps:
	warp_def 58, 7, 3, 1, MAP_TRAINER_TOWER_LOBBY

SevenIsland_TrainerTower_MapBGEvents:
	bg_hidden_item_event 49, 27, 3, ITEM_BIG_PEARL, FLAG_HIDDEN_ITEM_SEVEN_ISLAND_TRAINER_TOWER_BIG_PEARL, 1, FALSE
	bg_hidden_item_event 47, 30, 3, ITEM_PEARL, FLAG_HIDDEN_ITEM_SEVEN_ISLAND_TRAINER_TOWER_PEARL, 1, FALSE
	bg_hidden_item_event 59, 32, 3, ITEM_NANAB_BERRY, FLAG_HIDDEN_ITEM_SEVEN_ISLAND_TRAINER_TOWER_NANAB_BERRY, 1, FALSE
	bg_sign_event 56, 8, 0, BG_EVENT_PLAYER_FACING_ANY, SevenIsland_TrainerTower_EventScript_TrainerTowerSign
	bg_sign_event 50, 30, 0, BG_EVENT_PLAYER_FACING_ANY, SevenIsland_TrainerTower_EventScript_TrainerTowerAheadSign

SevenIsland_TrainerTower_MapEvents::
	map_events SevenIsland_TrainerTower_ObjectEvents, SevenIsland_TrainerTower_MapWarps, NULL, SevenIsland_TrainerTower_MapBGEvents

