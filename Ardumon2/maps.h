#pragma once
#inbclude "common.h"

uint16_t tesFloor1 = 0b0000000000000000;
uint16_t tesFloor2 = 0b0000000110000000;
uint16_t tesFloor3 = 0b0000000110000000;
uint16_t tesFloor4 = 0b0000000000000000;
uint16_t floor1[4] = { tesFloor1, tesFloor2, tesFloor4, tesFloor4};

uint16_t tesWall1 = 0b1111111111111111;
uint16_t tesWall2 = 0b1000000000000001;
uint16_t tesWall3 = 0b1000000000000001;
uint16_t tesWall4 = 0b1111111111111111;
uint16_t Wall1[4] = { tesWall1, tesWall2, tesWall4, tesWall4};

mapPack_t testmap = { { tesFloor1, tesFloor2, tesFloor3, tesFloor4}, 
                    { tesWall1, tesWall2, tesWall3, tesWall4}, 4};