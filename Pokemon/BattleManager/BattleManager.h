//
// Created by Raghuvansh Agarwal on 22/09/25.
//

#ifndef POKEMON_BATTLEMANAGER_H
#define POKEMON_BATTLEMANAGER_H


class Pokemon;

class BattleManager {
    public:
    void battle(Pokemon& player_pokemon, Pokemon& wild_pokemon);
};


#endif //POKEMON_BATTLEMANAGER_H