//
// Created by Raghuvansh Agarwal on 24/09/25.
//
#include "../../../include/Pokemon/Pokemons/Pikachu.h"
#include "../../../include/Pokemon/PokemonType.h"


#include <iostream>
#include <ostream>
#include "../../../include/Utility/Utility.h"


namespace N_Pokemon::N_Pokemons {
    Pikachu::Pikachu() : Pokemon(
        "Pikachu",
        PokemonType::Electric,
        100, {
            {"Nuzzle", 7},
            {"Thunder Bolt", 40},
            {"Discharge", 15},
        }) {}

    void Pikachu::attack(const Move* p_selected_move, Pokemon* target) {

        if(p_selected_move->name == "THUNDER BOLT")
        {
            srand(time(NULL));
            // 80% chance to hit
            if (rand() % 100 < 80)
            {
                Pokemon::attack(p_selected_move, target);
                std::cout << "... and it hit successfully!" << std::endl;
            }
            else
                std::cout << "... but it missed!" << std::endl;
        }
        else
            Pokemon::attack(p_selected_move, target);
    }
}
