@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/RockTunnel_1F/map.json
@

	.align 2

RockTunnel_1F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_PICNICKER, 26, 28, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 3, RockTunnel_1F_EventScript_Dana, 0
	object_event 2, OBJ_EVENT_GFX_PICNICKER, 39, 27, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NORMAL, 4, RockTunnel_1F_EventScript_Ariana, 0
	object_event 3, OBJ_EVENT_GFX_PICNICKER, 45, 24, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NORMAL, 5, RockTunnel_1F_EventScript_Leah, 0
	object_event 4, OBJ_EVENT_GFX_HIKER, 20, 17, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NORMAL, 4, RockTunnel_1F_EventScript_Lucas, 0
	object_event 5, OBJ_EVENT_GFX_HIKER, 5, 20, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 4, RockTunnel_1F_EventScript_Oliver, 0
	object_event 6, OBJ_EVENT_GFX_HIKER, 7, 5, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 4, RockTunnel_1F_EventScript_Lenny, 0
	object_event 7, OBJ_EVENT_GFX_SUPER_NERD, 27, 10, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NORMAL, 3, RockTunnel_1F_EventScript_Ashton, 0
	object_event 8, OBJ_EVENT_GFX_ITEM_BALL, 37, 5, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, RockTunnel_1F_EventScript_ItemRepel, FLAG_HIDE_ROCK_TUNNEL_1F_REPEL
	object_event 9, OBJ_EVENT_GFX_ITEM_BALL, 33, 22, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, RockTunnel_1F_EventScript_ItemPearl, FLAG_HIDE_ROCK_TUNNEL_1F_PEARL
	object_event 10, OBJ_EVENT_GFX_ITEM_BALL, 22, 22, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, RockTunnel_1F_EventScript_ItemEscapeRope, FLAG_HIDE_ROCK_TUNNEL_1F_ESCAPE_ROPE

RockTunnel_1F_MapWarps:
	warp_def 17, 2, 3, 0, MAP_ROUTE10
	warp_def 45, 2, 3, 0, MAP_ROCK_TUNNEL_B1F
	warp_def 4, 2, 3, 1, MAP_ROCK_TUNNEL_B1F
	warp_def 20, 13, 3, 2, MAP_ROCK_TUNNEL_B1F
	warp_def 45, 21, 3, 3, MAP_ROCK_TUNNEL_B1F
	warp_def 18, 37, 3, 1, MAP_ROUTE10

RockTunnel_1F_MapBGEvents:
	bg_sign_event 14, 33, 3, BG_EVENT_PLAYER_FACING_ANY, RockTunnel_1F_EventScript_RouteSign

RockTunnel_1F_MapEvents::
	map_events RockTunnel_1F_ObjectEvents, RockTunnel_1F_MapWarps, NULL, RockTunnel_1F_MapBGEvents

