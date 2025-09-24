//
// Created by Raghuvansh Agarwal on 19/09/25.
//

#ifndef POKEMON_PROFESSOROAK_H
#define POKEMON_PROFESSOROAK_H
#include <string>

class Player;

class ProfessorOak {
public:
    std::string name;

    ProfessorOak(std::string p_name);

    ProfessorOak();

    void greetPlayer(Player &p) const;

    void offerPokemonChoices(Player &p) const;

    void explainMainQuest(const Player &p) const;
};
#endif //POKEMON_PROFESSOROAK_H