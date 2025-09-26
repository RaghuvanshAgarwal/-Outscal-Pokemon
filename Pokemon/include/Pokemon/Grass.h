//
// Created by Raghuvansh Agarwal on 22/09/25.
//

#ifndef POKEMON_GRASS_H
#define POKEMON_GRASS_H
#include <vector>

namespace N_Pokemon {
    struct Grass {
        std::string environment_type;
        std::vector<Pokemon*> wild_pokemons;
        int encounter_rate;
    };
}


#endif //POKEMON_GRASS_H