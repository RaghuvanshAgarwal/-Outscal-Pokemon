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
        include/Battle/WildEncounterManager.cpp
        src/Battle/WildEncounterManager.h
        src/Battle/BattleManager.cpp
        include/Battle/BattleManager.h
        include/Battle/BattleState.h
)
