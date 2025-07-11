@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/CeladonCity_Condominiums_3F/map.json
@

	.align 2

CeladonCity_Condominiums_3F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_ROCKER, 0, 10, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NONE, 0, CeladonCity_Condominiums_3F_EventScript_Programmer, 0
	object_event 2, OBJ_EVENT_GFX_MAN, 3, 8, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, CeladonCity_Condominiums_3F_EventScript_Designer, 0
	object_event 3, OBJ_EVENT_GFX_SUPER_NERD, 4, 10, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NONE, 0, CeladonCity_Condominiums_3F_EventScript_GraphicArtist, 0
	object_event 4, OBJ_EVENT_GFX_FAT_MAN, 0, 13, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, CeladonCity_Condominiums_3F_EventScript_Writer, 0

CeladonCity_Condominiums_3F_MapWarps:
	warp_def 2, 2, 3, 1, MAP_CELADON_CITY_CONDOMINIUMS_2F
	warp_def 4, 2, 3, 0, MAP_CELADON_CITY_CONDOMINIUMS_ROOF
	warp_def 12, 2, 3, 1, MAP_CELADON_CITY_CONDOMINIUMS_ROOF
	warp_def 11, 2, 3, 2, MAP_CELADON_CITY_CONDOMINIUMS_2F

CeladonCity_Condominiums_3F_MapBGEvents:
	bg_sign_event 8, 12, 0, BG_EVENT_PLAYER_FACING_ANY, CeladonCity_Condominiums_3F_EventScript_DevelopmentRoomSign
	bg_sign_event 1, 9, 0, BG_EVENT_PLAYER_FACING_NORTH, CeladonCity_Condominiums_3F_EventScript_Computer1
	bg_sign_event 5, 9, 0, BG_EVENT_PLAYER_FACING_NORTH, CeladonCity_Condominiums_3F_EventScript_Computer2
	bg_sign_event 1, 12, 0, BG_EVENT_PLAYER_FACING_NORTH, CeladonCity_Condominiums_3F_EventScript_Computer3
	bg_sign_event 7, 12, 0, BG_EVENT_PLAYER_FACING_ANY, CeladonCity_Condominiums_3F_EventScript_DevelopmentRoomSign
	bg_sign_event 0, 12, 0, BG_EVENT_PLAYER_FACING_NORTH, CeladonCity_Condominiums_3F_EventScript_Computer3
	bg_sign_event 0, 9, 0, BG_EVENT_PLAYER_FACING_NORTH, CeladonCity_Condominiums_3F_EventScript_Computer1
	bg_sign_event 4, 9, 0, BG_EVENT_PLAYER_FACING_NORTH, CeladonCity_Condominiums_3F_EventScript_Computer2

CeladonCity_Condominiums_3F_MapEvents::
	map_events CeladonCity_Condominiums_3F_ObjectEvents, CeladonCity_Condominiums_3F_MapWarps, NULL, CeladonCity_Condominiums_3F_MapBGEvents

