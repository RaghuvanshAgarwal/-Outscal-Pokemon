//
// Created by Raghuvansh Agarwal on 25/09/25.
//

#ifndef POKEMON_SQUIRTLE_H
#define POKEMON_SQUIRTLE_H

#include "../Pokemon.h"

namespace N_Pokemon::N_Pokemons {
    class Squirtle : public Pokemon {
        void water_splash(Pokemon &target);

    public:
        Squirtle();
        void attack(Pokemon &target) override;
    };
}

#endif //POKEMON_SQUIRTLE_H
