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
        void supersonic(Pokemon& target);
    };
}

#endif //POKEMON_ZUBAT_H