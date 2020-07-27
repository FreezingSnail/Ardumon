#include "GameEngine.h"
#include "battleEngine.h"

void GameEngine::gameLoop(){

    switch(this->gameState){
        case GameState::MENU:{

            break;
        }
        case GameState::WORLD:{

            break;
        }
        case GameState::BATTLE:{
            battle();
            break;
        }
        default:
            //faqed
            break;
    }

}

void GameEngine::battle(){
   // this->battleEngine->loadTeams(this->player);
    //this->battleEngine->battleLoop();
}

GameEngine::GameEngine(){}