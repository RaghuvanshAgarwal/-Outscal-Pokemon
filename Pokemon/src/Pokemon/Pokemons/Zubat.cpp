//
// Created by Raghuvansh Agarwal on 24/09/25.
//

#include "../../../include/Pokemon/Pokemons/Zubat.h"
#include "../../../include/Pokemon/PokemonType.h"

#include "../../../include/Utility/Utility.h"
#include <iostream>

namespace N_Pokemon::N_Pokemons {
    Zubat::Zubat() : Pokemon(
        "Zubat",
        PokemonType::Poison,
        100, {
            {"Poison Fang", 21},
            {"Venoshock", 15}
        }) {
    }


    void Zubat::attack(const Move* p_selected_move, Pokemon* target) {
        Pokemon::attack(p_selected_move, target);
        if (p_selected_move->name == "Poison Fang") {
            health += static_cast<int>(0.6 * p_selected_move->power);
            if (health > max_health) {
                health = max_health;
            }
            std::cout << "... and regained health!" << std::endl;
        }
    }
}
