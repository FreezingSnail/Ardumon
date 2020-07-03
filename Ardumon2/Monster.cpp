#include "Monster.h"
#include "common.h"
#include "calculations.h"

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
    this->statlist.attack   = statCalc( (getAtkStatSeed()), getLevel());
    this->statlist.defense  = statCalc( (getDefStatSeed()), getLevel());
    this->statlist.health   = statCalc( (getHpStatSeed()),  getLevel());
    this->statlist.speed    = statCalc( (getSpdStatSeed()), getLevel());
}

//(this->seed.atk), this->level);
uint8_t Monster::getLevel(){
    return this->level;
}
uint8_t Monster::getAtkStatSeed(){
    return (((this->seed.statSeed >> 12) & 0b1111), this->level);
}
uint8_t Monster::getDefStatSeed(){
    return (((this->seed.statSeed >> 8)  & 0b1111), this->level);
}
uint8_t Monster::getHpStatSeed(){
    return (((this->seed.statSeed >> 4)  & 0b1111), this->level);
}
uint8_t Monster::getSpdStatSeed(){
    return (((this->seed.statSeed )      & 0b1111), this->level);
}

void Monster::printStats(){

}