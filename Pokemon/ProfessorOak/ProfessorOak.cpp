//
// Created by Raghuvansh Agarwal on 19/09/25.
//

#include "ProfessorOak.h"

#include <iostream>
#include <string>

#include "../Player/Player.h"
#include "../Enums/PokemonChoice.h"
#include "../Utility/Utility.h"

ProfessorOak::ProfessorOak(std::string p_name) : name(p_name) {
}

ProfessorOak::ProfessorOak() = default;

void ProfessorOak::greetPlayer(Player &p) const {
    std::cout << Utils::getPrintName(name) << "Hello there! Welcome to the world of Pokemon!";
    Utils::waitForEnter();
    std::cout << Utils::getPrintName(name) << "My name is Oak. People call me the Pokemon Professor!";
    Utils::waitForEnter();
    std::cout << Utils::getPrintName(name) << "But enough about me. Let's talk about you!";
    Utils::waitForEnter();
    std::cout << Utils::getPrintName(name) << "First, tell me, what’s your name?   [Please Enter Your Name]" <<
            std::endl;
    getline(std::cin, p.name);
    std::cout << Utils::getPrintName(name) << "Ah, " << p.name << "! What a fantastic name!";
    Utils::clearInputBuffer();
    Utils::waitForEnter();
    Utils::clearScreen();
}

void ProfessorOak::offerPokemonChoices(Player &p) const {
    std::cout << Utils::getPrintName(name) <<
            "You must be eager to start your adventure. But first, you’ll need a Pokemon of your own!";
    Utils::waitForEnter();
    std::cout << Utils::getPrintName(name) << "I have three Pokemon here with me. They’re all quite feisty!";
    Utils::waitForEnter();
    std::cout << Utils::getPrintName(name) << "Choose wisely..." << std::endl;
    std::cout << Utils::getPrintName(name) << "1) Charmander - The fire type. A real hothead!" << std::endl;
    std::cout << Utils::getPrintName(name) << "2) Bulbasaur  - The grass type. Calm and collected!" << std::endl;
    std::cout << Utils::getPrintName(name) << "3) Squirtle   - The water type. Cool as a cucumber!" << std::endl;
    std::cout << Utils::getPrintName(name) << "So, which one will it be? Enter the number of your choice: ";
    int choice;
    std::cin >> choice;
    p.choosePokemon(choice);

    switch ((PokemonChoice) choice) {
        case PokemonChoice::Charmander:
            std::cout << Utils::getPrintName(p.name) << "I want Charmander" << std::endl;
            std::cout << Utils::getPrintName(name) << "Charmander, an excellent choice!!" << std::endl;
            break;
        case PokemonChoice::Bulbasaur:
            std::cout << Utils::getPrintName(p.name) << "I want Bulbasaur" << std::endl;
            std::cout << Utils::getPrintName(name) << "Bulbasaur, humble and grounded!" << std::endl;
            break;
        case PokemonChoice::Squirtle:
            std::cout << Utils::getPrintName(p.name) << "I want Squirtle" << std::endl;
            std::cout << Utils::getPrintName(name) << "Squirtle, your personal water gun!!" << std::endl;
            break;
        default:
            std::cout << Utils::getPrintName(p.name) << "I am not able to choose, can you help me?" << std::endl;
            std::cout << Utils::getPrintName(name) <<
                    "Well, lets see, Ahhh.... here it is, take Pikachu, an electric Pokemon" << std::endl;
            break;
    }
    Utils::clearInputBuffer();
    Utils::waitForEnter();
    Utils::clearScreen();
}

void ProfessorOak::explainMainQuest(const Player &p) const {
    std::cin.ignore();
    Utils::clearScreen();
    std::cout << Utils::getPrintName(name) << "Oak-ay " << p.name <<
            ", I am about to explain you about your upcoming grand adventure.";
    Utils::waitForEnter();
    std::cout << Utils::getPrintName(name) <<
            "You see, becoming a Pokémon Master is no easy feat. It takes courage, wisdom, and a bit of luck.";
    Utils::waitForEnter();
    std::cout << Utils::getPrintName(name) <<
            "Your mission, should you choose to accept it (and trust me, you really don’t have a choice) is to collect all the Pokémon Badges and conquer the Pokémon League. ";
    Utils::waitForEnter();
    std::cout << Utils::getPrintName(p.name) <<
            "Wait... that sounds a lot like every other Pokémon game out there.";
    Utils::waitForEnter();
    std::cout << Utils::getPrintName(name) << "Shhh! Don't break the fourth wall " << p.name <<
            "! This is serious business.";
    Utils::waitForEnter();
    std::cout << Utils::getPrintName(name) <<
            "To achieve this, you’ll need to battle wild Pokémon, challenge gym leaders, and of course, keep your Pokémon healthy at the PokeCenter.";
    Utils::waitForEnter();
    std::cout << Utils::getPrintName(name) <<
            "Along the way, you'll capture new Pokémon to strengthen your team. Just remember—there’s a limit to how many Pokémon you can carry, so choose wisely!";
    Utils::waitForEnter();
    std::cout << Utils::getPrintName(p.name) << "Sounds like a walk in the park... right?";
    Utils::waitForEnter();
    std::cout << Utils::getPrintName(name) <<
            "Hah! That’s what they all say! But beware, young Trainer, the path to victory is fraught with challenges. And if you lose a battle... well, let’s just say you'll be starting from square one.";
    Utils::waitForEnter();
    std::cout << Utils::getPrintName(name) <<
            "So, what do you say? Are you ready to become the next Pokémon Champion?";
    Utils::waitForEnter();
    std::cout << Utils::getPrintName(p.name) << "Ready as I’ll ever be, Professor!";
    Utils::waitForEnter();
    std::cout << Utils::getPrintName(name) << "That’s the spirit! Now, your journey begins.";
    Utils::waitForEnter();
    std::cout << Utils::getPrintName(name) <<
            "But first... let's just pretend I didn't forget to set up the actual game loop... Ahem, onwards!";
    Utils::waitForEnter();
}
