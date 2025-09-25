//
// Created by Raghuvansh Agarwal on 25/09/25.
//

#include "../../../include/Pokemon/Pokemons/Squirtle.h"

#include <iostream>
#include <ostream>

#include "../../../include/Pokemon/PokemonType.h"

namespace N_Pokemon::N_Pokemons {
    Squirtle::Squirtle() : Pokemon("Squirtle", PokemonType::Water, 100,35) {
    }

    void Squirtle::water_splash(Pokemon &target) {
        std::cout << name << " uses Water Splash on " << target.get_name() << "!" << std::endl;
        target.take_damage(attack_power);
    }


}
