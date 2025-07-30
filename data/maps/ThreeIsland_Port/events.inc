@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/ThreeIsland_Port/map.json
@

	.align 2

ThreeIsland_Port_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_WOMAN_3, 14, 9, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, ThreeIsland_Port_EventScript_Woman, 0
	object_event 2, OBJ_EVENT_GFX_BIKER, 8, 8, 3, MOVEMENT_TYPE_WALK_RIGHT_AND_LEFT, 3, 1, TRAINER_TYPE_NONE, 0, ThreeIsland_Port_EventScript_Biker1, FLAG_HIDE_THREE_ISLAND_BIKERS
	object_event 3, OBJ_EVENT_GFX_BIKER, 13, 10, 3, MOVEMENT_TYPE_WALK_SEQUENCE_UP_RIGHT_DOWN_LEFT, 2, 2, TRAINER_TYPE_NONE, 0, ThreeIsland_Port_EventScript_Biker2, FLAG_HIDE_THREE_ISLAND_BIKERS

ThreeIsland_Port_MapWarps:
	warp_def 16, 4, 0, 0, MAP_THREE_ISLAND_DUNSPARCE_TUNNEL
	warp_def 38, 5, 3, 1, MAP_THREE_ISLAND_DUNSPARCE_TUNNEL
	warp_def 12, 13, 3, 0, MAP_THREE_ISLAND_HARBOR

ThreeIsland_Port_MapEvents::
	map_events ThreeIsland_Port_ObjectEvents, ThreeIsland_Port_MapWarps, NULL, NULL

