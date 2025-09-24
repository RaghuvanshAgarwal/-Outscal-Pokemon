//
// Created by Raghuvansh Agarwal on 22/09/25.
//

#ifndef POKEMON_BATTLEMANAGER_H
#define POKEMON_BATTLEMANAGER_H


class Player;
class Pokemon;

class BattleManager {
    public:
    void start_battle(Player& player, Pokemon& wild_pokemon);
    void battle(Pokemon& player_pokemon, Pokemon& wild_pokemon);
    void handle_battle_outcome(const Player& player, bool player_won);
};


#endif //POKEMON_BATTLEMANAGER_H