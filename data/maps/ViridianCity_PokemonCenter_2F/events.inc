@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/ViridianCity_PokemonCenter_2F/map.json
@

	.align 2

ViridianCity_PokemonCenter_2F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_CABLE_CLUB_RECEPTIONIST, 6, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, Common_EventScript_UnionRoomAttendant, 0
	object_event 2, OBJ_EVENT_GFX_CABLE_CLUB_RECEPTIONIST, 2, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, Common_EventScript_WirelessClubAttendant, 0
	object_event 3, OBJ_EVENT_GFX_CABLE_CLUB_RECEPTIONIST, 10, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, Common_EventScript_DirectCornerAttendant, 0
	object_event 4, OBJ_EVENT_GFX_MG_DELIVERYMAN, 1, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, CableClub_EventScript_MysteryGiftMan, FLAG_HIDE_MG_DELIVERYMEN

ViridianCity_PokemonCenter_2F_MapWarps:
	warp_def 1, 6, 4, 3, MAP_VIRIDIAN_CITY_POKEMON_CENTER_1F
	warp_def 5, 1, 0, 0, MAP_UNION_ROOM
	warp_def 9, 1, 0, 0, MAP_TRADE_CENTER

ViridianCity_PokemonCenter_2F_MapEvents::
	map_events ViridianCity_PokemonCenter_2F_ObjectEvents, ViridianCity_PokemonCenter_2F_MapWarps, NULL, NULL

