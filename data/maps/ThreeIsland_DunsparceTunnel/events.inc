@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/ThreeIsland_DunsparceTunnel/map.json
@

	.align 2

ThreeIsland_DunsparceTunnel_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_FAT_MAN, 23, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, ThreeIsland_DunsparceTunnel_EventScript_Prospector, 0

ThreeIsland_DunsparceTunnel_MapWarps:
	warp_def 3, 4, 3, 0, MAP_THREE_ISLAND_PORT
	warp_def 25, 5, 3, 1, MAP_THREE_ISLAND_PORT

ThreeIsland_DunsparceTunnel_MapBGEvents:
	bg_hidden_item_event 21, 3, 0, ITEM_NUGGET, FLAG_HIDDEN_ITEM_THREE_ISLAND_DUNSPARCE_TUNNEL_NUGGET, 1, FALSE

ThreeIsland_DunsparceTunnel_MapEvents::
	map_events ThreeIsland_DunsparceTunnel_ObjectEvents, ThreeIsland_DunsparceTunnel_MapWarps, NULL, ThreeIsland_DunsparceTunnel_MapBGEvents

