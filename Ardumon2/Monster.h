#pragma once
#include "common.h"

typedef struct monsterSeed{

        uint8_t monsterid;			//000     00000
										//type    monster id

		uint8_t	atk;
		uint8_t	def;
		uint8_t hp;
		uint8_t spd;

        uint8_t movelist;			//32 binary flips
}monsterSeed_t;

typedef struct stats{
	uint16_t attack;
	uint16_t defense;
	uint16_t health;
	uint16_t speed;
}stats_t;

class Monster{

	public:
			monsterSeed_t seed;
			uint8_t level;
			uint32_t moveList;

			//uint8_t moves[4];
			stats_t statlist;

			Monster();
			Monster(monsterSeed_t seed);
			//Monster(/*uint8_t move[],*/ monsterSeed_t seed/*, uint32_t movelist*/):/*moves{move[0],move[1],move[2],move[3]},*/ seed(seed)/*, moveList(movelist)*/ {};
			uint8_t getType(); //seed.monsterid >>5 
			void changeMove(uint8_t slot, uint8_t newMove);
			void setStats();
			uint8_t getMove(uint8_t slot);

};



