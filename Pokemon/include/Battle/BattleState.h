//
// Created by Raghuvansh Agarwal on 24/09/25.
//

#ifndef POKEMON_BATTLESTATE_H
#define POKEMON_BATTLESTATE_H


class Pokemon;

struct BattleState {
    Pokemon* player_pokemon;
    Pokemon* wild_pokemon;
    bool is_player_turn;
    bool has_battle_ended;
};


#endif //POKEMON_BATTLESTATE_H