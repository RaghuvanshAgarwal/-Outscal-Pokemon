//
// Created by Raghuvansh Agarwal on 22/09/25.
//

#ifndef POKEMON_GAME_H
#define POKEMON_GAME_H
#include "../Character/Player/Player.h"
#include "../Pokemon/Grass.h"



namespace N_Main {
    class Game {
    public:
        N_Pokemon::Grass forest_grass;
        N_Pokemon::Pokemon* wild_pokemon;

        Game();
        ~Game();
        void gameLoop(N_Player::Player* player);
    };
}


#endif //POKEMON_GAME_H