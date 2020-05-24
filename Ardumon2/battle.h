#pragma once
#include "Calculations.h"
#include "Monster.h"
#include "Player.h"
#inclde "MoveArray.h"

Monster playerMonster[3];
Monster opponentMonster[3];

uint16_t playerHealths[3];
uint16_t opponentHealths[3];

Monster * currentMon;
Monster * oppMon;
uint16_t * currentHealth;
uint16_t * oppHealth;


void loadOpponent();

void loadTeams(Monster playerMons[3]);

bool step(); //increments loop

uint8_t getPlayerMove();

void battleLoop(Player player);  //main loop

void damagePhase(uint8_t playerMove, uint8_t oppMove);
