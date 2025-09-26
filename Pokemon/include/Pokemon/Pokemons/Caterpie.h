//
// Created by Raghuvansh Agarwal on 24/09/25.
//

#ifndef POKEMON_CATERPIE_H
#define POKEMON_CATERPIE_H

#include "../Pokemon.h"

namespace N_Pokemon::N_Pokemons {
    class Caterpie : public Pokemon {
    public:
        Caterpie();
        void attack(const Move* p_selected_move, Pokemon* target) override;
    };
}

#endif //POKEMON_CATERPIE_H
