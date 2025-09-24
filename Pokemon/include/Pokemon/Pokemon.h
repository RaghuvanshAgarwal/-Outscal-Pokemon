//
// Created by Raghuvansh Agarwal on 19/09/25.
//

#ifndef POKEMON_POKEMON_H
#define POKEMON_POKEMON_H

#include <string>

#include "PokemonType.h"
enum class PokemonType;

class Pokemon {

    Pokemon(std::string p_name, PokemonType p_type, int p_health,int p_max_health, int p_attack_power);
public:
    std::string name;
    PokemonType type;
    int health;
    int max_health;
    int attack_power = 0;

    Pokemon();


    Pokemon(const Pokemon &pokemon);

    void attack(Pokemon& target) const;

    void take_damage(int damage);

    bool is_fainted() const;

    void heal();

    class Builder {
        std::string name = "Unknown";
        PokemonType type = PokemonType::Normal;
        int health = 0;
        int max_health = 0;
        int attack_power = 0;

    public:
        Builder& setName(const std::string& p_name);
        Builder& setType(PokemonType p_type);
        Builder& set_health(int p_health);
        Builder& set_max_health(int p_max_health);
        Builder& set_attack_power(int p_attack_power);
        Pokemon build() const;
    };
};
#endif //POKEMON_POKEMON_H