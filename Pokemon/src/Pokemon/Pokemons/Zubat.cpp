//
// Created by Raghuvansh Agarwal on 24/09/25.
//

#include "../../../include/Pokemon/Pokemons/Zubat.h"
#include "../../../include/Utility/Utility.h"
#include <iostream>

namespace N_Pokemon::N_Pokemons {
    Zubat::Zubat(): Pokemon("Zubat", PokemonType::Posion,100,20) {
    }

    void Zubat::super_sonic(Pokemon &target) {
        std::cout << name << " supersonics on " << target.get_name() << "!" << std::endl;
        target.take_damage(attack_power);
    }

    void Zubat::attack(Pokemon &target) {
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

