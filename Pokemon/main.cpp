#include <iostream>
#include "include/Main/Game.h"
#include "include/Utility/Utility.h"
#include "include/Character/Player/Player.h"
#include "include/Pokemon/Pokemon.h"
#include "include/Character/ProfessorOak.h"

int main() {
    Pokemon charmander = Pokemon::Builder().setName("Charmander").set_health(20).set_max_health(100).set_attack_power(10).build();
    ProfessorOak professor("Professor Oak");
    Player player("Ash", charmander);
    professor.greetPlayer(player);
    professor.offerPokemonChoices(player);
    professor.explainMainQuest(player);
    Game game;
    game.gameLoop(player);
    return 0;
}
