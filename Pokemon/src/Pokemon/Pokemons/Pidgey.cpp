//
// Created by Raghuvansh Agarwal on 24/09/25.
//

#include "../../../include/Pokemon/Pokemons/Pidgey.h"
#include "../../../include/Pokemon/PokemonType.h"
#include <iostream>

namespace N_Pokemon::N_Pokemons {
    Pidgey::Pidgey() : Pokemon("Pidgey", PokemonType::Normal, 100,100,35) {
    }

    void Pidgey::wing_attack(Pokemon &target) {
        std::cout << name << " uses Wing Attack on " << target.name << "!" << std::endl;
        target.take_damage(attack_power);
    }


}