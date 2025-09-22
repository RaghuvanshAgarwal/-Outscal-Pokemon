#include <iostream>
#include "Enums/PokemonType.h"
#include "Game/Game.h"
#include "Utility/Utility.h"
#include "Player/Player.h"
#include "Pokemon/Pokemon.h"
#include "ProfessorOak/ProfessorOak.h"

int main() {
    Pokemon charmander("Charmander", PokemonType::Fire, 100); // Using parameterized constructor
    ProfessorOak professor("Professor Oak");
    Player player("Ash", charmander);
    professor.greetPlayer(player);
    professor.offerPokemonChoices(player);
    professor.explainMainQuest(player);
    Game game;
    game.gameLoop(player);
    return 0;
}
