#include "battle.h"

/*
static void push(battleOp moveOp){
	if(battleOpPointer == BATTLEOPSTACK){}// ded
	else
	{
		battleStack[battleOpPointer] = moveOp;
	}
}
*/

static void resetBattleStack()
{
	battleOpPointer = 0;
}

void loadTeam(Monster targetTeam[3], Monster loadTeam[3]){
	for(uint8_t i = 0; i<3; i++)
	{
		targetTeam[i] = loadTeam[i];
		
	}


}

static void takeDamage(MonsterPointer attacker, MonsterPointer target, uint8_t move)
{
	uint8_t mod = getMatchupModifier(getMoveType(moveList[move]), (target.mon->seed.monsterid >> 5) );
	uint16_t damage = damageGeneration(attacker.mon->statlist.attack, (moveList[move] & 0b111), mod);
	
	#ifdef DEBUG
		std::cout << "damege taken: " << (int)damageTaken(target.mon->statlist.defense, damage) << std::endl;	
	#endif
	
	*target.currentHealth -= damageTaken(target.mon->statlist.defense, damage);
}

bool step(); //player input

uint8_t getPlayerMove();

void damagePhase(uint8_t playerMove, uint8_t oppMove)
{
	if(player.mon->statlist.speed > opponent.mon->statlist.speed)
	{ //player first
		takeDamage(player, opponent, playerMove);
		takeDamage(opponent, player, oppMove);
	}
	else
	{ // Opp first
		takeDamage(opponent, player, oppMove);
		takeDamage(player, opponent, playerMove);
	}
}


void battleLoop(Player p){
	uint8_t playerMove;
	uint8_t oppMove;

	//loadTeam(player.party);

	while(true)  //win condition check ?
	{
		//while(step());  // get players turn info

		//generate opponent move

		//do damage calcs
		damagePhase( playerMove,  oppMove);


		//check win / loose conditions

	}
}