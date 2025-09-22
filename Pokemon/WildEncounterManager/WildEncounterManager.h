//
// Created by Raghuvansh Agarwal on 22/09/25.
//

#ifndef POKEMON_WILDENCOUNTERMANAGER_H
#define POKEMON_WILDENCOUNTERMANAGER_H


class Pokemon;
struct Grass;

class WildEncounterManager {
public:
    WildEncounterManager();
    Pokemon getRandomPokemonFromGrass(const Grass& grass);
};


#endif //POKEMON_WILDENCOUNTERMANAGER_H