//
// Created by Raghuvansh Agarwal on 19/09/25.
//

#include "Pokemon.h"
#include <iostream>

#include "../Enums/PokemonType.h"

Pokemon::Pokemon(): name("Pikachu"), type(PokemonType::Electric), health(10) {}
Pokemon::Pokemon(std::string p_name, PokemonType p_type, int p_health) : name(p_name), type(p_type), health(p_health) {}

Pokemon::Pokemon(std::string p_name, PokemonType p_type): name(p_name), type(p_type), health(100) {}

Pokemon::Pokemon(const Pokemon &pokemon) : name(pokemon.name), type(pokemon.type), health(pokemon.health) {}

void Pokemon::attack() const {
    std::cout << "Pokemon " << name << " attacks " << std::endl;
}



