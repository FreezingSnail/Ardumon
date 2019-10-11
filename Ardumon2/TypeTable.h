#pragma once
#include <stdint.h>

/*************
/	8x8 array
/
/			  Plain, 	Water, 	Wind, 	Earth, 	Fire, 	Lightning, 	Plant, 	Elder
/		p 	  1			1		1		1		1		1			1		1	
/		
		Wa 	  1			.5		1		2		2		1			0		.5

		wi 	  1			1		1		.5		2		.5			1		1

		E     1			.5		0		.5		1		2			.5		1

		F     1			.5		1		.5		1		1			2		2

		L     1			2		2		0		1		1			.5		.5

		p     1			2		.5		2		.5		1			1		.5

		E     2			1		1		1		0		1			1		2
/
/
/
/		0	.5	1	2
/		0	1	2	3
/
/************/



// pack into pairs into 8bit ints
/*uint8_t typeTableb[8][8] = {
	{2,2,2,2,2,2,2,2},
	{1,2,2,4,4,2,0,1};
	{2,2,2,1,4,1,2,2},
	{2,1,0,1,2,4,1,2},
	{2,1,2,1,2,2,4,4},
	{2,4,4,0,2,2,1,1},
	{2,4,1,4,1,2,2,1},
	{4,2,2,2,0,2,2,4}
};
*/
uint8_t typeTable[8][4] = 
{
	{0b1010, 0b1010, 0b1010, 0b1010},
	{0b0110, 0b1011, 0b1110, 0b0001},
	{0b1010, 0b1001, 0b1101, 0b1010},
	{0b1001, 0b0001, 0b1011, 0b0110},
	{0b1001, 0b1001, 0b1010, 0b1111},
	{0b1011, 0b1100, 0b1010, 0b0101},
	{0b1011, 0b0111, 0b0110, 0b1001},
	{0b1110, 0b1010, 0b0010, 0b1011}
};

int getMatchupModifier(uint8_t moveType1, uint8_t moveType2){

	int mod = typeTable[moveType1][moveType2/2];
	if(moveType2%2 == 0)
		return (mod >> 2);
	else
	{
		mod = (mod & 0b0011);
		return mod == 3 ? 4 : mod;
	}
}