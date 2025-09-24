//
// Created by Raghuvansh Agarwal on 22/09/25.
//

#include "BattleManager.h"

#include <iostream>

#include "../Player/Player.h"
#include "../Pokemon/Pokemon.h"
#include "../Utility/Utility.h"


void BattleManager::start_battle(Player &player, Pokemon &wild_pokemon) {
    std::cout << wild_pokemon.name << " has appeared!" << std::endl;
    battle(player.chosen_pokemon, wild_pokemon);
    handle_battle_outcome(player, !player.chosen_pokemon.is_fainted());
}


void BattleManager::battle(Pokemon& player_pokemon, Pokemon& wild_pokemon) {
    while (!player_pokemon.is_fainted() && !wild_pokemon.is_fainted()) {
        player_pokemon.attack(wild_pokemon);
        if (wild_pokemon.is_fainted()) break;
        wild_pokemon.attack(player_pokemon);
    }
}

void BattleManager::handle_battle_outcome(const Player& player, bool player_won) {
    if (player_won) {
        std::cout << player.chosen_pokemon.name << " is victorious! Keep an eye on your Pokémon's health.\n";
    }
    else {
        std::cout << "Oh no! " << player.chosen_pokemon.name << " fainted! You need to visit the PokeCenter.\n";
        Utils::waitForEnter();
        std::cout << "Game Over.\n";
    }
}