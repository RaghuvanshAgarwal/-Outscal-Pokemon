//
// Created by Raghuvansh Agarwal on 25/09/25.
//

#include "../../../include/Pokemon/Pokemons/Bulbasaur.h"
#include "../../../include/Pokemon/PokemonType.h"
#include <iostream>

namespace N_Pokemon::N_Pokemons {
    Bulbasaur::Bulbasaur() : Pokemon("Bulbasaur", PokemonType::Grass, 100,35) {
    }

    void Bulbasaur::vine_whip(Pokemon& target) {
        std::cout<< name << " uses vine whips on " << target.get_name() << "!" <<std::endl;
    }

}
