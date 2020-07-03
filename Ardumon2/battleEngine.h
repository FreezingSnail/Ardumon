#pragma once
#include "common.h"
#include "Monster.h"
#include "calculations.h"
#include "team.h"
#include "battle.h"


typedef enum state{
    PLAYERTURN,
    OPPONENTTURN,
    CALCULATIONS,
    RESULTS
}BattleState;

class BattleEngine{
    public:
        team_t playerTeam;
        team_t opponentTeam;

        BattleState battleState;


        BattleEngine(); 
        //not sure what need as inputs, presumable a player and some other info on the generated opponent
        //prob dont actually need to do that in the constructor

        void loadTeams(Player player); //inputs here probably
        void battleLoop();

};