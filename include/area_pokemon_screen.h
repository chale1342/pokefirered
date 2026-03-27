#ifndef GUARD_AREA_POKEMON_SCREEN_H
#define GUARD_AREA_POKEMON_SCREEN_H

#include "global.h"

void InitAreaPokemonScreen(u16 mapsec, MainCallback returnCallback);
void InitAreaPokemonScreenForEncounterMap(u16 mapsec, u8 mapGroup, u8 mapNum, const u8 *title, MainCallback returnCallback);

#endif // GUARD_AREA_POKEMON_SCREEN_H
