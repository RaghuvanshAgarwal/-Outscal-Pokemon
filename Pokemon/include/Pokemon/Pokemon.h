//
// Created by Raghuvansh Agarwal on 19/09/25.
//

#ifndef POKEMON_POKEMON_H
#define POKEMON_POKEMON_H

#include <string>

#include "PokemonType.h"

namespace N_Pokemon {
    class Pokemon {
    protected:
        std::string name;
        PokemonType type;
        int health;
        int max_health;
        int attack_power = 0;


    public:
        Pokemon(std::string p_name, PokemonType p_type, int p_health, int p_attack_power);
        Pokemon();
        Pokemon(const Pokemon &pokemon);

        bool is_fainted() const;
        std::string get_name() const {
            return name;
        }
        virtual void attack(Pokemon& target) = 0;
        void take_damage(int damage);
        void heal();
    };
}
#endif //POKEMON_POKEMON_H