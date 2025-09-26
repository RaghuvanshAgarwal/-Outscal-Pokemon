cmake_minimum_required(VERSION 4.0)
project(Pokemon)

set(CMAKE_CXX_STANDARD 20)

add_executable(Pokemon main.cpp
        include/Pokemon/PokemonType.h
        include/Pokemon/PokemonChoice.h
        include/Utility/Utility.h
        src/Utility/Utility.cpp
        include/Character/Player/Player.h
        src/Character/Player/Player.cpp
        src/Pokemon/Pokemon.cpp
        include/Pokemon/Pokemon.h
        src/Character/ProfessorOak.cpp
        include/Character/ProfessorOak.h
        src/Main/Game.cpp
        include/Main/Game.h
        include/Pokemon/Grass.h
        src/Battle/WildEncounterManager.cpp
        include/Battle/WildEncounterManager.h
        src/Battle/BattleManager.cpp
        include/Battle/BattleManager.h
        include/Battle/BattleState.h
        include/Pokemon/Pokemons/Pikachu.h
        src/Pokemon/Pokemons/Pikachu.cpp
        include/Pokemon/Pokemons/Pidgey.h
        src/Pokemon/Pokemons/Pidgey.cpp
        include/Pokemon/Pokemons/Caterpie.h
        src/Pokemon/Pokemons/Caterpie.cpp
        include/Pokemon/Pokemons/Zubat.h
        src/Pokemon/Pokemons/Zubat.cpp
        include/Pokemon/Pokemons/Charmander.h
        src/Pokemon/Pokemons/Charmander.cpp
        include/Pokemon/Pokemons/Squirtle.h
        src/Pokemon/Pokemons/Squirtle.cpp
        include/Pokemon/Pokemons/Bulbasaur.h
        src/Pokemon/Pokemons/Bulbasaur.cpp
        include/Pokemon/Move.h
)
