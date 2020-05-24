#pragma once
#include "common.h"

typedef struct monsterSeed{
        uint8_t monsterid;			//000     00000
										//type    monster id

        uint16_t statSeed;			//0000    0000    0000    0000
										//atk     def     hp      speed

        uint32_t movelist;			//32 binary flips
}monsterSeed_t;

typedef struct stats{
	uint8_t level;
	uint16_t attack;
	uint16_t defense;
	uint16_t health;
	uint16_t speed;
}stats_t;

class Monster{

	public:
			monsterSeed_t seed;
			uint32_t moveList;

			uint8_t moves[4];
			stats_t statlist;
			uint8_t level;

			Monster();
			//Monster(uint8_t move[], monsterSeed_t seed, uint32_t movelist):moves{move[0],move[1],move[2],move[3]}, seed(seed), moveList(movelist);
			uint8_t getType(); //seed.monsterid >>5 
			void changeMove(uint8_t slot, uint8_t newMove);
			uint8_t getMove(uint8_t slot);

};



