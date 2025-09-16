#include <iostream>

int main() {

    std::cout << "Hello brave adventurer, it's me Professor Oak, what is your name? ";
    std::string player_name;
    std::cin >> player_name;
    std::cout << player_name << ", I think you are ready for your first Pokemon, so which pokemon will it be?" << std::endl;
    std::cout << "1) Bulbasaur\n2) Charmander\n3) Squirtle" << std::endl;
    std::cout << "Enter the number" << std::endl;
    int choice;
    std::cin >> choice;
    if (choice == 1) {
        std::cout << "Excellent choice by going with Bulbasaur" << std::endl;
    }
    else if (choice == 2) {
        std::cout << "Charmander, A fiery choice" << std::endl;
    }
    else if (choice == 3) {
        std::cout << "Squirtle is a wonderful Pokemon to start" << std::endl;
    }
    else {
        std::cout << "Invalid choice, restart the Game" << std::endl;
    }
    return 0;
}
