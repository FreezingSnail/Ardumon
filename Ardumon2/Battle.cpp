#include "battle.h"
#include "MoveArray.h"
#include "TypeTable.h"
#include "Monster.h"

void loadTeams(Monster playerMons[3]){
	for(uint8_t i = 0; i<3; i++)
	{
	playerMonster[i] = playerMons[i];
	playerHealths[i] = playerMons.[i].statlist.health;
	}


}

bool step(); player input

uint8_t getPlayerMove();

void damagePhase(uint8_t playerMove, uint8_t oppMove){
	if(currentMon->satlist.speed > oppMon->satlist.speed){ //player first

		uint8_t mod = getMatchupModifier(getMoveType(moveList[playerMove]), oppMon->getType())
		uint16_t damage = damageGeneration(currentMon->statlist.attack, (MoveList[playerMove] & 0b111), uint8_t modifier)

		*oppHealth -= damageTake(oppMon->statlist.defense, damage);

		mod = getMatchupModifier(getMoveType(moveList[oppMove]), playerMon->getType())
		damage = damageGeneration(oppMon->statlist.attack, (MoveList[oppMove] & 0b111), uint8_t modifier)

		*currentHealth -= damageTake(playerMon->statlist.defense, damage);


	}
	else{ // Opp first

		uint8_t mod = getMatchupModifier(getMoveType(moveList[oppMove]), playerMon->getType())
		uint16_t damage = damageGeneration(oppMon->statlist.attack, (MoveList[oppMove] & 0b111), uint8_t modifier)

		*currentHealth -= damageTake(playerMon->statlist.defense, damage);

		mod = getMatchupModifier(getMoveType(moveList[playerMove]), oppMon->getType())
		damage = damageGeneration(currentMon->statlist.attack, (MoveList[playerMove] & 0b111), uint8_t modifier)

		*oppHealth -= damageTake(oppMon->statlist.defense, damage);

	}
}


void battleLoop(Player player){
	uint8_t playerMove;
	uint8_t oppMove;

	loadTeams(player.party);

	while(True)  //win condition check ?
	{
		while(step());  // get players turn info

		//generate opponent move

		//do damage calcs
		damagePhase(uint8_t playerMove, uint8_t oppMove);


		//check win / loose conditions

	}
}