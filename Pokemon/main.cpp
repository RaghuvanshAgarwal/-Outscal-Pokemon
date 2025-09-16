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
    if (choice == 1) {
        std::cout << "[" << player_name << "] I want Bulbasaur" << std::endl;
        std::cout << "[Professor Oak] Excellent choice by going with Bulbasaur" << std::endl;
    }
    else if (choice == 2) {
        std::cout << "[" << player_name << "] I want Charmander" << std::endl;
        std::cout << "[Professor Oak] Charmander, A fiery choice" << std::endl;
    }
    else if (choice == 3) {
        std::cout << "[" << player_name << "] I want Squirtle" << std::endl;
        std::cout << "[Professor Oak] Squirtle is a wonderful Pokemon to start" << std::endl;
    }
    else {
        std::cout << "Invalid choice, restart the Game" << std::endl;
    }
    return 0;
}
