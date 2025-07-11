@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SevenIsland/map.json
@

	.align 2

SevenIsland_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_COOLTRAINER_M, 7, 18, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NONE, 0, SevenIsland_EventScript_SwordsDanceTutor, 0
	object_event 2, OBJ_EVENT_GFX_OLD_WOMAN, 9, 7, 3, MOVEMENT_TYPE_FACE_DOWN_AND_UP, 1, 1, TRAINER_TYPE_NONE, 0, SevenIsland_EventScript_OldWoman, 0
	object_event 3, OBJ_EVENT_GFX_SCIENTIST, 15, 5, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, SevenIsland_EventScript_Scientist, 0

SevenIsland_MapWarps:
	warp_def 11, 9, 0, 0, MAP_SEVEN_ISLAND_HOUSE_ROOM1
	warp_def 5, 9, 0, 0, MAP_SEVEN_ISLAND_MART
	warp_def 12, 3, 0, 0, MAP_SEVEN_ISLAND_POKEMON_CENTER_1F
	warp_def 16, 13, 3, 0, MAP_SEVEN_ISLAND_HARBOR

SevenIsland_MapBGEvents:
	bg_sign_event 17, 9, 0, BG_EVENT_PLAYER_FACING_ANY, SevenIsland_EventScript_IslandSign

SevenIsland_MapEvents::
	map_events SevenIsland_ObjectEvents, SevenIsland_MapWarps, NULL, SevenIsland_MapBGEvents

