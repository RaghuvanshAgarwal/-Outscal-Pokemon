//
// Created by Raghuvansh Agarwal on 24/09/25.
//
#include "../../../include/Pokemon/Pokemons/Pikachu.h"
#include "../../../include/Pokemon/PokemonType.h"

#include <iostream>
#include <ostream>


namespace N_Pokemon::N_Pokemons {

    Pikachu::Pikachu() : Pokemon("Pikachu", PokemonType::Electric, 100, 100, 20) {
    }

    void Pikachu::thunder_shock(Pokemon &target) {
        std::cout << name << " uses Thunder Shock on " << target.name << "!" << std::endl;
        target.take_damage(attack_power);
    }

}
