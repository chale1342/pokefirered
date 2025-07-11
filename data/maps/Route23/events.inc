@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Route23/map.json
@

	.align 2

Route23_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_POLICEMAN, 15, 149, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, Route23_EventScript_CascadeBadgeGuard, 0
	object_event 2, OBJ_EVENT_GFX_POLICEMAN, 8, 140, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, Route23_EventScript_ThunderBadgeGuard, 0
	object_event 3, OBJ_EVENT_GFX_POLICEMAN, 14, 123, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, Route23_EventScript_RainbowBadgeGuard, 0
	object_event 4, OBJ_EVENT_GFX_POLICEMAN, 16, 112, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, Route23_EventScript_SoulBadgeGuard, 0
	object_event 5, OBJ_EVENT_GFX_POLICEMAN, 10, 94, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, Route23_EventScript_MarshBadgeGuard, 0
	object_event 6, OBJ_EVENT_GFX_POLICEMAN, 14, 61, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, Route23_EventScript_VolcanoBadgeGuard, 0
	object_event 7, OBJ_EVENT_GFX_POLICEMAN, 6, 35, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, Route23_EventScript_EarthBadgeGuard, 0

Route23_MapWarps:
	warp_def 5, 28, 3, 1, MAP_VICTORY_ROAD_1F
	warp_def 18, 28, 3, 6, MAP_VICTORY_ROAD_2F
	warp_def 8, 153, 3, 0, MAP_ROUTE22_NORTH_ENTRANCE
	warp_def 9, 154, 0, 0, MAP_ROUTE22_NORTH_ENTRANCE

Route23_MapCoordEvents:
	coord_event 13, 149, 3, VAR_MAP_SCENE_ROUTE23, 1, Route23_EventScript_CascadeBadgeGuardTrigger
	coord_event 7, 140, 3, VAR_MAP_SCENE_ROUTE23, 2, Route23_EventScript_ThunderBadgeGuardTrigger
	coord_event 12, 123, 3, VAR_MAP_SCENE_ROUTE23, 3, Route23_EventScript_RainbowBadgeGuardTrigger
	coord_event 11, 111, 0, VAR_MAP_SCENE_ROUTE23, 4, Route23_EventScript_SoulBadgeGuardTrigger
	coord_event 9, 94, 1, VAR_MAP_SCENE_ROUTE23, 5, Route23_EventScript_MarshBadgeGuardTrigger
	coord_event 12, 61, 3, VAR_MAP_SCENE_ROUTE23, 6, Route23_EventScript_VolcanoBadgeGuardTrigger
	coord_event 1, 35, 0, VAR_MAP_SCENE_ROUTE23, 7, Route23_EventScript_EarthBadgeGuardTrigger
	coord_event 1, 34, 0, VAR_MAP_SCENE_ROUTE23, 7, Route23_EventScript_EarthBadgeGuardTrigger
	coord_event 1, 32, 3, VAR_MAP_SCENE_ROUTE23, 7, Route23_EventScript_EarthBadgeGuardTrigger
	coord_event 1, 33, 0, VAR_MAP_SCENE_ROUTE23, 7, Route23_EventScript_EarthBadgeGuardTrigger
	coord_event 1, 31, 0, VAR_MAP_SCENE_ROUTE23, 7, Route23_EventScript_EarthBadgeGuardTrigger
	coord_event 1, 36, 0, VAR_MAP_SCENE_ROUTE23, 7, Route23_EventScript_EarthBadgeGuardTrigger
	coord_event 5, 35, 3, VAR_MAP_SCENE_ROUTE23, 7, Route23_EventScript_EarthBadgeGuardTrigger
	coord_event 4, 35, 3, VAR_MAP_SCENE_ROUTE23, 7, Route23_EventScript_EarthBadgeGuardTrigger
	coord_event 10, 60, 0, VAR_MAP_SCENE_ROUTE23, 6, Route23_EventScript_VolcanoBadgeGuardTrigger
	coord_event 13, 61, 3, VAR_MAP_SCENE_ROUTE23, 6, Route23_EventScript_VolcanoBadgeGuardTrigger
	coord_event 11, 60, 0, VAR_MAP_SCENE_ROUTE23, 6, Route23_EventScript_VolcanoBadgeGuardTrigger
	coord_event 8, 94, 1, VAR_MAP_SCENE_ROUTE23, 5, Route23_EventScript_MarshBadgeGuardTrigger
	coord_event 5, 92, 1, VAR_MAP_SCENE_ROUTE23, 5, Route23_EventScript_MarshBadgeGuardTrigger
	coord_event 7, 94, 1, VAR_MAP_SCENE_ROUTE23, 5, Route23_EventScript_MarshBadgeGuardTrigger
	coord_event 4, 92, 1, VAR_MAP_SCENE_ROUTE23, 5, Route23_EventScript_MarshBadgeGuardTrigger
	coord_event 3, 92, 1, VAR_MAP_SCENE_ROUTE23, 5, Route23_EventScript_MarshBadgeGuardTrigger
	coord_event 2, 92, 1, VAR_MAP_SCENE_ROUTE23, 5, Route23_EventScript_MarshBadgeGuardTrigger
	coord_event 4, 139, 0, VAR_MAP_SCENE_ROUTE23, 2, Route23_EventScript_ThunderBadgeGuardTrigger
	coord_event 5, 139, 0, VAR_MAP_SCENE_ROUTE23, 2, Route23_EventScript_ThunderBadgeGuardTrigger
	coord_event 6, 140, 3, VAR_MAP_SCENE_ROUTE23, 2, Route23_EventScript_ThunderBadgeGuardTrigger
	coord_event 10, 122, 0, VAR_MAP_SCENE_ROUTE23, 3, Route23_EventScript_RainbowBadgeGuardTrigger
	coord_event 11, 122, 0, VAR_MAP_SCENE_ROUTE23, 3, Route23_EventScript_RainbowBadgeGuardTrigger
	coord_event 13, 123, 3, VAR_MAP_SCENE_ROUTE23, 3, Route23_EventScript_RainbowBadgeGuardTrigger
	coord_event 8, 109, 1, VAR_MAP_SCENE_ROUTE23, 4, Route23_EventScript_SoulBadgeGuardTrigger
	coord_event 9, 109, 1, VAR_MAP_SCENE_ROUTE23, 4, Route23_EventScript_SoulBadgeGuardTrigger
	coord_event 10, 109, 1, VAR_MAP_SCENE_ROUTE23, 4, Route23_EventScript_SoulBadgeGuardTrigger
	coord_event 11, 109, 1, VAR_MAP_SCENE_ROUTE23, 4, Route23_EventScript_SoulBadgeGuardTrigger
	coord_event 12, 109, 1, VAR_MAP_SCENE_ROUTE23, 4, Route23_EventScript_SoulBadgeGuardTrigger
	coord_event 12, 111, 0, VAR_MAP_SCENE_ROUTE23, 4, Route23_EventScript_SoulBadgeGuardTrigger
	coord_event 14, 112, 1, VAR_MAP_SCENE_ROUTE23, 4, Route23_EventScript_SoulBadgeGuardTrigger
	coord_event 13, 112, 1, VAR_MAP_SCENE_ROUTE23, 4, Route23_EventScript_SoulBadgeGuardTrigger
	coord_event 15, 112, 1, VAR_MAP_SCENE_ROUTE23, 4, Route23_EventScript_SoulBadgeGuardTrigger
	coord_event 12, 148, 0, VAR_MAP_SCENE_ROUTE23, 1, Route23_EventScript_CascadeBadgeGuardTrigger
	coord_event 11, 148, 0, VAR_MAP_SCENE_ROUTE23, 1, Route23_EventScript_CascadeBadgeGuardTrigger
	coord_event 14, 149, 3, VAR_MAP_SCENE_ROUTE23, 1, Route23_EventScript_CascadeBadgeGuardTrigger
	coord_event 10, 148, 0, VAR_MAP_SCENE_ROUTE23, 1, Route23_EventScript_CascadeBadgeGuardTrigger

Route23_MapBGEvents:
	bg_hidden_item_event 19, 42, 0, ITEM_FULL_RESTORE, FLAG_HIDDEN_ITEM_ROUTE23_FULL_RESTORE, 1, FALSE
	bg_hidden_item_event 20, 72, 0, ITEM_ULTRA_BALL, FLAG_HIDDEN_ITEM_ROUTE23_ULTRA_BALL, 1, FALSE
	bg_hidden_item_event 11, 101, 3, ITEM_MAX_ETHER, FLAG_HIDDEN_ITEM_ROUTE23_MAX_ETHER, 1, FALSE
	bg_hidden_item_event 3, 18, 3, ITEM_LUM_BERRY, FLAG_HIDDEN_ITEM_ROUTE23_LUM_BERRY, 1, FALSE
	bg_hidden_item_event 2, 29, 3, ITEM_SITRUS_BERRY, FLAG_HIDDEN_ITEM_ROUTE23_SITRUS_BERRY, 1, FALSE
	bg_hidden_item_event 10, 67, 3, ITEM_ASPEAR_BERRY, FLAG_HIDDEN_ITEM_ROUTE23_ASPEAR_BERRY, 1, FALSE
	bg_hidden_item_event 3, 128, 3, ITEM_LEPPA_BERRY, FLAG_HIDDEN_ITEM_ROUTE23_LEPPA_BERRY, 1, FALSE
	bg_hidden_item_event 9, 8, 3, ITEM_MAX_ELIXIR, FLAG_HIDDEN_ITEM_ROUTE23_MAX_ELIXIR, 1, FALSE
	bg_sign_event 3, 31, 0, BG_EVENT_PLAYER_FACING_ANY, Route23_EventScript_VictoryRoadGateSign

Route23_MapEvents::
	map_events Route23_ObjectEvents, Route23_MapWarps, Route23_MapCoordEvents, Route23_MapBGEvents

