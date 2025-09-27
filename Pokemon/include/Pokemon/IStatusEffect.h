//
// Created by Raghuvansh Agarwal on 27/09/25.
//

#ifndef POKEMON_ISTATUSEFFECT_H
#define POKEMON_ISTATUSEFFECT_H
#include <string>

namespace N_Pokemon {
    class Pokemon;
}

namespace N_Pokemon {
    class IStatusEffect {
    public:
        virtual void apply_effect(Pokemon* target) = 0;
        virtual std::string get_status_name() const = 0;
        virtual bool turn_end_effect(Pokemon* target) = 0;
        virtual void clear_effect(Pokemon* target) = 0;
        virtual ~IStatusEffect() = default;
    };
}

#endif //POKEMON_ISTATUSEFFECT_H