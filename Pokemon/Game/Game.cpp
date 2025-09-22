//
// Created by Raghuvansh Agarwal on 22/09/25.
//

#include "Game.h"

#include <iostream>

#include "../Grass.h"
#include "../Enums/PokemonType.h"
#include "../Player/Player.h"
#include "../Utility/Utility.h"

void Game::gameLoop(Player &player) {

    Grass forest_grass = {
        "Forest",
        {
            {
                "Pidgey", PokemonType::Normal
            },
            {
                "Caterpie", PokemonType::Bug
            },
            {
                "Zubat", PokemonType::Posion
            },
        },
        80
    };

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
            case 1:
                std::cout << "You look around... but all the wild Pokémon are on vacation. Maybe try again later?" <<
                        std::endl;
                break;
            case 2:
                std::cout <<
                        "You head to the PokeCenter, but Nurse Joy is out on a coffee break. Guess your Pokémon will have to tough it out for now!"
                        << std::endl;
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
