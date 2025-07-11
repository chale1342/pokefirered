@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/NavelRock_Summit/map.json
@

	.align 2

NavelRock_Summit_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_HO_OH, 9, 6, 0, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, 0x0, FLAG_HIDE_HO_OH

NavelRock_Summit_MapWarps:
	warp_def 10, 18, 3, 1, MAP_NAVEL_ROCK_SUMMIT_PATH_5F

NavelRock_Summit_MapCoordEvents:
	coord_event 9, 12, 3, VAR_TEMP_1, 0, NavelRock_Summit_EventScript_HoOh

NavelRock_Summit_MapBGEvents:
	bg_hidden_item_event 9, 11, 3, ITEM_SACRED_ASH, FLAG_HIDDEN_ITEM_NAVEL_ROCK_SUMMIT_SACRED_ASH, 1, TRUE

NavelRock_Summit_MapEvents::
	map_events NavelRock_Summit_ObjectEvents, NavelRock_Summit_MapWarps, NavelRock_Summit_MapCoordEvents, NavelRock_Summit_MapBGEvents

