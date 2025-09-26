//
// Created by Raghuvansh Agarwal on 24/09/25.
//

#ifndef POKEMON_PIKACHU_H
#define POKEMON_PIKACHU_H
#include "../Pokemon.h"


namespace N_Pokemon::N_Pokemons {
    class Pikachu : public Pokemon {
    public:
        Pikachu();
        void attack(const Move* p_selected_move, Pokemon* target) override;
    };
}

#endif //POKEMON_PIKACHU_H
