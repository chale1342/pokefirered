@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SevenIsland_House_Room1/map.json
@

	.align 2

SevenIsland_House_Room1_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_OLD_WOMAN, 4, 4, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, SevenIsland_House_Room1_EventScript_OldWoman, 0

SevenIsland_House_Room1_MapWarps:
	warp_def 4, 7, 3, 0, MAP_SEVEN_ISLAND
	warp_def 4, 1, 0, 0, MAP_SEVEN_ISLAND_HOUSE_ROOM2

SevenIsland_House_Room1_MapBGEvents:
	bg_sign_event 4, 1, 0, BG_EVENT_PLAYER_FACING_ANY, SevenIsland_House_Room1_EventScript_Box

SevenIsland_House_Room1_MapEvents::
	map_events SevenIsland_House_Room1_ObjectEvents, SevenIsland_House_Room1_MapWarps, NULL, SevenIsland_House_Room1_MapBGEvents

