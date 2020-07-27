#pragma once
#include "player.h"
#include "GameEngine.h"
#include "battleEngine.h"
#include "opponent.h"

 Player player;
 Opponent opponent;
 GameEngine gameEngine;
 BattleEngine battleEngine(&player, &opponent);