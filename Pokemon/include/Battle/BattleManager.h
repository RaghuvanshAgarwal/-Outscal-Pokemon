//
// Created by Raghuvansh Agarwal on 22/09/25.
//

#ifndef POKEMON_BATTLEMANAGER_H
#define POKEMON_BATTLEMANAGER_H
#include "BattleState.h"

namespace N_Player {
    class Player;
}

namespace N_Pokemon {
    class Pokemon;
}



namespace N_Battle {
    class BattleManager {
        BattleState battle_state;
        void battle();
        void handle_battle_outcome() const;
        void update_battle_state();
    public:
        void start_battle(N_Player::Player& player, N_Pokemon::Pokemon& wild_pokemon);

    };
}


#endif //POKEMON_BATTLEMANAGER_H