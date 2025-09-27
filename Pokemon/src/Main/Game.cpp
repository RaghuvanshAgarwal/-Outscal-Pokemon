//
// Created by Raghuvansh Agarwal on 22/09/25.
//

#include "../../include/Main/Game.h"

#include <iostream>

#include "../../include/Pokemon/Grass.h"
#include "../../include/Battle/BattleManager.h"
#include "../../include/Character/Player/Player.h"
#include "../../include/Utility/Utility.h"
#include "../../include/Battle/WildEncounterManager.h"
#include "../../include/Pokemon/Pokemons/Caterpie.h"
#include "../../include/Pokemon/Pokemons/Pidgey.h"
#include "../../include/Pokemon/Pokemons/Zubat.h"


namespace N_Main {
    Game::Game() {
        forest_grass = {
            "Forest",
            {
                new N_Pokemon::N_Pokemons::Pidgey(),
                new N_Pokemon::N_Pokemons::Zubat(),
                new N_Pokemon::N_Pokemons::Caterpie(),
            },
            70
        };
    }

    Game::~Game() {
        delete wild_pokemon;
    }



    void Game::gameLoop(N_Player::Player *player) {
        int choice;
        bool keepPlaying = true;

        while (keepPlaying) {
            // Clear console before showing options
            N_Utility::Utils::clearScreen();

            // Display options to the player
            std::cout << "\nWhat would you like to do next, " << *player->get_name() << "?\n";
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
                    N_Battle::WildEncounterManager encounter_manager;
                    N_Battle::BattleManager battle_manager{};
                    wild_pokemon = encounter_manager.getRandomPokemonFromGrass(&forest_grass);
                    battle_manager.start_battle(player, wild_pokemon);
                }
                break;
                case 2:
                    std::cout << "You have reached the PokeCenter" << std::endl;
                    player->get_chosen_pokemon()->heal();
                    std::cout << player->get_chosen_pokemon()->get_name() << " has fully healed" << std::endl;
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
            N_Utility::Utils::waitForEnter();
        }

        std::cout << "Goodbye, " << player->get_name() << "! Thanks for playing!\n";
    }
}
