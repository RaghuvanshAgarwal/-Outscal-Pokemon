//
// Created by Raghuvansh Agarwal on 27/09/25.
//

#ifndef POKEMON_PARALYZEDEFFECT_H
#define POKEMON_PARALYZEDEFFECT_H
#include "../IStatusEffect.h"

namespace N_Pokemon::N_Status_Effects {
    class ParalyzedEffect: public IStatusEffect{
        int turns_left;
        std::string name = "Paralyzed";
    public:
        void apply_effect(Pokemon* target) override;
        std::string get_status_name() const override;
        bool turn_end_effect(Pokemon* target) override;
        void clear_effect(Pokemon* target) override;
    };
}

#endif //POKEMON_PARALYZEDEFFECT_H