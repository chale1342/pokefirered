@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/FiveIsland_MemorialPillar/map.json
@

	.align 2

FiveIsland_MemorialPillar_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_MAN, 8, 44, 4, MOVEMENT_TYPE_FACE_UP_AND_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, FiveIsland_MemorialPillar_EventScript_MemorialMan, 0
	object_event 2, OBJ_EVENT_GFX_ROCKER, 12, 6, 3, MOVEMENT_TYPE_FACE_UP_LEFT_AND_RIGHT, 1, 1, TRAINER_TYPE_NORMAL, 3, FiveIsland_MemorialPillar_EventScript_Milo, 0
	object_event 3, OBJ_EVENT_GFX_ROCKER, 14, 17, 3, MOVEMENT_TYPE_FACE_DOWN_UP_AND_LEFT, 1, 1, TRAINER_TYPE_NORMAL, 2, FiveIsland_MemorialPillar_EventScript_Chaz, 0
	object_event 4, OBJ_EVENT_GFX_ROCKER, 17, 31, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NORMAL, 3, FiveIsland_MemorialPillar_EventScript_Harold, 0
	object_event 5, OBJ_EVENT_GFX_ITEM_BALL, 4, 47, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, FiveIsland_MemorialPillar_EventScript_ItemMetalCoat, FLAG_HIDE_FIVE_ISLAND_MEMORIAL_PILLAR_METAL_COAT

FiveIsland_MemorialPillar_MapBGEvents:
	bg_sign_event 9, 43, 0, BG_EVENT_PLAYER_FACING_NORTH, FiveIsland_MemorialPillar_EventScript_Memorial
	bg_hidden_item_event 8, 52, 3, ITEM_BIG_PEARL, FLAG_HIDDEN_ITEM_FIVE_ISLAND_MEMORIAL_PILLAR_BIG_PEARL, 1, FALSE
	bg_hidden_item_event 15, 7, 3, ITEM_RAZZ_BERRY, FLAG_HIDDEN_ITEM_FIVE_ISLAND_MEMORIAL_PILLAR_RAZZ_BERRY, 1, FALSE
	bg_hidden_item_event 17, 22, 3, ITEM_SITRUS_BERRY, FLAG_HIDDEN_ITEM_FIVE_ISLAND_MEMORIAL_PILLAR_SITRUS_BERRY, 1, FALSE
	bg_hidden_item_event 14, 25, 3, ITEM_BLUK_BERRY, FLAG_HIDDEN_ITEM_FIVE_ISLAND_MEMORIAL_PILLAR_BLUK_BERRY, 1, FALSE

FiveIsland_MemorialPillar_MapEvents::
	map_events FiveIsland_MemorialPillar_ObjectEvents, NULL, NULL, FiveIsland_MemorialPillar_MapBGEvents

