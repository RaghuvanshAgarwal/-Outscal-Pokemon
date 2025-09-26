//
// Created by Raghuvansh Agarwal on 25/09/25.
//

#include "../../../include/Pokemon/Pokemons/Bulbasaur.h"
#include <iostream>
#include "../../../include/Utility/Utility.h"

namespace N_Pokemon::N_Pokemons {
    Bulbasaur::Bulbasaur() : Pokemon("Bulbasaur", PokemonType::Grass, 100,35) {
    }

    void Bulbasaur::attack(Pokemon &target) {
        std::cout << name << " uses Vine Whips" << std::endl;
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
