#pragma once
#include "Monster.h"

typedef struct team{
    Monster * teamList[3];
    uint8_t healthList[3];
    uint8_t currentMonster; //0-2
} team_t;