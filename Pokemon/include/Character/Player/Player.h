//
// Created by Raghuvansh Agarwal on 19/09/25.
//

#ifndef POKEMON_PLAYER_H
#define POKEMON_PLAYER_H
#include <string>

namespace N_Pokemon {
    class Pokemon;
}

namespace N_Player {
    class Player {
    public:
        std::string name;
        N_Pokemon::Pokemon* chosen_pokemon = nullptr;

        Player(std::string p_name);
        Player();

        Player(const Player &player);

        void choosePokemon(int choice);
    };
}
#endif //POKEMON_PLAYER_H
