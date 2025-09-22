cmake_minimum_required(VERSION 4.0)
project(Pokemon)

set(CMAKE_CXX_STANDARD 20)

add_executable(Pokemon main.cpp
        Enums/PokemonType.h
        Enums/PokemonChoice.h
        Utility/Utility.h
        Utility/Utility.cpp
        Player/Player.h
        Player/Player.cpp
        Pokemon/Pokemon.cpp
        Pokemon/Pokemon.h
        ProfessorOak/ProfessorOak.cpp
        ProfessorOak/ProfessorOak.h
        Game/Game.cpp
        Game/Game.h
)
