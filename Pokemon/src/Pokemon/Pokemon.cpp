//
// Created by Raghuvansh Agarwal on 19/09/25.
//

#include "../../include/Pokemon/Pokemon.h"
#include <iostream>

#include "../../include/Pokemon/PokemonType.h"

namespace N_Pokemon {
    Pokemon::Pokemon(std::string p_name, const PokemonType p_type, const int p_health, const int p_attack_power) : name(p_name), type(p_type), health(p_health), max_health(p_health), attack_power(p_attack_power) {}
    Pokemon::Pokemon(): name("Unknow"), type(PokemonType::Normal), health(100), max_health(100), attack_power(0) {}
    Pokemon::Pokemon(const Pokemon &pokemon) : name(pokemon.name), type(pokemon.type), health(pokemon.health), max_health(pokemon.health), attack_power(pokemon.attack_power) {}

    void Pokemon::take_damage(int damage) {
        health -= damage;
        if (health <= 0) {
            health = 0;
        }
    }

    bool Pokemon::is_fainted() const {
        return health <= 0;
    }

    void Pokemon::heal() {
        health = max_health;
    }

}




