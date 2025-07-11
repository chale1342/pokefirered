@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SSAnne_3F_Corridor/map.json
@

	.align 2

SSAnne_3F_Corridor_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_SAILOR, 10, 4, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 3, 1, TRAINER_TYPE_NONE, 0, SSAnne_3F_Corridor_EventScript_Sailor, 0

SSAnne_3F_Corridor_MapWarps:
	warp_def 1, 4, 3, 0, MAP_SSANNE_DECK
	warp_def 18, 2, 3, 1, MAP_SSANNE_2F_CORRIDOR
	warp_def 0, 5, 0, 0, MAP_SSANNE_DECK

SSAnne_3F_Corridor_MapEvents::
	map_events SSAnne_3F_Corridor_ObjectEvents, SSAnne_3F_Corridor_MapWarps, NULL, NULL

