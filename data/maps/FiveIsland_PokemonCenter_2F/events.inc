@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/FiveIsland_PokemonCenter_2F/map.json
@

	.align 2

FiveIsland_PokemonCenter_2F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_CABLE_CLUB_RECEPTIONIST, 6, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, Common_EventScript_UnionRoomAttendant, 0
	object_event 2, OBJ_EVENT_GFX_CABLE_CLUB_RECEPTIONIST, 2, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, Common_EventScript_WirelessClubAttendant, 0
	object_event 3, OBJ_EVENT_GFX_CABLE_CLUB_RECEPTIONIST, 10, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, Common_EventScript_DirectCornerAttendant, 0
	object_event 4, OBJ_EVENT_GFX_MG_DELIVERYMAN, 1, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, CableClub_EventScript_MysteryGiftMan, FLAG_HIDE_MG_DELIVERYMEN

FiveIsland_PokemonCenter_2F_MapWarps:
	warp_def 1, 6, 4, 1, MAP_FIVE_ISLAND_POKEMON_CENTER_1F
	warp_def 5, 1, 0, 0, MAP_UNION_ROOM
	warp_def 9, 1, 0, 0, MAP_TRADE_CENTER

FiveIsland_PokemonCenter_2F_MapEvents::
	map_events FiveIsland_PokemonCenter_2F_ObjectEvents, FiveIsland_PokemonCenter_2F_MapWarps, NULL, NULL

