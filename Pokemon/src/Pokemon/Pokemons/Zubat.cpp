//
// Created by Raghuvansh Agarwal on 24/09/25.
//

#include "../../../include/Pokemon/Pokemons/Zubat.h"
#include "../../../include/Pokemon/PokemonType.h"
#include <iostream>

namespace N_Pokemon::N_Pokemons {
    Zubat::Zubat(): Pokemon("Zubat", PokemonType::Posion,100,20) {
    }

    void Zubat::super_sonic(Pokemon &target) {
        std::cout << name << " supersonics on " << target.get_name() << "!" << std::endl;
        target.take_damage(attack_power);
    }

    void Zubat::attack(Pokemon &target) {
        super_sonic(target);
    }


}

