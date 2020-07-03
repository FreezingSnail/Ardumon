#pragma once
#include "common.h"
#include "Monster.h"
#include "calculations.h"
#include "team.h"
#include "player.h"


typedef enum gamestate{
    MENU,
    WORLD,
    BATTLE,
    
}GameState;

class GameEngine{
    public:
        Player player;


        GameState gameState;


        GameEngine(); 

        void gameLoop(); //where the magic happens

};