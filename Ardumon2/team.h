#pragma once
#include "Monster.h"
#include "common.h"
class Monster;

typedef struct team{
    Monster teamList[3];
    uint8_t healthList[3];
    uint8_t currentMonster; //0-2
} team_t;


static void printTeam(team_t * team){
    printf("Current: %d\n", team->currentMonster);
    for(int i = 0; i < 3; i++){
        team->teamList[i].printStats();
        printf("Health: %d\n",team->healthList[i]);
    }

}