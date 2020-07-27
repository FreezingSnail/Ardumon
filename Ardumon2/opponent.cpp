#include "opponent.h"
#include "tools/monsters.h"
#include "Monster.h"


Opponent::Opponent(oppSeed_t seed){

    this->decompOppSeed(seed);
}


static void genOppMonster(Monster * loadingMon, uint32_t seed){

    loadingMon->seed = monsterData[(seed >>27)];
    loadingMon->level    = 5; //((seed >> (2+20)) & 0b11111);
    loadingMon->moves[0] = ((seed >> (2+15)) & 0b11111);
    loadingMon->moves[1] = ((seed >> (2+10)) & 0b11111);
    loadingMon->moves[2] = ((seed >> (2+5 )) & 0b11111);
    loadingMon->moves[3] = ((seed >> (2   )) & 0b11111);
    
}

void Opponent::decompOppSeed(oppSeed_t seed){
    
    genOppMonster(&this->team.teamList[0], seed.mon1);
    genOppMonster(&this->team.teamList[1], seed.mon2);
    genOppMonster(&this->team.teamList[2], seed.mon3);

    


}

Opponent::Opponent(){

}