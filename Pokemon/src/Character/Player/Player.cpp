//
// Created by Raghuvansh Agarwal on 19/09/25.
//
#include "../../../include/Character/Player/Player.h"
#include "../../../include/Pokemon/PokemonChoice.h"
#include <iostream>

#include "../../../include/Pokemon/Pokemon.h"
#include "../../../include/Pokemon/Pokemons/Bulbasaur.h"
#include "../../../include/Pokemon/Pokemons/Charmander.h"
#include "../../../include/Pokemon/Pokemons/Pikachu.h"
#include "../../../include/Pokemon/Pokemons/Squirtle.h"

namespace N_Player {
    Player::Player(std::string p_name) : name(p_name) {
    }

    Player::Player() : name("Trainer") {
    }

    Player::Player(const Player &player) : name(player.name), chosen_pokemon(player.chosen_pokemon) {
    }

    void Player::choose_pokemon(int choice) {
        switch (static_cast<N_Pokemon::PokemonChoice>(choice)) {
            case N_Pokemon::PokemonChoice::Charmander:
                chosen_pokemon = new N_Pokemon::N_Pokemons::Charmander();
                break;
            case N_Pokemon::PokemonChoice::Bulbasaur:
                chosen_pokemon = new N_Pokemon::N_Pokemons::Bulbasaur();
                break;
            case N_Pokemon::PokemonChoice::Squirtle:
                chosen_pokemon = new N_Pokemon::N_Pokemons::Squirtle();
                break;
            default:
                chosen_pokemon = new N_Pokemon::N_Pokemons::Pikachu();
                break;
        }
    }
}
