#include <iostream>

int main() {

    std::cout << "[Professor Oak] Ah, Trainer!" << std::endl;
    std::cout << "[Professor Oak] Welcome to the world of Pokémon!" << std::endl;
    std::cout << "[Professor Oak] What should the world call you? ";
    std::string player_name;
    std::cin >> player_name;
    std::cout << "[" << player_name << "] My name is " << player_name << std::endl;

    std::cout << "[Professor Oak] Today is a momentous day—you’ll be choosing your very first Pokémon." << std::endl;
    std::cout << "[Professor Oak] Every great Trainer remembers this moment for the rest of their lives." << std::endl;
    std::cout << "[Professor Oak] So, choose wisely, young one!" << std::endl;
    std::cout << "1) Bulbasaur\n2) Charmander\n3) Squirtle" << std::endl;
    std::cout << "Enter the number" << std::endl;
    int choice;
    std::cin >> choice;
    std::string chosen_pokemon;
    switch (choice) {
        case 1:
            std::cout << "[" << player_name << "] I want Bulbasaur" << std::endl;
            std::cout << "[Professor Oak] Excellent choice by going with Bulbasaur" << std::endl;
            chosen_pokemon = "Bulbasaur";
            break;
        case 2:
            std::cout << "[" << player_name << "] I want Charmander" << std::endl;
            std::cout << "[Professor Oak] Charmander, A fiery choice" << std::endl;
            chosen_pokemon = "Charmander";
            break;
        case 3:
            std::cout << "[" << player_name << "] I want Squirtle" << std::endl;
            std::cout << "[Professor Oak] Squirtle is a wonderful Pokemon to start" << std::endl;
            chosen_pokemon = "Squirtle";
        default:
            std::cout << "[" << player_name << "] I am not able to choose, Professor! Can you choose it for me?" << std::endl;
            std::cout << "[Professor Oak] Hmm, that doesn't seem right. Let me choose for you… Just kidding! Let's go with Pikachu, the surprise guest!" << std::endl;
            chosen_pokemon = "Pikachu";
            break;
    }
    return 0;
}
