//
// Created by Raghuvansh Agarwal on 19/09/25.
//

#ifndef POKEMON_PROFESSOROAK_H
#define POKEMON_PROFESSOROAK_H
#include <string>

#include "Player/Player.h"



namespace N_Characters {
    class ProfessorOak {
    public:
        std::string name;

        ProfessorOak(std::string p_name);

        ProfessorOak();

        void greetPlayer(N_Player::Player *p) const;

        void offerPokemonChoices(N_Player::Player *p) const;

        void explainMainQuest(const N_Player::Player *p) const;
    };
}
#endif //POKEMON_PROFESSOROAK_H
