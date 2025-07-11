@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Route12_FishingHouse/map.json
@

	.align 2

Route12_FishingHouse_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_FISHER, 4, 4, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, Route12_FishingHouse_EventScript_FishingGuruBrother, 0

Route12_FishingHouse_MapWarps:
	warp_def 2, 8, 0, 0, MAP_ROUTE12
	warp_def 3, 7, 3, 0, MAP_ROUTE12
	warp_def 4, 8, 0, 0, MAP_ROUTE12

Route12_FishingHouse_MapBGEvents:
	bg_sign_event 9, 1, 0, BG_EVENT_PLAYER_FACING_ANY, Route12_FishingHouse_EventScript_MagikarpRecordSign

Route12_FishingHouse_MapEvents::
	map_events Route12_FishingHouse_ObjectEvents, Route12_FishingHouse_MapWarps, NULL, Route12_FishingHouse_MapBGEvents

