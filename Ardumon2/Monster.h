#pragma once
#include <stdint.h>

typedef struct monsterSeed{
       const uint8_t monsterid;			//000     00000
										//type    monster id

       const uint16_t statSeed;			//0000    0000    0000    0000
										//atk     def     hp      speed

       const uint32_t movelist;			//32 binary flips
}monsterSeed_t;

typedef struct stats{
	uint8_t level;
	uint16_t attack;
	uint16_t defense;
	uint16_t health;
	uint16_t speed;
}stats_t;

class Monster{

	private:
			const monsterSeed_t seed;
			uint32_t moveList;

			uint8_t moves[4];
			stats_t statlist;
			uint8_t level;

			Monster(uint8_t move[], monsterSeed_t seed, movelist):moves{move[0],move[1],move[2],move[3]}, seed(seed), moveList(movelist);

			void changeMove(uint8_t slot, uint8_t newMove);

}


uint32_t movelist0 = 0b00000000000000000000000000000000;
