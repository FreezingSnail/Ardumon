#pragma once
#include "common.h"
#include "Monster.h"
#include "calculations.h"
#include "team.h"
#include "player.h"
#include "battleEngine.h"


typedef enum gamestate{
    MENU,
    WORLD,
    BATTLE,
    
}GameState;

class GameEngine{
    public:
        Player * player;


        GameState gameState;
        
        BattleEngine * battleEngine;

        GameEngine(); 

        void gameLoop(); //where the magic happens
        void battle();   //starts the battle loop

};