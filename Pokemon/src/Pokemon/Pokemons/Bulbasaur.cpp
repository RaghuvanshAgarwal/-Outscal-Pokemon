//
// Created by Raghuvansh Agarwal on 25/09/25.
//

#include "../../../include/Pokemon/Pokemons/Bulbasaur.h"
#include "../../../include/Pokemon/PokemonType.h"

#include <iostream>
#include "../../../include/Utility/Utility.h"

namespace N_Pokemon::N_Pokemons {
    Bulbasaur::Bulbasaur()
        : Pokemon(
            "Bulbasaur",
            PokemonType::Grass,
            100,
            {
                {"Vine Whip", 10},
                {"Leech Seed", 15},
                {"Razor Leaf", 8}
            }
        ) {
    }

    void Bulbasaur::attack(const Move* p_selected_move, Pokemon* target) {
        Pokemon::attack(p_selected_move, target);
        if (p_selected_move->name == "Vine Whip") {
            srand(time(0));
            int second_hit_chance = rand() % 2;
            if (second_hit_chance == 1) {
                Pokemon::attack(p_selected_move, target);
                std::cout << name << " hits again with a second " << p_selected_move->name << std::endl;
            }else {
                std::cout << target->get_name() << " dodged the second hit" << std::endl;
            }
        }
    }
}
