//
// Created by Raghuvansh Agarwal on 25/09/25.
//

#ifndef POKEMON_CHARMANDER_H
#define POKEMON_CHARMANDER_H

#include "../Pokemon.h"

namespace N_Pokemon::N_Pokemons {
    class Charmander : public Pokemon {
    public:
        Charmander();
        void attack(Pokemon &target) override;
    };
}
#endif
