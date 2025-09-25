//
// Created by Raghuvansh Agarwal on 25/09/25.
//

#include "../../../include/Pokemon/Pokemons/Charmander.h"
#include "../../../include/Pokemon/PokemonType.h"
#include <iostream>

namespace N_Pokemon::N_Pokemons {
    Charmander::Charmander() : Pokemon("Charmander", PokemonType::Fire, 100,35) {
    }

    void Charmander::flame_burst(Pokemon &target) {
        std::cout << name << " uses Flame Thrower on " << target.get_name() << "!" << std::endl;
        target.take_damage(attack_power);
    }

}