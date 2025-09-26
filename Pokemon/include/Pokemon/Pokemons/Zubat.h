//
// Created by Raghuvansh Agarwal on 24/09/25.
//

#ifndef POKEMON_ZUBAT_H
#define POKEMON_ZUBAT_H

#include "../Pokemon.h"

namespace N_Pokemon::N_Pokemons {
    class Zubat : public Pokemon {
    public:
        Zubat();
        void attack(const Move* p_selected_move, Pokemon* target) override;
    };
}

#endif //POKEMON_ZUBAT_H
