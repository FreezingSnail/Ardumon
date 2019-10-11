#pragma once
#include <stdint.h>


uint16_t statCalc(uint8_t seedNum, uint8_t level){
	return  (level*seedNum)-seedNum+1;
}

uint16_t damageGeneration(uint8_t atkStat, uint8_t movePower, uint8_t modifier){
	return ((atkStat * movePower) + atkStat) * (modifier/2);
}

uint16_t damageTake(uint8_t defStat, uint16_t damage){
	return (damage/defStat);
}