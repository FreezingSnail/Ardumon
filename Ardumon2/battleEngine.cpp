#include "battleEngine.h"
#include "opponent.h"
#include "player.h"
#include "team.h"


BattleEngine::BattleEngine(Player * player, Opponent * opponent){
    this->player = player;
    this->opponent = opponent;
}

void BattleEngine::loadTeams(oppSeed_t oppSeed){
    this->playerTeam = this->player->team;
    this->opponent->decompOppSeed(oppSeed);
    this->opponentTeam = this->opponent->team;

    this->playerTeam.currentMonster = 0;
    this->opponentTeam.currentMonster = 0;
}

bool BattleEngine::winBattleCheck(team_t team){
    for(int health : team.healthList){
        if(health != 0)
            return false;
    }
    return true;
}

/*static void takeDamage(MonsterPointer attacker, MonsterPointer target, uint8_t move)
{
	uint8_t mod = getMatchupModifier(getMoveType(moveList[move]), (target.mon->seed.monsterid >> 5) );
	uint16_t damage = damageGeneration(attacker.mon->statlist.attack, (moveList[move] & 0b111), mod);
	
	#ifdef DEBUG
		std::cout << "damege taken: " << (int)damageTaken(target.mon->statlist.defense, damage) << std::endl;	
	#endif
	
	*target.currentHealth -= damageTaken(target.mon->statlist.defense, damage);
}*/



void BattleEngine::damagePhase(uint8_t playerMove, uint8_t oppMove)
{
    /*
	if(player.mon->statlist.speed > opponent.mon->statlist.speed)
	{ //player first
		//takeDamage(player, opponent, playerMove);
		//takeDamage(opponent, player, oppMove);
	}
	else
	{ // Opp first
		//takeDamage(opponent, player, oppMove);
		//takeDamage(player, opponent, playerMove);
	}
    */
}

void BattleEngine::battleLoop(){
    while(!winBattleCheck(playerTeam) && !winBattleCheck(opponentTeam)){
        
        //while(step());  // get players turn info

		//generate opponent move
        uint8_t opponentMove = getCurrentMon(this->opponentTeam).getAdvantage((Type_t)getCurrentMon(this->playerTeam).getType());

		//do damage calcs
		//damagePhase( playerMove,  oppMove);


		//check win / loose conditions
    }

}

void BattleEngine::encounter(oppSeed_t oppSeed){
    loadTeams(oppSeed);
    battleLoop();
}