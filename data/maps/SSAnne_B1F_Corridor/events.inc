@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SSAnne_B1F_Corridor/map.json
@

	.align 2

SSAnne_B1F_Corridor_MapWarps:
	warp_def 19, 3, 3, 5, MAP_SSANNE_1F_CORRIDOR
	warp_def 2, 2, 0, 0, MAP_SSANNE_B1F_ROOM1
	warp_def 6, 2, 0, 0, MAP_SSANNE_B1F_ROOM2
	warp_def 10, 2, 0, 0, MAP_SSANNE_B1F_ROOM3
	warp_def 14, 2, 0, 0, MAP_SSANNE_B1F_ROOM4
	warp_def 18, 2, 0, 0, MAP_SSANNE_B1F_ROOM5

SSAnne_B1F_Corridor_MapBGEvents:
	bg_hidden_item_event 21, 5, 3, ITEM_HYPER_POTION, FLAG_HIDDEN_ITEM_SSANNE_B1F_CORRIDOR_HYPER_POTION, 1, FALSE

SSAnne_B1F_Corridor_MapEvents::
	map_events NULL, SSAnne_B1F_Corridor_MapWarps, NULL, SSAnne_B1F_Corridor_MapBGEvents

