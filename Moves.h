#pragma once
#include <stdint.h>

//move 
// 00    000    000    
// id#   type   power   


/******************
 * Array moves[move id]
 * 
 * Array Monster moves[monster id][move list]
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * ***************/

///////////////////////////////////////////////////////
//              Moves                               //
//////////////////////////////////////////////////////

// 32 moves, 8 types, 4 per type

// Type 000 0

uint8_t m01 = 0b00 000 001;
//
uint8_t m02 = 0b01 000 010;
//
uint8_t m03 = 0b10 000 100;
//
uint8_t m04 = 0b11 000 101;
//

// Type 001 1

uint8_t m05 = 0b00 001 001;
//
uint8_t m06 = 0b01 001 010;
//
uint8_t m07 = 0b10 001 100;
//
uint8_t m08 = 0b11 001 101;
//