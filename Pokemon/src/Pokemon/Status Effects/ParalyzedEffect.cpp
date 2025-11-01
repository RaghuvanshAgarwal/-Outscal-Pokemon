//
// Created by Raghuvansh Agarwal on 27/09/25.
//

#include "../../../include/Pokemon/Status Effects/ParalyzedEffect.h"

#include <iostream>

#include "../../../include/Pokemon/Pokemon.h"

namespace N_Pokemon::N_Status_Effects {
    void ParalyzedEffect::apply_effect(Pokemon *target) {
        std::cout << target->get_name() << " has been paralyzed!!, it may not be able to move" << std::endl;
        srand(time(0));
        turns_left = 1 + rand() % 3;
    }

    void ParalyzedEffect::clear_effect(Pokemon *target) {
        std::cout << target->get_name() << " is no longer paralyzed" << std::endl;
        target->clear_effect();
    }

    std::string ParalyzedEffect::get_status_name() const {
        return name;
    }

    bool ParalyzedEffect::turn_end_effect(Pokemon *target) {
        if (turns_left == 0) {
            clear_effect(target);
            return true;
        }
        turns_left -= 1;
        srand(time(nullptr));
        if (const int random = rand() % 4; random == 0) {
            std::cout << target->get_name() << " is paralyzed and cannot move" << std::endl;
            return false;
        }
        std::cout << target->get_name() << " can move normally" << std::endl;
        return true;
    }



}
