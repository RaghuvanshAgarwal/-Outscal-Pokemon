//
// Created by Raghuvansh Agarwal on 22/09/25.
//

#ifndef POKEMON_WILDENCOUNTERMANAGER_H
#define POKEMON_WILDENCOUNTERMANAGER_H



namespace N_Pokemon {
    struct Grass;
    class Pokemon;
}

namespace N_Battle {
    class WildEncounterManager {
    public:
        WildEncounterManager();
        N_Pokemon::Pokemon getRandomPokemonFromGrass(const N_Pokemon::Grass& grass);
    };
}


#endif //POKEMON_WILDENCOUNTERMANAGER_H