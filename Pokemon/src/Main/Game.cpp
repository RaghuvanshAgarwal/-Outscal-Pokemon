//
// Created by Raghuvansh Agarwal on 22/09/25.
//

#include "../../include/Main/Game.h"

#include <iostream>

#include "../../include/Pokemon/Grass.h"
#include "../../include/Battle/BattleManager.h"
#include "../../include/Pokemon/PokemonType.h"
#include "../../include/Character/Player/Player.h"
#include "../../include/Utility/Utility.h"
#include "../Battle/WildEncounterManager.h"


Game::Game() {
    forest_grass = {
        "Forest",
        {
            Pokemon::Builder().setName("Pidgey").setType(PokemonType::Normal).set_health(40).set_max_health(100).set_attack_power(10).build(),
            Pokemon::Builder().setName("Caterpie").setType(PokemonType::Bug).set_health(35).set_max_health(100).set_attack_power(5).build(),
            Pokemon::Builder().setName("Zubat").setType(PokemonType::Posion).set_health(30).set_max_health(100).set_attack_power(6).build(),
        },
        70
    };
}


void Game::gameLoop(Player &player) {
    int choice;
    bool keepPlaying = true;

    while (keepPlaying) {
        // Clear console before showing options
        Utils::clearScreen();

        // Display options to the player
        std::cout << "\nWhat would you like to do next, " << player.name << "?\n";
        std::cout << "1. Battle Wild Pokémon\n";
        std::cout << "2. Visit PokeCenter\n";
        std::cout << "3. Challenge Gyms\n";
        std::cout << "4. Enter Pokémon League\n";
        std::cout << "5. Quit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        // Process the player's choice and display the corresponding message
        switch (choice) {
            case 1: {
                WildEncounterManager encounter_manager;
                BattleManager battle_manager;
                Pokemon wild_pokemon = encounter_manager.getRandomPokemonFromGrass(forest_grass);
                battle_manager.start_battle(player, wild_pokemon);
            }
                break;
            case 2:
                std::cout << "You have reached the PokeCenter" << std::endl;
                player.chosen_pokemon.heal();
                std::cout << player.chosen_pokemon.name << " has fully healed" << std::endl;
                break;
            case 3:
                std::cout <<
                        "You march up to the Gym, but it's closed for renovations. Seems like even Gym Leaders need a break!"
                        << std::endl;
                break;
            case 4:
                std::cout <<
                        "You boldly step towards the Pokémon League... but the gatekeeper laughs and says, 'Maybe next time, champ!'"
                        << std::endl;
                break;
            case 5:
                std::cout <<
                        "You try to quit, but Professor Oak's voice echoes: 'There's no quitting in Pokémon training!'"
                        << std::endl;
                std::cout << "Are you sure you want to quit? (y/n): ";
                char quitChoice;
                std::cin >> quitChoice;
                if (quitChoice == 'y' || quitChoice == 'Y') {
                    keepPlaying = false;
                }
                break;
            default:
                std::cout << "That's not a valid choice. Try again!\n";
                break;
        }

        // Wait for Enter key before the screen is cleared and the menu is shown
        // again
        Utils::waitForEnter();
    }

    std::cout << "Goodbye, " << player.name << "! Thanks for playing!\n";
}
