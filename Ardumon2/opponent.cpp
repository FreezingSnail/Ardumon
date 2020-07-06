#include "opponent.h"
#include "data/monsters.h"
#include "Monster.h"

static void genOppMonster(Monster & loadingMon, uint32_t seed){

    loadingMon.seed = monsters[(seed >>27)];
    loadingMon.level   = ((seed >> (2+20)) & 0b11111);
    loadingMon.move[0] = ((seed >> (2+15)) & 0b11111);
    loadingMon.move[1] = ((seed >> (2+10)) & 0b11111);
    loadingMon.move[2] = ((seed >> (2+5 )) & 0b11111);
    loadingMon.move[3] = ((seed >> (2   )) & 0b11111);
    
}

void Opponent::decompOppSeed(oppSeed_t seed){
    
    genOppMonster(this->teamlist[0], seed.mon1);
    genOppMonster(this->teamlist[1], seed.mon2);
    genOppMonster(this->teamlist[2], seed.mon3);

    


}

Opponent::Opponent(oppSeed_t seed){

    

}