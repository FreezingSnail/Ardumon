#pragma once
#include "Moves.h"
#include <iostream>
#include <stdint.h>

uint8_t MoveList[8] =	{ m00, m01, m02, m03, m04, m05, m06, m07 /*, m01, m01, m01, m01, m01, m01, m01, m01, m01, m01, m01, m01, m01, m01, m01, m01, m01, m01, m01, m01, m01, m01, m01, m01 */};

uint8_t getMoveID(uint8_t move){
	//move 
	// 00    000    000    
	// id#   type   power 
	int x =(((4) * ((move >> 3) & 0b111)) + (move >> 6));
	std::cout << x;
	return x;
}

