#include "include/Main/Game.h"
#include "include/Utility/Utility.h"
#include "include/Character/Player/Player.h"
#include "include/Pokemon/Pokemon.h"
#include "include/Character/ProfessorOak.h"

int main() {
    N_Pokemon::Pokemon charmander = N_Pokemon::Pokemon::Builder().setName("Charmander").set_health(20).set_max_health(100).set_attack_power(10).build();
    N_Characters::ProfessorOak professor("Professor Oak");
    N_Player::Player player("Ash", charmander);
    professor.greetPlayer(player);
    professor.offerPokemonChoices(player);
    professor.explainMainQuest(player);
    N_Main::Game game;
    game.gameLoop(player);
    return 0;
}
