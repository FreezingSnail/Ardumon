#include <iostream>
#include "MoveArray.h"
#include "Monster.h"
#include "Moves.h"
#include "TypeTable.h"
#include "calculations.h"
#include "mapGenerator.h"
#include "globals.h"

extern Player player;
#include "tools/monsters.h"


int main(int argc, char** argv){
	
	Monster testMon = Monster(monsterData[0]);
	//testMon.printStats();

	player.loadMonster(0, testMon);
	player.printPlayer();

	
}
