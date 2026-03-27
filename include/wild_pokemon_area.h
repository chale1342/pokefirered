#ifndef GUARD_WILD_POKEMON_AREA_H
#define GUARD_WILD_POKEMON_AREA_H

struct AreaEncounterLocation
{
    u8 mapGroup;
    u8 mapNum;
    u16 mapsec;
};

s32 GetSpeciesPokedexAreaMarkers(u16 species, struct Subsprite * subsprites);
u16 BuildSpeciesListForMapsec(u16 mapsec, u16 *speciesBuf, u16 maxCount);
u16 BuildSpeciesListForEncounterMap(u8 mapGroup, u8 mapNum, u16 *speciesBuf, u16 maxCount);
u16 GetEncounterLocationsForMapsec(u16 mapsec, struct AreaEncounterLocation *locations, u16 maxCount);

#endif //GUARD_WILD_POKEMON_AREA_H
