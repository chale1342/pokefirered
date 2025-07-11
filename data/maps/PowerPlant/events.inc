@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/PowerPlant/map.json
@

	.align 2

PowerPlant_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_ITEM_BALL, 7, 27, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, PowerPlant_EventScript_ItemMaxPotion, FLAG_HIDE_POWER_PLANT_MAX_POTION
	object_event 2, OBJ_EVENT_GFX_ITEM_BALL, 40, 22, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, PowerPlant_EventScript_ItemTM17, FLAG_HIDE_POWER_PLANT_TM17
	object_event 3, OBJ_EVENT_GFX_ITEM_BALL, 46, 37, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, PowerPlant_EventScript_ItemTM25, FLAG_HIDE_POWER_PLANT_TM25
	object_event 4, OBJ_EVENT_GFX_ITEM_BALL, 45, 4, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, PowerPlant_EventScript_ItemThunderStone, FLAG_HIDE_POWER_PLANT_THUNDER_STONE
	object_event 5, OBJ_EVENT_GFX_ITEM_BALL, 26, 22, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, PowerPlant_EventScript_ItemElixir, FLAG_HIDE_POWER_PLANT_ELIXIR
	object_event 6, OBJ_EVENT_GFX_ZAPDOS, 5, 11, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, PowerPlant_EventScript_Zapdos, FLAG_HIDE_ZAPDOS
	object_event 7, OBJ_EVENT_GFX_ITEM_BALL, 36, 5, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, PowerPlant_EventScript_Electrode2, FLAG_HIDE_POWER_PLANT_ELECTRODE_2
	object_event 8, OBJ_EVENT_GFX_ITEM_BALL, 30, 38, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, PowerPlant_EventScript_Electrode1, FLAG_HIDE_POWER_PLANT_ELECTRODE_1

PowerPlant_MapWarps:
	warp_def 4, 39, 3, 2, MAP_ROUTE10
	warp_def 5, 38, 3, 2, MAP_ROUTE10
	warp_def 6, 39, 3, 2, MAP_ROUTE10
	warp_def 1, 11, 3, 4, MAP_ROUTE10
	warp_def 0, 13, 3, 2, MAP_ROUTE10

PowerPlant_MapBGEvents:
	bg_hidden_item_event 29, 16, 3, ITEM_MAX_ELIXIR, FLAG_HIDDEN_ITEM_POWER_PLANT_MAX_ELIXIR, 1, FALSE
	bg_hidden_item_event 8, 12, 3, ITEM_THUNDER_STONE, FLAG_HIDDEN_ITEM_POWER_PLANT_THUNDER_STONE, 1, FALSE

PowerPlant_MapEvents::
	map_events PowerPlant_ObjectEvents, PowerPlant_MapWarps, NULL, PowerPlant_MapBGEvents

