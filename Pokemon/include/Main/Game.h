//
// Created by Raghuvansh Agarwal on 22/09/25.
//

#ifndef POKEMON_GAME_H
#define POKEMON_GAME_H
#include "../Pokemon/Grass.h"

class Player;

class Game {

public:
    Grass forest_grass;

    Game();
    void gameLoop(Player& player);
};


#endif //POKEMON_GAME_H