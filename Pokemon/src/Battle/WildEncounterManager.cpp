//
// Created by Raghuvansh Agarwal on 22/09/25.
//

#include "../../include/Battle/WildEncounterManager.h"

#include <__locale>
#include "../../include/Pokemon/Grass.h"

namespace N_Battle {
    WildEncounterManager::WildEncounterManager() {
        srand(time(nullptr));
    }

    N_Pokemon::Pokemon* WildEncounterManager::getRandomPokemonFromGrass(N_Pokemon::Grass *grass) {
        const int randomIndex = rand() % grass->wild_pokemons.size();
        return grass->wild_pokemons[randomIndex];
    }
}


