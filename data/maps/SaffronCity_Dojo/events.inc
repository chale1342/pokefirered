@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SaffronCity_Dojo/map.json
@

	.align 2

SaffronCity_Dojo_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_BLACKBELT, 11, 10, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NORMAL, 7, SaffronCity_Dojo_EventScript_Hitoshi, 0
	object_event 2, OBJ_EVENT_GFX_BLACKBELT, 1, 10, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NORMAL, 7, SaffronCity_Dojo_EventScript_Hideki, 0
	object_event 3, OBJ_EVENT_GFX_BLACKBELT, 11, 8, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NORMAL, 7, SaffronCity_Dojo_EventScript_Aaron, 0
	object_event 4, OBJ_EVENT_GFX_BLACKBELT, 1, 8, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NORMAL, 7, SaffronCity_Dojo_EventScript_Mike, 0
	object_event 5, OBJ_EVENT_GFX_BLACKBELT, 6, 5, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 2, SaffronCity_Dojo_EventScript_MasterKoichi, 0
	object_event 6, OBJ_EVENT_GFX_ITEM_BALL, 5, 3, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SaffronCity_Dojo_EventScript_HitmonleeBall, FLAG_HIDE_DOJO_HITMONLEE_BALL
	object_event 7, OBJ_EVENT_GFX_ITEM_BALL, 7, 3, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SaffronCity_Dojo_EventScript_HitmonchanBall, FLAG_HIDE_DOJO_HITMONCHAN_BALL

SaffronCity_Dojo_MapWarps:
	warp_def 5, 14, 3, 2, MAP_SAFFRON_CITY
	warp_def 6, 14, 3, 2, MAP_SAFFRON_CITY
	warp_def 7, 14, 3, 2, MAP_SAFFRON_CITY

SaffronCity_Dojo_MapCoordEvents:
	coord_event 5, 5, 3, VAR_MAP_SCENE_SAFFRON_CITY_DOJO, 0, SaffronCity_Dojo_EventScript_TriggerMasterBattleLeft
	coord_event 7, 5, 3, VAR_MAP_SCENE_SAFFRON_CITY_DOJO, 0, SaffronCity_Dojo_EventScript_TriggerMasterBattleRight

SaffronCity_Dojo_MapBGEvents:
	bg_sign_event 3, 13, 0, BG_EVENT_PLAYER_FACING_ANY, SaffronCity_Dojo_EventScript_Statue
	bg_sign_event 9, 13, 0, BG_EVENT_PLAYER_FACING_ANY, SaffronCity_Dojo_EventScript_Statue
	bg_sign_event 5, 2, 0, BG_EVENT_PLAYER_FACING_ANY, SaffronCity_Dojo_EventScript_LeftScroll
	bg_sign_event 7, 2, 0, BG_EVENT_PLAYER_FACING_ANY, SaffronCity_Dojo_EventScript_RightScroll

SaffronCity_Dojo_MapEvents::
	map_events SaffronCity_Dojo_ObjectEvents, SaffronCity_Dojo_MapWarps, SaffronCity_Dojo_MapCoordEvents, SaffronCity_Dojo_MapBGEvents

