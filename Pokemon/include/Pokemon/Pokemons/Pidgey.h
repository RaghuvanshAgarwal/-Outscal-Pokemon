//
// Created by Raghuvansh Agarwal on 24/09/25.
//

#ifndef POKEMON_PIDGEY_H
#define POKEMON_PIDGEY_H

#include "../Pokemon.h"

namespace N_Pokemon::N_Pokemons {
    class Pidgey : public Pokemon {
    
    public:
        Pidgey();
        void attack(Pokemon &target) override;
    };
}
#endif //POKEMON_PIDGEY_H
