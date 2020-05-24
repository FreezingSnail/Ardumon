#pragma once
#include "Calculations.h"
#include "Monster.h"
#include "TypeTable.h"




Type_t getAdvantage(Type_t opponent, Type_t player);  //finds best advantage

uint8_t chooseMove();  //based on advantage chooses move 0-3
