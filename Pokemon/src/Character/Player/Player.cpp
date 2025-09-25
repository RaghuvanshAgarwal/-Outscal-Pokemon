//
// Created by Raghuvansh Agarwal on 19/09/25.
//
#include "../../../include/Character/Player/Player.h"
#include "../../../include/Pokemon/PokemonChoice.h"
#include "../../../include/Pokemon/PokemonType.h"
#include <iostream>

#include "../../../include/Pokemon/Pokemon.h"

namespace N_Player {
    Player::Player(std::string p_name, N_Pokemon::Pokemon p_chosen_pokemon) : name(p_name), chosen_pokemon(p_chosen_pokemon) {
    }

    Player::Player() : name("Trainer"), chosen_pokemon(N_Pokemon::Pokemon()) {
    }

    Player::Player(const Player &player) : name(player.name), chosen_pokemon(player.chosen_pokemon) {
    }

    void Player::choosePokemon(int choice) {
        switch (static_cast<N_Pokemon::PokemonChoice>(choice)) {
            case N_Pokemon::PokemonChoice::Charmander:
                chosen_pokemon = N_Pokemon::Pokemon("Chamander", N_Pokemon::PokemonType::Fire, 100,10);
                break;
            case N_Pokemon::PokemonChoice::Bulbasaur:
                chosen_pokemon = N_Pokemon::Pokemon("Bulbasaur", N_Pokemon::PokemonType::Earth, 100,10);
                break;
            case N_Pokemon::PokemonChoice::Squirtle:
                chosen_pokemon = N_Pokemon::Pokemon("Squirtle", N_Pokemon::PokemonType::Water, 100,14);
                break;
            default:
                chosen_pokemon = N_Pokemon::Pokemon("Pikachu", N_Pokemon::PokemonType::Electric, 100,35);
                break;
        }
    }
}
