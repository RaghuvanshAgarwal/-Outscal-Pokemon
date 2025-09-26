//
// Created by Raghuvansh Agarwal on 25/09/25.
//

#include "../../../include/Pokemon/Pokemons/Squirtle.h"

#include <iostream>
#include <ostream>
#include "../../../include/Utility/Utility.h"


namespace N_Pokemon::N_Pokemons {
    Squirtle::Squirtle() : Pokemon("Squirtle", PokemonType::Water, 100,35) {
    }

    void Squirtle::water_splash(Pokemon &target) {
        std::cout << name << " uses Water Splash on " << target.get_name() << "!" << std::endl;
        target.take_damage(attack_power);
    }

    void Squirtle::attack(Pokemon &target) {
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
