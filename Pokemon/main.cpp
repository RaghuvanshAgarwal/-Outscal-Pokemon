 #include "include/Main/Game.h"
#include "include/Utility/Utility.h"
#include "include/Character/Player/Player.h"
#include "include/Pokemon/Pokemon.h"
#include "include/Character/ProfessorOak.h"

int main() {
    N_Pokemon::Pokemon charmander("Charmander", N_Pokemon::PokemonType::Fire, 100,10);
    N_Characters::ProfessorOak professor("Professor Oak");
    N_Player::Player player("Ash", charmander);
    professor.greetPlayer(player);
    professor.offerPokemonChoices(player);
    professor.explainMainQuest(player);
    N_Main::Game game;
    game.gameLoop(player);
    return 0;
}
