//
// Created by Raghuvansh Agarwal on 22/09/25.
//

#include "../../include/Battle/WildEncounterManager.h"

#include <cstdlib>
#include <ctime>
#include <__locale>
#include "../../include/Pokemon/Pokemon.h"
#include "../../include/Pokemon/Grass.h"

WildEncounterManager::WildEncounterManager() {
    srand(time(nullptr));
}

Pokemon WildEncounterManager::getRandomPokemonFromGrass(const Grass &grass) {
    int randomIndex = rand() % grass.wild_pokemons.size();
    return grass.wild_pokemons[randomIndex];
}


