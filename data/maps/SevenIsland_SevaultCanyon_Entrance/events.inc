@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/SevenIsland_SevaultCanyon_Entrance/map.json
@

	.align 2

SevenIsland_SevaultCanyon_Entrance_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_WOMAN_2, 12, 6, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NORMAL, 5, SevenIsland_SevaultCanyon_Entrance_EventScript_Miah, 0
	object_event 2, OBJ_EVENT_GFX_BEAUTY, 3, 34, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NORMAL, 1, SevenIsland_SevaultCanyon_Entrance_EventScript_Eve, 0
	object_event 3, OBJ_EVENT_GFX_MAN, 4, 34, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, TRAINER_TYPE_NORMAL, 1, SevenIsland_SevaultCanyon_Entrance_EventScript_Jon, 0
	object_event 4, OBJ_EVENT_GFX_CAMPER, 11, 26, 3, MOVEMENT_TYPE_FACE_DOWN_UP_AND_RIGHT, 1, 1, TRAINER_TYPE_NORMAL, 2, SevenIsland_SevaultCanyon_Entrance_EventScript_Nicolas, 0
	object_event 5, OBJ_EVENT_GFX_PICNICKER, 10, 26, 3, MOVEMENT_TYPE_FACE_DOWN_UP_AND_LEFT, 1, 1, TRAINER_TYPE_NORMAL, 2, SevenIsland_SevaultCanyon_Entrance_EventScript_Madeline, 0
	object_event 6, OBJ_EVENT_GFX_ROCKER, 11, 17, 5, MOVEMENT_TYPE_ROTATE_COUNTERCLOCKWISE, 1, 1, TRAINER_TYPE_NORMAL, 1, SevenIsland_SevaultCanyon_Entrance_EventScript_Mason, 0
	clone_event 7, OBJ_EVENT_GFX_COOLTRAINER_M, 7, -2, LOCALID_SWORDS_DANCE_TUTOR, MAP_SEVEN_ISLAND

SevenIsland_SevaultCanyon_Entrance_MapBGEvents:
	bg_hidden_item_event 8, 29, 5, ITEM_RAWST_BERRY, FLAG_HIDDEN_ITEM_SEVEN_ISLAND_SEVAULT_CANYON_ENTRANCE_RAWST_BERRY, 1, FALSE
	bg_sign_event 14, 26, 0, BG_EVENT_PLAYER_FACING_ANY, SevenIsland_SevaultCanyon_Entrance_EventScript_RouteSign

SevenIsland_SevaultCanyon_Entrance_MapEvents::
	map_events SevenIsland_SevaultCanyon_Entrance_ObjectEvents, NULL, NULL, SevenIsland_SevaultCanyon_Entrance_MapBGEvents

