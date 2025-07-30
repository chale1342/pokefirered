@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SSAnne_2F_Corridor/map.json
@

	.align 2

SSAnne_2F_Corridor_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_BLUE, 30, 2, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, 0x0, FLAG_HIDE_SS_ANNE_RIVAL
	object_event 2, OBJ_EVENT_GFX_SAILOR, 2, 7, 3, MOVEMENT_TYPE_WANDER_UP_AND_DOWN, 1, 2, TRAINER_TYPE_NONE, 0, SSAnne_2F_Corridor_EventScript_Sailor, 0

SSAnne_2F_Corridor_MapWarps:
	warp_def 2, 2, 3, 0, MAP_SSANNE_1F_CORRIDOR
	warp_def 3, 12, 3, 1, MAP_SSANNE_3F_CORRIDOR
	warp_def 30, 2, 3, 0, MAP_SSANNE_CAPTAINS_OFFICE
	warp_def 6, 10, 0, 0, MAP_SSANNE_2F_ROOM1
	warp_def 10, 10, 0, 0, MAP_SSANNE_2F_ROOM2
	warp_def 14, 10, 0, 0, MAP_SSANNE_2F_ROOM3
	warp_def 18, 10, 0, 0, MAP_SSANNE_2F_ROOM4
	warp_def 22, 10, 0, 0, MAP_SSANNE_2F_ROOM5
	warp_def 26, 10, 0, 0, MAP_SSANNE_2F_ROOM6

SSAnne_2F_Corridor_MapCoordEvents:
	coord_event 30, 6, 3, VAR_MAP_SCENE_S_S_ANNE_2F_CORRIDOR, 0, SSAnne_2F_Corridor_EventScript_RivalTriggerLeft
	coord_event 31, 6, 3, VAR_MAP_SCENE_S_S_ANNE_2F_CORRIDOR, 0, SSAnne_2F_Corridor_EventScript_RivalTriggerMid
	coord_event 32, 6, 3, VAR_MAP_SCENE_S_S_ANNE_2F_CORRIDOR, 0, SSAnne_2F_Corridor_EventScript_RivalTriggerRight

SSAnne_2F_Corridor_MapEvents::
	map_events SSAnne_2F_Corridor_ObjectEvents, SSAnne_2F_Corridor_MapWarps, SSAnne_2F_Corridor_MapCoordEvents, NULL

