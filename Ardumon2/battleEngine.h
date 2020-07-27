#pragma once
#include "common.h"
#include "Monster.h"
#include "calculations.h"
#include "team.h"
#include "battle.h"
#include "player.h"
#include "opponent.h"


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

        Opponent * opponent;
        Player * player;

        BattleState battleState;


        BattleEngine(Player * player, Opponent * opponent); 
        //not sure what need as inputs, presumable a player and some other info on the generated opponent
        //prob dont actually need to do that in the constructor
        void encounter(oppSeed_t oppSeed);
        
    private:
        void loadTeams(oppSeed_t oppSeed); //inputs here probably
        void battleLoop();
        bool winBattleCheck(team_t team);
        void damagePhase(uint8_t playerMove, uint8_t oppMove);

};