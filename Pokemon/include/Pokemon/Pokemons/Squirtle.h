//
// Created by Raghuvansh Agarwal on 25/09/25.
//

#ifndef POKEMON_SQUIRTLE_H
#define POKEMON_SQUIRTLE_H

#include "../Pokemon.h"

namespace N_Pokemon::N_Pokemons {
    class Squirtle : public Pokemon {
    public:
        Squirtle();
       void attack(const Move* p_selected_move, Pokemon* target) override;
    };
}

#endif //POKEMON_SQUIRTLE_H
