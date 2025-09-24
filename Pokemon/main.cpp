#include <iostream>
#include "Game/Game.h"
#include "Utility/Utility.h"
#include "Player/Player.h"
#include "Pokemon/Pokemon.h"
#include "ProfessorOak/ProfessorOak.h"

int main() {
    Pokemon charmander = Pokemon::Builder().setName("Charmander").set_health(20).set_max_health(100).set_attack_power(10).build();
    std::cout << charmander.health << std::endl;
    ProfessorOak professor("Professor Oak");
    Player player("Ash", charmander);
    professor.greetPlayer(player);
    professor.offerPokemonChoices(player);
    professor.explainMainQuest(player);
    Game game;
    game.gameLoop(player);
    return 0;
}
