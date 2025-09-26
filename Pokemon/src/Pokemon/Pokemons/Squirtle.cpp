//
// Created by Raghuvansh Agarwal on 25/09/25.
//

#include "../../../include/Pokemon/Pokemons/Squirtle.h"
#include "../../../include/Pokemon/PokemonType.h"

#include <iostream>
#include <ostream>
#include "../../../include/Utility/Utility.h"


namespace N_Pokemon::N_Pokemons {
    Squirtle::Squirtle()
        : Pokemon(
            "Squirtle",
            PokemonType::Water, 100,
            {
                {"Rapid Spin", 5},
                {"Rain Water", 4}
            }) {
    }

    void Squirtle::attack(const Move* p_selected_move, Pokemon* target) {
        if (p_selected_move->name == "Rapid Spin") {
            srand(time(NULL));
            const int hit_time = 2 + (rand() % 3);
            for (int i = 0; i < hit_time; i++) {
                Pokemon::attack(p_selected_move, target);
            }
            std::cout << "... and hit " << hit_time << " times!n" << std::endl;
        }else {
            Pokemon::attack(p_selected_move, target);
        }
    }
}
