#pragma once
#include "calculations.h"
#include "Monster.h"
#include "player.h"
#include "TypeTable.h"
#include "MoveArray.h"

#define BATTLEOPSTACK 2


typedef struct battleCommand{
    uint8_t move;
} battleOp;

typedef struct mon{
    Monster * mon;
    uint16_t * currentHealth;
} MonsterPointer;

battleOp battleStack[BATTLEOPSTACK];
uint8_t battleOpPointer;

Monster playerTeam[3];
Monster opponentTeam[3];

uint16_t playerHealths[3];
uint16_t opponentHealths[3];


MonsterPointer player;
MonsterPointer opponent;


void loadOpponent();

void loadTeam(Monster targetTeam[3], Monster loadTeam[3]);

bool step(); //increments loop

uint8_t getPlayerMove();

void battleLoop(Player player);  //main loop

void damagePhase(uint8_t playerMove, uint8_t oppMove);
