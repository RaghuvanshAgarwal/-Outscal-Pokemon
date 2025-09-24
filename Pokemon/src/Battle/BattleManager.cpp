//
// Created by Raghuvansh Agarwal on 22/09/25.
//

#include "../../include/Battle/BattleManager.h"

#include <iostream>

#include "../../include/Character/Player/Player.h"
#include "../../include/Pokemon/Pokemon.h"
#include "../../include/Utility/Utility.h"


void BattleManager::start_battle(Player &player, Pokemon &wild_pokemon) {
    battle_state.wild_pokemon = &wild_pokemon;
    battle_state.player_pokemon = &player.chosen_pokemon;
    battle_state.is_player_turn = true;
    battle_state.has_battle_ended = false;

    std::cout << wild_pokemon.name << " has appeared!" << std::endl;
    battle();
    handle_battle_outcome();
}


void BattleManager::battle() {
    while (!battle_state.has_battle_ended) {
        if (battle_state.is_player_turn) {
            battle_state.player_pokemon->attack(*battle_state.wild_pokemon);
        }else {
            battle_state.wild_pokemon->attack(*battle_state.player_pokemon);
        }
        update_battle_state();
        battle_state.is_player_turn = !battle_state.is_player_turn;
    }
}

void BattleManager::handle_battle_outcome() const {
    if (battle_state.player_pokemon->is_fainted()) {
        std::cout << battle_state.player_pokemon->name << " has fainted! You lose the battle" << std::endl;
    } else {
        std::cout << "You defeated the wild " << battle_state.wild_pokemon->name << "!" << std::endl;
    }
}

void BattleManager::update_battle_state() {
    if (battle_state.player_pokemon->is_fainted()) {
        battle_state.has_battle_ended = true;
    }
    else if (battle_state.wild_pokemon->is_fainted()) {
        battle_state.has_battle_ended = true;
    }
}