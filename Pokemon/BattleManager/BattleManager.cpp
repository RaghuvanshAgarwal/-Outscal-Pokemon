//
// Created by Raghuvansh Agarwal on 22/09/25.
//

#include "BattleManager.h"

#include <iostream>

#include "../Pokemon/Pokemon.h"

void BattleManager::battle(Pokemon& player_pokemon, Pokemon& wild_pokemon) {
    while (!player_pokemon.is_fainted() && !wild_pokemon.is_fainted()) {
        player_pokemon.attack(wild_pokemon);
        if (wild_pokemon.is_fainted()) break;
        wild_pokemon.attack(player_pokemon);
    }
    if (player_pokemon.is_fainted()) {
        std::cout << player_pokemon.name << " has fainted!" << std::endl;
    }
    else {
        std::cout << wild_pokemon.name << " has fainted!" << std::endl;
    }
}