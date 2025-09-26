//
// Created by Raghuvansh Agarwal on 24/09/25.
//

#include "../../../include/Pokemon/Pokemons/Caterpie.h"
#include "../../../include/Utility/Utility.h"

#include <iostream>

namespace N_Pokemon::N_Pokemons {
    Caterpie::Caterpie(): Pokemon("Caterpie", PokemonType::Bug,100,10) {
    }

    void Caterpie::attack(Pokemon &target) {
        std::cout << name << " uses Bug Bite" << std::endl;
        N_Utility::Utils::waitForEnter();
        target.take_damage(attack_power);
        if (target.is_fainted()) {
            std::cout << target.get_name() << " fainted!" << std::endl;
        }
        else {
            std::cout << target.get_name() << " has " << target.get_health() << " HP Left!" << std::endl;
        }
        N_Utility::Utils::waitForEnter();
    }

}
