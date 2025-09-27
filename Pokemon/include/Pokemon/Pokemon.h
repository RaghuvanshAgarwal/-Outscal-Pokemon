//
// Created by Raghuvansh Agarwal on 19/09/25.
//

#ifndef POKEMON_POKEMON_H
#define POKEMON_POKEMON_H

#include <string>
#include <vector>
#include "Move.h"

namespace N_Pokemon {

    enum class PokemonType;
    struct Move;

    class Pokemon {

        void print_available_moves();
        int select_move();

    protected:
        std::string name;
        PokemonType type;
        int health;
        int max_health;
        std::vector<Move> moves;
        int reduced_damage;




    public:
        Pokemon(std::string p_name, PokemonType p_type, int p_health, std::vector<Move> p_moves);
        Pokemon();
        Pokemon(const Pokemon &pokemon);
        virtual  ~Pokemon() = default;

        bool is_fainted() const;
        std::string get_name() const {
            return name;
        }
        int get_health() const {
            return health;
        }
        virtual void attack(const Move* p_selected_move, Pokemon* target);
        void take_damage(int damage);
        void heal();

        void select_and_use_move(Pokemon* target);

        void reduce_attack_power(int p_value);

        void die();

        const Move* get_random_move() const;
        void use_move(const Move* move, Pokemon* target);
    };
}
#endif //POKEMON_POKEMON_H