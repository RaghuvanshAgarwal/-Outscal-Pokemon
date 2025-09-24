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
        void bug_bite(Pokemon& target);
    };
}

#endif //POKEMON_CATERPIE_H