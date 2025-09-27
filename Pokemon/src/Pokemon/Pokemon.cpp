//
// Created by Raghuvansh Agarwal on 19/09/25.
//

#include "../../include/Pokemon/Pokemon.h"
#include <iostream>

#include "../../include/Pokemon/PokemonType.h"
#include "../../include/Utility/Utility.h"

namespace N_Pokemon {


    Pokemon::Pokemon(std::string p_name, const PokemonType p_type, const int p_health, std::vector<Move> p_moves) : name(p_name), type(p_type), health(p_health), max_health(p_health), moves(p_moves) {
    }
    Pokemon::Pokemon(): name("Unknow"), type(PokemonType::Normal), health(100), max_health(100) {}
    Pokemon::Pokemon(const Pokemon &pokemon) : name(pokemon.name), type(pokemon.type), health(pokemon.health), max_health(pokemon.health), moves(pokemon.moves) {}

    void Pokemon::attack(const Move* p_selected_move, Pokemon *target) {
        target->take_damage(p_selected_move->power - reduced_damage);
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

    void Pokemon::print_available_moves() {
        std::cout << name << "'s available Moves: " << std::endl;
        for (int i = 0; i < moves.size(); i++) {
            std::cout << i + 1 << ") " << moves[i].name << " and its power is " << moves[i].power << std::endl;
        }
    }

    int Pokemon::select_move() {
        // Ask the player to select a move
        int choice;
        std::cout << "Choose a move: ";
        std::cin >> choice;

        // Validate the choice
        while (choice < 1 || choice > static_cast<int>(moves.size())) {
            std::cout << "Invalid choice. Try again: ";
            std::cin >> choice;
        }

        return choice;
    }

    void Pokemon::select_and_use_move(Pokemon *target) {
        print_available_moves();
        int choice = select_move();
        use_move(&moves[choice-1], target);
    }

    void Pokemon::reduce_attack_power(int p_value) {
        reduced_damage = p_value;
    }

    void Pokemon::die() {
        health = 0;
    }

    const Move * Pokemon::get_random_move() const {
        srand(time(NULL));
        return &moves[rand() % moves.size()];
    }

    void Pokemon::use_move(const Move* move, Pokemon* target) {
        std::cout << name << " used " << move->name << "!\n";
        N_Utility::Utils::waitForEnter();
        attack(move, target);
        if (target->is_fainted()) {
            std::cout << target->get_name() << " fainted!" << std::endl;
        }
        else {
            std::cout << target->get_name() << " has " << target->get_health() << " HP Left!" << std::endl;
        }
        N_Utility::Utils::waitForEnter();
    }


}




