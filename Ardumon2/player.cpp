#include "player.h"

Player::Player(){}

void Player::loadMonster(uint8_t slot, Monster mon){
    this->team.teamList[slot] = mon;
}

void Player::loadTeam(){

}

void Player::printPlayer(){
    printTeam(&this->team);

}