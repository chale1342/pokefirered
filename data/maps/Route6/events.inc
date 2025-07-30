@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Route6/map.json
@

	.align 2

Route6_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_BUG_CATCHER, 3, 16, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NORMAL, 5, Route6_EventScript_Keigo, 0
	object_event 2, OBJ_EVENT_GFX_CAMPER, 12, 21, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NORMAL, 0, Route6_EventScript_Ricky, 0
	object_event 3, OBJ_EVENT_GFX_PICNICKER, 13, 21, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NORMAL, 0, Route6_EventScript_Nancy, 0
	object_event 4, OBJ_EVENT_GFX_BUG_CATCHER, 20, 25, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NORMAL, 3, Route6_EventScript_Elijah, 0
	object_event 5, OBJ_EVENT_GFX_PICNICKER, 13, 32, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NORMAL, 3, Route6_EventScript_Isabelle, 0
	object_event 6, OBJ_EVENT_GFX_CAMPER, 13, 33, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NORMAL, 3, Route6_EventScript_Jeff, 0

Route6_MapWarps:
	warp_def 19, 13, 0, 1, MAP_UNDERGROUND_PATH_SOUTH_ENTRANCE
	warp_def 12, 5, 3, 2, MAP_ROUTE6_NORTH_ENTRANCE
	warp_def 13, 5, 3, 2, MAP_ROUTE6_NORTH_ENTRANCE

Route6_MapBGEvents:
	bg_sign_event 21, 15, 0, BG_EVENT_PLAYER_FACING_ANY, Route6_EventScript_UndergroundPathSign
	bg_hidden_item_event 5, 5, 3, ITEM_SITRUS_BERRY, FLAG_HIDDEN_ITEM_ROUTE6_SITRUS_BERRY, 1, FALSE
	bg_hidden_item_event 19, 5, 3, ITEM_RARE_CANDY, FLAG_HIDDEN_ITEM_ROUTE6_RARE_CANDY, 1, FALSE

Route6_MapEvents::
	map_events Route6_ObjectEvents, Route6_MapWarps, NULL, Route6_MapBGEvents

