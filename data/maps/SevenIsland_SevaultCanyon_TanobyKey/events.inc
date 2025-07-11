@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SevenIsland_SevaultCanyon_TanobyKey/map.json
@

	.align 2

SevenIsland_SevaultCanyon_TanobyKey_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 7, 6, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, 0
	object_event 2, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 8, 6, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, 0
	object_event 3, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 8, 9, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, 0
	object_event 4, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 6, 10, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, 0
	object_event 5, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 8, 10, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, 0
	object_event 6, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 6, 9, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, 0
	object_event 7, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 6, 6, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, 0

SevenIsland_SevaultCanyon_TanobyKey_MapWarps:
	warp_def 7, 13, 3, 0, MAP_SEVEN_ISLAND_SEVAULT_CANYON

SevenIsland_SevaultCanyon_TanobyKey_MapCoordEvents:
	coord_event 7, 2, 3, VAR_TEMP_1, 99, SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch1
	coord_event 9, 8, 3, VAR_TEMP_7, 99, SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch7
	coord_event 5, 8, 3, VAR_TEMP_6, 99, SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch6
	coord_event 9, 6, 3, VAR_TEMP_5, 99, SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch5
	coord_event 5, 6, 3, VAR_TEMP_4, 99, SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch4
	coord_event 10, 4, 3, VAR_TEMP_3, 99, SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch3
	coord_event 4, 4, 3, VAR_TEMP_2, 99, SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch2

SevenIsland_SevaultCanyon_TanobyKey_MapEvents::
	map_events SevenIsland_SevaultCanyon_TanobyKey_ObjectEvents, SevenIsland_SevaultCanyon_TanobyKey_MapWarps, SevenIsland_SevaultCanyon_TanobyKey_MapCoordEvents, NULL

