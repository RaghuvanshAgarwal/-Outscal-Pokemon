//
// Created by Raghuvansh Agarwal on 19/09/25.
//

#include "Pokemon.h"
#include <iostream>

#include "../Enums/PokemonType.h"

Pokemon::Pokemon(): name("Pikachu"), type(PokemonType::Electric), health(100), max_health(100) {}
Pokemon::Pokemon(std::string p_name, PokemonType p_type, int p_health, int p_max_health, int p_attack_power) : name(p_name), type(p_type), health(p_health), max_health(p_max_health), attack_power(p_attack_power) {}
Pokemon::Pokemon(const Pokemon &pokemon) : name(pokemon.name), type(pokemon.type), health(pokemon.health), max_health(pokemon.health), attack_power(pokemon.attack_power) {}

void Pokemon::attack(Pokemon& target) const {
    const int damage = attack_power;
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

void Pokemon::heal() {
    health = max_health;
}

Pokemon::Builder &Pokemon::Builder::setName(const std::string &p_name) {
    name = p_name;
    return *this;
}

Pokemon::Builder &Pokemon::Builder::setType(PokemonType p_type) {
    type = p_type;
    return *this;
}

Pokemon::Builder &Pokemon::Builder::set_health(int p_health) {
    health = p_health;
    return *this;
}
Pokemon::Builder &Pokemon::Builder::set_max_health(int p_health) {
    max_health = p_health;
    return *this;
}
Pokemon::Builder &Pokemon::Builder::set_attack_power(int p_attack_power) {
    attack_power = p_attack_power;
    return *this;
}

Pokemon Pokemon::Builder::build() const {
    return Pokemon(name,type,health,max_health,attack_power);
}





