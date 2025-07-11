@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/MtEmber_Summit/map.json
@

	.align 2

MtEmber_Summit_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_MOLTRES, 9, 6, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, MtEmber_Summit_EventScript_Moltres, FLAG_HIDE_MOLTRES
	object_event 2, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 10, 12, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, 0
	object_event 3, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 9, 12, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, 0
	object_event 4, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 8, 11, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, 0
	object_event 5, OBJ_EVENT_GFX_PUSHABLE_BOULDER, 8, 10, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, EventScript_StrengthBoulder, 0

MtEmber_Summit_MapWarps:
	warp_def 9, 15, 0, 4, MAP_MT_EMBER_EXTERIOR

MtEmber_Summit_MapEvents::
	map_events MtEmber_Summit_ObjectEvents, MtEmber_Summit_MapWarps, NULL, NULL

