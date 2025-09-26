//
// Created by Raghuvansh Agarwal on 24/09/25.
//

#ifndef POKEMON_PIKACHU_H
#define POKEMON_PIKACHU_H
#include "../Pokemon.h"


namespace N_Pokemon::N_Pokemons {
    class Pikachu : public Pokemon {
        void thunder_shock(Pokemon &target);

    public:
        Pikachu();
        void attack(Pokemon &target) override;
    };
}

#endif //POKEMON_PIKACHU_H
