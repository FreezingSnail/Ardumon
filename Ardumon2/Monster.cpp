#include "Monster.h"
#include "Calculations.h"

Monster::Monster()
{

    setStats();
}

Monster::Monster(monsterSeed_t seed)
{
    this->seed = seed;
    //this->level = 0b11111111;
    setStats();
}

void Monster::setStats(){
    this->statlist.attack   = statCalc( (this->seed.atk), this->level);
    this->statlist.defense  = statCalc( (this->seed.def), this->level);
    this->statlist.health   = statCalc( (this->seed.hp),  this->level);
    this->statlist.speed    = statCalc( (this->seed.spd), this->level);
}