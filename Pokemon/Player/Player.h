//
// Created by Raghuvansh Agarwal on 19/09/25.
//

#ifndef POKEMON_PLAYER_H
#define POKEMON_PLAYER_H
#include <string>

#include "../Pokemon/Pokemon.h"


class Player {
public:
    std::string name;
    Pokemon chosen_pokemon;

    Player(std::string p_name, Pokemon p_chosen_pokemon);

    Player();

    Player(const Player &player);

    void choosePokemon(int choice);
};
#endif //POKEMON_PLAYER_H