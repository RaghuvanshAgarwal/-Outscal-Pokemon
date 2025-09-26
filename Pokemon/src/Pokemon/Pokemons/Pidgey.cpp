//
// Created by Raghuvansh Agarwal on 24/09/25.
//

#include "../../../include/Pokemon/Pokemons/Pidgey.h"
#include "../../../include/Pokemon/PokemonType.h"
#include <iostream>
#include "../../../include/Utility/Utility.h"

namespace N_Pokemon::N_Pokemons {
    Pidgey::Pidgey() : Pokemon("Pidgey", PokemonType::Normal, 100,35) {
    }

    void Pidgey::attack(Pokemon &target) {
        std::cout << name << " uses Wing Attack" << std::endl;
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