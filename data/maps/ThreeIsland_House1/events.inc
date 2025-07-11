@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/ThreeIsland_House1/map.json
@

	.align 2

ThreeIsland_House1_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_LITTLE_GIRL, 3, 4, 0, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, ThreeIsland_House1_EventScript_Lostelle, FLAG_HIDE_LOSTELLE_IN_HER_HOME

ThreeIsland_House1_MapWarps:
	warp_def 4, 7, 3, 0, MAP_THREE_ISLAND

ThreeIsland_House1_MapBGEvents:
	bg_sign_event 2, 1, 0, BG_EVENT_PLAYER_FACING_ANY, ThreeIsland_House1_EventScript_DisplayCase

ThreeIsland_House1_MapEvents::
	map_events ThreeIsland_House1_ObjectEvents, ThreeIsland_House1_MapWarps, NULL, ThreeIsland_House1_MapBGEvents

