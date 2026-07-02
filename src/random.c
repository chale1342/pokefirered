#include "global.h"
#include "random.h"

// The number 1103515245 comes from the example implementation
// of rand and srand in the ISO C standard.

COMMON_DATA u32 gRngValue = 0;

u16 Random(void)
{
    gRngValue = ISO_RANDOMIZE1(gRngValue);
    return gRngValue >> 16;
}

void SeedRng(u16 seed)
{
    gRngValue = seed;
}

// Returns a random index according to a list of weights
u8 RandomWeightedIndex(u8 *weights, u8 length)
{
    u32 i;
    u16 randomValue;
    u16 weightSum = 0;

    for (i = 0; i < length; i++)
        weightSum += weights[i];
    randomValue = weightSum > 0 ? Random() % weightSum : 0;
    weightSum = 0;
    for (i = 0; i < length; i++)
    {
        weightSum += weights[i];
        if (randomValue <= weightSum)
            return i;
    }
    return 0;
}
