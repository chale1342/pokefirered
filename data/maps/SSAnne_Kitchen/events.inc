@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SSAnne_Kitchen/map.json
@

	.align 2

SSAnne_Kitchen_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_CHEF, 1, 5, 3, MOVEMENT_TYPE_WANDER_UP_AND_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SSAnne_Kitchen_EventScript_Chef1, 0
	object_event 2, OBJ_EVENT_GFX_CHEF, 6, 6, 3, MOVEMENT_TYPE_WANDER_UP_AND_DOWN, 1, 2, TRAINER_TYPE_NONE, 0, SSAnne_Kitchen_EventScript_Chef2, 0
	object_event 3, OBJ_EVENT_GFX_CHEF, 10, 4, 3, MOVEMENT_TYPE_FACE_DOWN_AND_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, SSAnne_Kitchen_EventScript_Chef3, 0
	object_event 4, OBJ_EVENT_GFX_CHEF, 8, 9, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NONE, 0, SSAnne_Kitchen_EventScript_Chef4, 0
	object_event 5, OBJ_EVENT_GFX_CHEF, 14, 5, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NONE, 0, SSAnne_Kitchen_EventScript_Chef5, 0
	object_event 6, OBJ_EVENT_GFX_CHEF, 14, 7, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, SSAnne_Kitchen_EventScript_Chef6, 0
	object_event 7, OBJ_EVENT_GFX_CHEF, 14, 9, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NONE, 0, SSAnne_Kitchen_EventScript_Chef7, 0
	object_event 8, OBJ_EVENT_GFX_ITEM_BALL, 1, 10, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SSAnne_Kitchen_EventScript_ItemGreatBall, FLAG_HIDE_SSANNE_KITCHEN_GREAT_BALL

SSAnne_Kitchen_MapWarps:
	warp_def 7, 1, 0, 1, MAP_SSANNE_1F_CORRIDOR

SSAnne_Kitchen_MapBGEvents:
	bg_hidden_item_event 14, 8, 0, ITEM_CHESTO_BERRY, FLAG_HIDDEN_ITEM_SSANNE_KITCHEN_CHESTO_BERRY, 1, FALSE
	bg_hidden_item_event 14, 4, 0, ITEM_PECHA_BERRY, FLAG_HIDDEN_ITEM_SSANNE_KITCHEN_PECHA_BERRY, 1, FALSE
	bg_hidden_item_event 14, 6, 0, ITEM_CHERI_BERRY, FLAG_HIDDEN_ITEM_SSANNE_KITCHEN_CHERI_BERRY, 1, FALSE

SSAnne_Kitchen_MapEvents::
	map_events SSAnne_Kitchen_ObjectEvents, SSAnne_Kitchen_MapWarps, NULL, SSAnne_Kitchen_MapBGEvents

