#include <iostream>

enum class  PokemonChoice {
    InvalidChoice,
    Charmander,
    Bulbasaur,
    Squirtle,
};

enum class PokemonType {
    Fire,
    Electric,
    Water,
    Earth,
    Normal,
};

int main() {
    std::string player_name;
    PokemonChoice chosen_pokemon = PokemonChoice::InvalidChoice;

    std::cout << "[Professor Oak] Ah, Trainer!" << std::endl;
    std::cout << "[Professor Oak] Welcome to the world of Pokémon!" << std::endl;
    std::cout << "[Professor Oak] What should the world call you? ";
    std::cin >> player_name;
    std::cout << "[" << player_name << "] My name is " << player_name << std::endl;

    std::cout << "[Professor Oak] Today is a momentous day—you’ll be choosing your very first Pokémon." << std::endl;
    std::cout << "[Professor Oak] Every great Trainer remembers this moment for the rest of their lives." << std::endl;
    std::cout << "[Professor Oak] So, choose wisely, young one!" << std::endl;
    std::cout << "1) Bulbasaur - The grass type. Calm and collected! " << std::endl;
    std::cout << "2) Charmander - The fire type. A real hothead! " << std::endl;
    std::cout << "3) Squirtle - The water type. Cool as a cucumber! " << std::endl;

    std::cout << "Enter the number" << std::endl;
    int choice;
    std::cin >> choice;

    switch (choice) {
        case 1:
            chosen_pokemon = PokemonChoice::Bulbasaur;
            break;
        case 2:
            chosen_pokemon = PokemonChoice::Charmander;
            break;
        case 3:
            chosen_pokemon = PokemonChoice::Squirtle;
            break;
        default:
            chosen_pokemon = PokemonChoice::InvalidChoice;
            break;
    }


    switch (choice) {
        case 1:
            std::cout << "[" << player_name << "] I want Bulbasaur" << std::endl;
            std::cout << "[Professor Oak] Excellent choice by going with Bulbasaur" << std::endl;
            break;
        case 2:
            std::cout << "[" << player_name << "] I want Charmander" << std::endl;
            std::cout << "[Professor Oak] Charmander, A fiery choice" << std::endl;
            break;
        case 3:
            std::cout << "[" << player_name << "] I want Squirtle" << std::endl;
            std::cout << "[Professor Oak] Squirtle is a wonderful Pokemon to start" << std::endl;
        default:
            std::cout << "[" << player_name << "] I am not able to choose, Professor! Can you choose it for me?" << std::endl;
            std::cout << "[Professor Oak] Hmm, that doesn't seem right. Let me choose for you…\nJust kidding! Let's go with Charmander, the fiery dragon in the making!\n" << std::endl;
            chosen_pokemon = PokemonChoice::Charmander;
            break;
    }
    std::string pokemon_name = chosen_pokemon == PokemonChoice::Bulbasaur ? "Bulbasaur" : ( chosen_pokemon == PokemonChoice::Charmander ? "Charmander" : "Squirtle" );
    std::cout << "[Professor Oak] " << pokemon_name << " and you, " << player_name << " are going to be the best of friends" << std::endl;
    std::cout << "[Professor Oak] Your journey begins now! Get ready to explore the vast world of Pokemon!" << std::endl;
    return 0;
}
