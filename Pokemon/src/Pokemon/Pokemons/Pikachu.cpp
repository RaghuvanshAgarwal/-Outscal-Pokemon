//
// Created by Raghuvansh Agarwal on 24/09/25.
//
#include "../../../include/Pokemon/Pokemons/Pikachu.h"

#include <iostream>
#include <ostream>
#include "../../../include/Utility/Utility.h"


namespace N_Pokemon::N_Pokemons {

    Pikachu::Pikachu() : Pokemon("Pikachu", PokemonType::Electric, 100, 20) {
    }

    void Pikachu::attack(Pokemon &target) {
        std::cout << name << " uses Flame Thrower" << std::endl;
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
