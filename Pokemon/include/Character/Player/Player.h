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
        std::string name;
        N_Pokemon::Pokemon* chosen_pokemon = nullptr;
    public:

        Player(std::string p_name);
        Player();

        Player(const Player &player);

        void choose_pokemon(int choice);

        const std::string* get_name() const {
            return &name;
        }

        void set_name(const std::string& p_name) {
            name = p_name;
        }

        N_Pokemon::Pokemon* get_chosen_pokemon() const {
            return chosen_pokemon;
        }
    };
}
#endif //POKEMON_PLAYER_H
