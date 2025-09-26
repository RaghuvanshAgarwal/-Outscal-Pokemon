//
// Created by Raghuvansh Agarwal on 25/09/25.
//

#include "../../../include/Pokemon/Pokemons/Charmander.h"
#include "../../../include/Pokemon/PokemonType.h"

#include <iostream>

#include "../../../include/Utility/Utility.h"

namespace N_Pokemon::N_Pokemons {
    Charmander::Charmander()
        : Pokemon(
            "Charmander",
            PokemonType::Fire,
            100, {
                {"Ember", 13},
                {"Fire Fang", 9},
                {"Blazing Charge", 15}
            }) {}

    void Charmander::attack(const Move* p_selected_move, Pokemon* target) {
        Pokemon::attack(p_selected_move, target);
        if (p_selected_move->name == "Blazing Charge") {
            take_damage(10);
            std::cout << name << " takes 10 recoil damage from the Blazing Charge!\n";
            N_Utility::Utils::waitForEnter();
        }
    }
}
