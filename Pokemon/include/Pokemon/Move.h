//
// Created by Raghuvansh Agarwal on 26/09/25.
//

#ifndef POKEMON_MOVE_H
#define POKEMON_MOVE_H
#include <string>

namespace N_Pokemon {
    struct Move {
        std::string name;
        int power;

        Move(const std::string& p_name, int p_power): name(p_name), power(p_power) {}
    };
}


#endif //POKEMON_MOVE_H