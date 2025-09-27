//
// Created by Raghuvansh Agarwal on 24/09/25.
//

#include "../../../include/Pokemon/Pokemons/Pidgey.h"
#include "../../../include/Pokemon/PokemonType.h"
#include <iostream>
#include "../../../include/Utility/Utility.h"

namespace N_Pokemon::N_Pokemons {
    Pidgey::Pidgey()
        : Pokemon(
            "Pidgey",
            PokemonType::Normal,
            100,
            {
                {"Tackle", 8},
                {"Quick Attack", 20},
                {"Whirlwind", 15}
            }) {
    }

    void Pidgey::attack(const Move* p_selected_move, Pokemon* target) {
        Pokemon::attack(p_selected_move, target);
        if (p_selected_move->name == "Whirlwind") {
            srand(time(NULL));
            const int random = rand() % 10;
            if (random < 2) {
                target->die();
                std::cout <<"... and blew the opponent away!\n";
            }
            N_Utility::Utils::waitForEnter();
        }
    }
}
