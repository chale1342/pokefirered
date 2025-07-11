@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SixIsland_DottedHole_SapphireRoom/map.json
@

	.align 2

SixIsland_DottedHole_SapphireRoom_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_SAPPHIRE, 7, 7, 0, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire, FLAG_HIDE_SAPPHIRE
	object_event 2, OBJ_EVENT_GFX_SCIENTIST, 5, 9, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, 0x0, FLAG_HIDE_DOTTED_HOLE_SCIENTIST

SixIsland_DottedHole_SapphireRoom_MapWarps:
	warp_def 11, 7, 3, 2, MAP_SIX_ISLAND_DOTTED_HOLE_1F
	warp_def 5, 9, 3, 3, MAP_SIX_ISLAND_DOTTED_HOLE_B4F

SixIsland_DottedHole_SapphireRoom_MapBGEvents:
	bg_sign_event 7, 2, 0, BG_EVENT_PLAYER_FACING_NORTH, SixIsland_DottedHole_SapphireRoom_EventScript_BrailleMessage

SixIsland_DottedHole_SapphireRoom_MapEvents::
	map_events SixIsland_DottedHole_SapphireRoom_ObjectEvents, SixIsland_DottedHole_SapphireRoom_MapWarps, NULL, SixIsland_DottedHole_SapphireRoom_MapBGEvents

