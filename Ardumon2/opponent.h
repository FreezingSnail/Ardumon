#pragma once
#include "common.h"
#include "team.h"


///opponent seed 
/* mon 1 mon 2 mon 3 lvl 1 lvl 2 lvl 3
/  00000 00000 00000 00000 00000 00000   30bits

   move1 move2 move3 move4  x3
/  00000 00000 00000 00000               60 bits

    3 32 bit ints to store opponent seeds
*/
class Opponent{

    public:
        team_t team;

        Opponnent();
};