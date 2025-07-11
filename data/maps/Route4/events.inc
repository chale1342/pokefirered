@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Route4/map.json
@

	.align 2

Route4_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_WOMAN_1, 9, 8, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, Route4_EventScript_Woman, 0
	object_event 2, OBJ_EVENT_GFX_LASS, 75, 3, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NORMAL, 4, Route4_EventScript_Crissy, 0
	object_event 3, OBJ_EVENT_GFX_ITEM_BALL, 67, 5, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, Route4_EventScript_ItemTM05, FLAG_HIDE_ROUTE4_TM05
	object_event 4, OBJ_EVENT_GFX_BOY, 15, 14, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, Route4_EventScript_Boy, 0
	object_event 5, OBJ_EVENT_GFX_BLACKBELT, 47, 3, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, Route4_EventScript_MegaPunchTutor, 0
	object_event 6, OBJ_EVENT_GFX_BLACKBELT, 50, 3, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, Route4_EventScript_MegaKickTutor, 0
	clone_event 7, OBJ_EVENT_GFX_COOLTRAINER_M, 109, 3, LOCALID_CERULEAN_CAVE_GUARD, MAP_CERULEAN_CITY

Route4_MapWarps:
	warp_def 19, 5, 3, 3, MAP_MT_MOON_1F
	warp_def 32, 5, 0, 7, MAP_MT_MOON_B1F
	warp_def 12, 5, 0, 1, MAP_ROUTE4_POKEMON_CENTER_1F

Route4_MapBGEvents:
	bg_sign_event 18, 7, 0, BG_EVENT_PLAYER_FACING_ANY, Route4_EventScript_MtMoonSign
	bg_sign_event 34, 7, 0, BG_EVENT_PLAYER_FACING_ANY, Route4_EventScript_RouteSign
	bg_hidden_item_event 43, 2, 3, ITEM_GREAT_BALL, FLAG_HIDDEN_ITEM_ROUTE4_GREAT_BALL, 1, FALSE
	bg_hidden_item_event 5, 4, 3, ITEM_PERSIM_BERRY, FLAG_HIDDEN_ITEM_ROUTE4_PERSIM_BERRY, 1, FALSE
	bg_hidden_item_event 67, 17, 3, ITEM_RAZZ_BERRY, FLAG_HIDDEN_ITEM_ROUTE4_RAZZ_BERRY, 1, FALSE

Route4_MapEvents::
	map_events Route4_ObjectEvents, Route4_MapWarps, NULL, Route4_MapBGEvents

