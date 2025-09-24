//
// Created by Raghuvansh Agarwal on 22/09/25.
//

#ifndef POKEMON_BATTLEMANAGER_H
#define POKEMON_BATTLEMANAGER_H
#include "BattleState.h"

class Player;
class Pokemon;

class BattleManager {
    BattleState battle_state;
    void battle();
    void handle_battle_outcome() const;
    void update_battle_state();
    public:
    void start_battle(Player& player, Pokemon& wild_pokemon);

};


#endif //POKEMON_BATTLEMANAGER_H