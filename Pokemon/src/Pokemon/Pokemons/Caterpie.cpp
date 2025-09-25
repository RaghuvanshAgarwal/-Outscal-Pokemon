//
// Created by Raghuvansh Agarwal on 24/09/25.
//

#include "../../../include/Pokemon/Pokemons/Caterpie.h"

#include <iostream>

namespace N_Pokemon::N_Pokemons {
    Caterpie::Caterpie(): Pokemon("Caterpie", PokemonType::Bug,100,10) {
    }

    void Caterpie::bug_bite(Pokemon &target) {
        std::cout << name << " uses bug bite on " << target.get_name() << "!" << std::endl;
        target.take_damage(attack_power);
    }
}
