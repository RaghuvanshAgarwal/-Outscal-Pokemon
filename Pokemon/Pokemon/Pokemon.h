//
// Created by Raghuvansh Agarwal on 19/09/25.
//

#ifndef POKEMON_POKEMON_H
#define POKEMON_POKEMON_H

#include <string>
enum class PokemonType;

class Pokemon {
public:
    std::string name;
    PokemonType type;
    int health;

    Pokemon();

    Pokemon(std::string p_name, PokemonType p_type, int p_health);

    Pokemon(std::string p_name, PokemonType p_type);

    Pokemon(const Pokemon &pokemon);

    void attack() const;
};
#endif //POKEMON_POKEMON_H