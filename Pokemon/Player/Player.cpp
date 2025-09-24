//
// Created by Raghuvansh Agarwal on 19/09/25.
//
#include "Player.h"
#include "../Enums/PokemonChoice.h"
#include "../Enums/PokemonType.h"
#include <iostream>

#include "../Pokemon/Pokemon.h"


Player::Player(std::string p_name, Pokemon p_chosen_pokemon) : name(p_name), chosen_pokemon(p_chosen_pokemon) {
}

Player::Player() : name("Trainer"), chosen_pokemon(Pokemon()) {
}

Player::Player(const Player &player) : name(player.name), chosen_pokemon(player.chosen_pokemon) {
}

void Player::choosePokemon(int choice) {
    switch ((PokemonChoice) choice) {
        case PokemonChoice::Charmander:
            chosen_pokemon = Pokemon::Builder()
                             .setName("Charmander")
                             .setType(PokemonType::Fire)
                             .set_health(100)
                             .set_max_health(100)
                             .set_attack_power(10)
                             .build();
            break;
        case PokemonChoice::Bulbasaur:
            chosen_pokemon = Pokemon::Builder()
                             .setName("Bulbasaur")
                             .setType(PokemonType::Earth)
                             .set_health(100)
                             .set_max_health(100)
                             .set_attack_power(10)
                             .build();
            break;
        case PokemonChoice::Squirtle:
            chosen_pokemon = Pokemon::Builder()
                             .setName("Squirtle")
                             .setType(PokemonType::Water)
                             .set_health(100)
                             .set_max_health(100)
                             .set_attack_power(14)
                             .build();
            break;
        default:
            chosen_pokemon = Pokemon::Builder()
                             .setName("Pikachu")
                             .setType(PokemonType::Electric)
                             .set_health(100)
                             .set_max_health(100)
                             .set_attack_power(35)
                             .build();
            break;
    }
}
