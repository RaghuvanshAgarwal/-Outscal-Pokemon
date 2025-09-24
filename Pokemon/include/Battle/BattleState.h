//
// Created by Raghuvansh Agarwal on 24/09/25.
//

#ifndef POKEMON_BATTLESTATE_H
#define POKEMON_BATTLESTATE_H
namespace N_Pokemon {
    class Pokemon;
}

namespace N_Battle {
    struct BattleState {
        N_Pokemon::Pokemon* player_pokemon;
        N_Pokemon::Pokemon* wild_pokemon;
        bool is_player_turn;
        bool has_battle_ended;
    };
}


#endif //POKEMON_BATTLESTATE_H