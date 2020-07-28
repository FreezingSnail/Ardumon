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

uint8_t Monster::getAdvantage(Type_t opponent){
    uint8_t oppType = (uint8_t)opponent;
    uint8_t mod = 0;
    uint8_t moveNum = 0;
    for(int i = 0; i < 4; i++){ // check moves for the best mathup
    //remeber mod 3 is x .5
        uint8_t matchup = getMatchupModifier(this->moves[i], oppType);
        if(matchup > mod){
            if(matchup == 3 && mod == 0){
                moveNum = i;
                //hold onto this number incase this all other options are 0
            }
            else if (matchup != 3){
                mod = matchup;
                moveNum = i;
            }
        }

        return moveNum;

    }

    return 0;
}
uint8_t Monster::getType(){
    return this->type;
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