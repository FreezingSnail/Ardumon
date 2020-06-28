#pragma once
#include "common.h"

typedef struct map{
    uint16_t floor[4];
    uint16_t wall[4];
    uint8_t depth;
} mapPack_t;

typedef enum tiles{
    empty,
    grass,
    wall,
} tile_t;



void genTile(tile_t tile);
void decode(mapPack_t map);

