//
// Created by Raghuvansh Agarwal on 19/09/25.
//

#include "Pokemon.h"
#include <iostream>

#include "../Enums/PokemonType.h"

Pokemon::Pokemon(): name("Pikachu"), type(PokemonType::Electric), health(100), max_health(100) {}
Pokemon::Pokemon(std::string p_name, PokemonType p_type, int p_health) : name(p_name), type(p_type), health(p_health), max_health(p_health) {}

Pokemon::Pokemon(std::string p_name, PokemonType p_type): name(p_name), type(p_type), health(100), max_health(100) {}

Pokemon::Pokemon(const Pokemon &pokemon) : name(pokemon.name), type(pokemon.type), health(pokemon.health), max_health(pokemon.health) {}

void Pokemon::attack(Pokemon& target) const {
    const int damage = 10;
    std::cout << name << " attacks " << target.name << " for " << damage << " damage!" << std::endl;
    target.take_damage(damage);
}

void Pokemon::take_damage(int damage) {
    health -= damage;
    if (health <= 0) {
        health = 0;
    }
}

bool Pokemon::is_fainted() const {
    return health <= 0;
}



