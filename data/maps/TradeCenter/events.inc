@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/TradeCenter/map.json
@

	.align 2

TradeCenter_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_UNION_ROOM_RECEPTIONIST, 9, 6, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRAINER_TYPE_NONE, 0, TradeCenter_EventScript_Attendant, 0

TradeCenter_MapWarps:
	warp_def 5, 8, 3, WARP_ID_DYNAMIC, MAP_DYNAMIC
	warp_def 6, 8, 3, WARP_ID_DYNAMIC, MAP_DYNAMIC

TradeCenter_MapCoordEvents:
	coord_event 4, 5, 3, VAR_TEMP_0, 0, TradeCenter_EventScript_Chair0
	coord_event 7, 5, 3, VAR_TEMP_0, 0, TradeCenter_EventScript_Chair1

TradeCenter_MapEvents::
	map_events TradeCenter_ObjectEvents, TradeCenter_MapWarps, TradeCenter_MapCoordEvents, NULL

