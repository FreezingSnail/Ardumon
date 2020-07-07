#pragma once
#include "common.h"
#include "team.h"


class Player{

    public:
        team_t team;

        Player();
        void loadMonster(uint8_t slot, Monster mon);
        void loadTeam();
        void printPlayer();
};
