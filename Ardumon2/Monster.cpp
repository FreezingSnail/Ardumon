#include "Monster.h"
#include "common.h"
#include "calculations.h"
#include "TypeTable.h"



Monster::Monster()
{

    setStats();
}

Monster::Monster(monsterSeed_t seed)
{
    this->seed = seed;
    this->level = 5;
    this->type = (seed.monsterid >> 5);
    setStats();
}

void Monster::setStats(){
    this->statlist.attack   = statCalc( (getAtkStatSeed()), getLevel());
    this->statlist.defense  = statCalc( (getDefStatSeed()), getLevel());
    this->statlist.health   = statCalc( (getHpStatSeed()),  getLevel());
    this->statlist.speed    = statCalc( (getSpdStatSeed()), getLevel());
}

Type_t getAdvantage(Type_t opponent){

    return Type_t::plain;
}

//(this->seed.atk), this->level);
uint8_t Monster::getLevel(){
    return this->level;
}
uint8_t Monster::getAtkStatSeed(){
    return (((this->seed.statSeed >> 12) & 0b1111));
}
uint8_t Monster::getDefStatSeed(){
    return (((this->seed.statSeed >> 8)  & 0b1111));
}
uint8_t Monster::getHpStatSeed(){
    return (((this->seed.statSeed >> 4)  & 0b1111));
}
uint8_t Monster::getSpdStatSeed(){
    return (((this->seed.statSeed )      & 0b1111));
}

void Monster::printStats(){
    printf("atk: %d\n", this->statlist.attack);
    printf("def: %d\n", this->statlist.defense);
    printf("hth: %d\n", this->statlist.health);
    printf("spd: %d\n", this->statlist.speed);
    printf("lvl: %d\n", this->level);

    for(int i = 0; i< 4; i++){
        printf("move %d: %d\n", i, this->moves[i]);
    }

}