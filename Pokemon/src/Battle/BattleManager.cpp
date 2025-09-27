//
// Created by Raghuvansh Agarwal on 22/09/25.
//

#include "../../include/Battle/BattleManager.h"

#include <iostream>
#include "../../include/Character/Player/Player.h"
#include "../../include/Pokemon/Pokemon.h"
#include "../../include/Utility/Utility.h"


namespace N_Battle {
    void BattleManager::start_battle(N_Player::Player *player, N_Pokemon::Pokemon *wild_pokemon) {
        battle_state.wild_pokemon = wild_pokemon;
        battle_state.player_pokemon = player->get_chosen_pokemon();
        battle_state.is_player_turn = true;
        battle_state.has_battle_ended = false;

        std::cout << wild_pokemon->get_name() << " has appeared!" << std::endl;
        battle();
        handle_battle_outcome();
    }


    void BattleManager::battle() {
        while (!battle_state.has_battle_ended) {
            if (battle_state.is_player_turn) {
                battle_state.player_pokemon->select_and_use_move(battle_state.wild_pokemon);
            }else {
                const N_Pokemon::Move* move = battle_state.wild_pokemon->get_random_move();
                battle_state.wild_pokemon->use_move(move, battle_state.player_pokemon);
            }
            update_battle_state();
            battle_state.is_player_turn = !battle_state.is_player_turn;
        }
    }

    void BattleManager::handle_battle_outcome() const {
        if (battle_state.player_pokemon->is_fainted()) {
            std::cout << battle_state.player_pokemon->get_name() << " has fainted! You lose the battle" << std::endl;
        } else {
            std::cout << "You defeated the wild " << battle_state.wild_pokemon->get_name() << "!" << std::endl;
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
}
