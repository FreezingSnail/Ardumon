#include "mapGenerator.h"
#include "calculations.h"



static void nextLine(){
    //placeholder
    printf("\n");
}

void genTile(tile_t tile){
    //will need to swap in drawing code
    switch(tile){
        case tile_t::empty:
            printf(" ");
            break;
        case tile_t::grass:
            printf("g");
            break;
        case tile_t::wall:
            printf("w");
            break;
        default:
            break;
    }
}

void decode(mapPack_t map){
//check floor then wall
    for(uint8_t i = 0; i < map.depth; i++)
    {
        for(uint8_t j = 0; j < 16; j++)
        {
            //i row, j column
            if(!getBit(map.floor[i], j))
            {
                //check walls
                if(getBit(map.wall[i], j))
                    genTile(tile_t::wall);
                else
                    genTile(tile_t::empty);
            }
            else
                genTile(tile_t::grass);
        }
        nextLine();
    }
}
