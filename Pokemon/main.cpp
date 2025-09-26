 #include "include/Main/Game.h"
#include "include/Utility/Utility.h"
#include "include/Character/Player/Player.h"
#include "include/Character/ProfessorOak.h"

int main() {
    const auto* professor = new N_Characters::ProfessorOak("ProfessorOak");
    auto* player = new N_Player::Player();
    professor->greetPlayer(*player);
    professor->offerPokemonChoices(*player);
    professor->explainMainQuest(*player);
    auto* game = new N_Main::Game();
    game->gameLoop(*player);

    delete game;
    delete player;
    delete professor;
    return 0;
}
