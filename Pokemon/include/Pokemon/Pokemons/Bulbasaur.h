//
// Created by Raghuvansh Agarwal on 25/09/25.
//

#ifndef POKEMON_BULBASAUR_H
#define POKEMON_BULBASAUR_H

#include "../Pokemon.h"

namespace N_Pokemon::N_Pokemons {
    class Bulbasaur : public Pokemon {
        void vine_whip(Pokemon& target);

    public:
        Bulbasaur();
        void attack(Pokemon &target) override;
    };
}

#endif //POKEMON_BULBASAUR_H
