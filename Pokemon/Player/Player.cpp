//
// Created by Raghuvansh Agarwal on 19/09/25.
//
#include "Player.h"
#include "../Enums/PokemonChoice.h"
#include "../Enums/PokemonType.h"
#include <iostream>

#include "../Pokemon/Pokemon.h"


Player::Player(std::string p_name, Pokemon p_chosen_pokemon): name(p_name), chosen_pokemon(p_chosen_pokemon) { }

Player::Player() : name("Trainer"), chosen_pokemon(Pokemon()){ }

Player::Player(const Player &player) : name(player.name), chosen_pokemon(player.chosen_pokemon) { }

void Player::choosePokemon(int choice){
    switch ((PokemonChoice) choice) {
        case PokemonChoice::Charmander:
            chosen_pokemon = Pokemon("Charmander", PokemonType::Fire, 100);
            break;
        case PokemonChoice::Bulbasaur:
            chosen_pokemon = Pokemon("Bulbasaur", PokemonType::Earth, 100);
            break;
        case PokemonChoice::Squirtle:
            chosen_pokemon = Pokemon("Squirtle", PokemonType::Water, 100);
            break;
        default:
            chosen_pokemon = Pokemon("Pikachu", PokemonType::Electric, 100);
            break;
    }
}

