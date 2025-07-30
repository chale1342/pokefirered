@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/MtMoon_B1F/map.json
@

	.align 2

MtMoon_B1F_MapWarps:
	warp_def 3, 3, 3, 0, MAP_MT_MOON_1F
	warp_def 25, 4, 3, 1, MAP_MT_MOON_1F
	warp_def 43, 21, 3, 2, MAP_MT_MOON_1F
	warp_def 22, 18, 3, 0, MAP_MT_MOON_B2F
	warp_def 17, 5, 3, 1, MAP_MT_MOON_B2F
	warp_def 26, 36, 3, 2, MAP_MT_MOON_B2F
	warp_def 39, 4, 3, 3, MAP_MT_MOON_B2F
	warp_def 45, 4, 3, 1, MAP_ROUTE4

MtMoon_B1F_MapBGEvents:
	bg_hidden_item_event 46, 2, 0, ITEM_TINY_MUSHROOM, FLAG_HIDDEN_ITEM_MT_MOON_B1F_TINY_MUSHROOM, 1, FALSE
	bg_hidden_item_event 26, 2, 0, ITEM_TINY_MUSHROOM, FLAG_HIDDEN_ITEM_MT_MOON_B1F_TINY_MUSHROOM_2, 1, FALSE
	bg_hidden_item_event 39, 34, 0, ITEM_TINY_MUSHROOM, FLAG_HIDDEN_ITEM_MT_MOON_B1F_TINY_MUSHROOM_3, 1, FALSE
	bg_hidden_item_event 24, 35, 0, ITEM_BIG_MUSHROOM, FLAG_HIDDEN_ITEM_MT_MOON_B1F_BIG_MUSHROOM, 1, FALSE
	bg_hidden_item_event 6, 12, 0, ITEM_BIG_MUSHROOM, FLAG_HIDDEN_ITEM_MT_MOON_B1F_BIG_MUSHROOM_2, 1, FALSE
	bg_hidden_item_event 25, 34, 0, ITEM_BIG_MUSHROOM, FLAG_HIDDEN_ITEM_MT_MOON_B1F_BIG_MUSHROOM_3, 1, FALSE

MtMoon_B1F_MapEvents::
	map_events NULL, MtMoon_B1F_MapWarps, NULL, MtMoon_B1F_MapBGEvents

