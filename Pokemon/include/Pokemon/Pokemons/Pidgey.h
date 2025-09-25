//
// Created by Raghuvansh Agarwal on 24/09/25.
//

#ifndef POKEMON_PIDGEY_H
#define POKEMON_PIDGEY_H

#include "../Pokemon.h"

namespace N_Pokemon::N_Pokemons {
    class Pidgey : public Pokemon {
        void wing_attack(Pokemon &target);

    public:
        Pidgey();
    };
}
#endif //POKEMON_PIDGEY_H
