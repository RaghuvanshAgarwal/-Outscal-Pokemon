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
        switch ((N_Pokemon::PokemonChoice) choice) {
            case N_Pokemon::PokemonChoice::Charmander:
                chosen_pokemon = N_Pokemon::Pokemon::Builder()
                                 .setName("Charmander")
                                 .setType(N_Pokemon::PokemonType::Fire)
                                 .set_health(100)
                                 .set_max_health(100)
                                 .set_attack_power(10)
                                 .build();
                break;
            case N_Pokemon::PokemonChoice::Bulbasaur:
                chosen_pokemon = N_Pokemon::Pokemon::Builder()
                                 .setName("Bulbasaur")
                                 .setType(N_Pokemon::PokemonType::Earth)
                                 .set_health(100)
                                 .set_max_health(100)
                                 .set_attack_power(10)
                                 .build();
                break;
            case N_Pokemon::PokemonChoice::Squirtle:
                chosen_pokemon = N_Pokemon::Pokemon::Builder()
                                 .setName("Squirtle")
                                 .setType(N_Pokemon::PokemonType::Water)
                                 .set_health(100)
                                 .set_max_health(100)
                                 .set_attack_power(14)
                                 .build();
                break;
            default:
                chosen_pokemon = N_Pokemon::Pokemon::Builder()
                                 .setName("Pikachu")
                                 .setType(N_Pokemon::PokemonType::Electric)
                                 .set_health(100)
                                 .set_max_health(100)
                                 .set_attack_power(35)
                                 .build();
                break;
        }
    }
}
