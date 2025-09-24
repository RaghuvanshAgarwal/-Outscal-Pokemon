//
// Created by Raghuvansh Agarwal on 19/09/25.
//

#ifndef POKEMON_UTILITY_H
#define POKEMON_UTILITY_H
#include <string>

class Utils {
public:
    static std::string getPrintName(const std::string &name);
    static void info(const std::string &info);
    static void waitForEnter();
    static void clearScreen();

    static void clearInputBuffer();
};
#endif //POKEMON_UTILITY_H