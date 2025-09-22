//
// Created by Raghuvansh Agarwal on 22/09/25.
//

#include "WildEncounterManager.h"

#include <cstdlib>
#include <ctime>
#include <__locale>
#include "../Pokemon/Pokemon.h"
#include "../Grass.h"

WildEncounterManager::WildEncounterManager() {
    srand(time(nullptr));
}

Pokemon WildEncounterManager::getRandomPokemonFromGrass(const Grass &grass) {
    int randomIndex = rand() % grass.wild_pokemons.size();
    return grass.wild_pokemons[randomIndex];
}


