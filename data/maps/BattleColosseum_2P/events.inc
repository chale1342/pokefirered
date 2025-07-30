@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/BattleColosseum_2P/map.json
@

	.align 2

BattleColosseum_2P_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_UNION_ROOM_RECEPTIONIST, 9, 3, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRAINER_TYPE_NONE, 0, BattleColosseum_2P_EventScript_Attendant, 0

BattleColosseum_2P_MapWarps:
	warp_def 6, 8, 3, WARP_ID_DYNAMIC, MAP_DYNAMIC
	warp_def 7, 8, 3, WARP_ID_DYNAMIC, MAP_DYNAMIC

BattleColosseum_2P_MapCoordEvents:
	coord_event 3, 5, 3, VAR_TEMP_0, 0, BattleColosseum_2P_EventScript_PlayerSpot0
	coord_event 10, 5, 3, VAR_TEMP_0, 0, BattleColosseum_2P_EventScript_PlayerSpot1

BattleColosseum_2P_MapEvents::
	map_events BattleColosseum_2P_ObjectEvents, BattleColosseum_2P_MapWarps, BattleColosseum_2P_MapCoordEvents, NULL

