//
// Created by Raghuvansh Agarwal on 24/09/25.
//

#include "../../../include/Pokemon/Pokemons/Caterpie.h"
#include "../../../include/Pokemon/PokemonType.h"
#include "../../../include/Utility/Utility.h"

#include <iostream>

namespace N_Pokemon::N_Pokemons {
    Caterpie::Caterpie() : Pokemon(
        "Caterpie",
        PokemonType::Bug,
        100,
        {
            {"Sticky Web", 10},
            {"Bug Bite", 12}
        }) {
    }

    void Caterpie::attack(const Move* p_selected_move, Pokemon* target) {
        Pokemon::attack(p_selected_move, target);
        if (p_selected_move->name == "Sticky Web") {
            int reduced_damage = 5;
            target->reduce_attack_power(reduced_damage);
            std::cout << target->get_name() << "'s next attack will be reduced by " << reduced_damage << " damage!\n";
        }
    }
}
