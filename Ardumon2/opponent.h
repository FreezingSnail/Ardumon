#pragma once
#include "player.h"
#include "common.h"
#include "team.h"
#include "TypeTable.h"

typedef struct oppSeed{
    uint32_t mon1;
    uint32_t mon2;
    uint32_t mon3;

}oppSeed_t;


///opponent seed 
/* mon 1 mon 2 mon 3 lvl 1 lvl 2 lvl 3
/  00000 00000 00000 00000 00000 00000   30bits

   move1 move2 move3 move4  x3
/  00000 00000 00000 00000               60 bits

/ format
/ monId lvl mov1 mov2 mov3 mov4 x3, 3 32bit ints

    3 32 bit ints to store opponent seeds
*/
class Opponent: public Player{

    public:
        
        Opponent();
        Opponent(oppSeed_t seed);
        void decompOppSeed(oppSeed_t seed); //load opponent
        


};