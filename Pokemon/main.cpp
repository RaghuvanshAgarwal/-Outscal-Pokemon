#include <iostream>

enum class PokemonChoice {
    InvalidChoice,
    Charmander,
    Bulbasaur,
    Squirtle,
};

enum class PokemonType {
    Fire,
    Electric,
    Water,
    Earth,
    Normal,
};


class Utils {
public:
    static std::string getPrintName(const std::string &name) {
        return "[" + name + "] ";
    }

    static void info(const std::string &info) {
        std::cout << "[INFO] " << info << std::endl;
    }

    static void waitForEnter() {
        std::cin.get();
    }

    static void clearScreen() {
#ifdef _WIN32
        system("cls");
#else
        (void) system("clear");
#endif
    }
};

class Pokemon {
public:
    std::string name;
    PokemonType type;
    int health;

    Pokemon() : name("Pikachu"), type(PokemonType::Electric), health(10) {
    }

    Pokemon(std::string p_name, PokemonType p_type, int p_health) : name(p_name), type(p_type), health(p_health) {
    }

    Pokemon(const Pokemon &pokemon) : name(pokemon.name), type(pokemon.type), health(pokemon.health) {
    }

    ~Pokemon() {
        //Utils::info("Pokemon " + name + " has been released from the Memory");
    }

    void attack() const {
        std::cout << "attacks with a powerful move!" << std::endl;
    }
};

class Player {
public:
    std::string name;
    Pokemon chosen_pokemon;

    Player(std::string p_name, Pokemon p_chosen_pokemon) : name(p_name), chosen_pokemon(p_chosen_pokemon) {
    }

    Player() : name("Trainer"), chosen_pokemon(Pokemon()) {
        //Utils::info("Player " + name + " has been created");
    }

    Player(const Player &player) : name(player.name), chosen_pokemon(player.chosen_pokemon) {
    }

    void choosePokemon(int choice) {
        switch ((PokemonChoice) choice) {
            case PokemonChoice::Charmander:
                chosen_pokemon = Pokemon("Charmander", PokemonType::Fire, 100);
                break;
            case PokemonChoice::Bulbasaur:
                chosen_pokemon = Pokemon("Bulbasaur", PokemonType::Earth, 100);
                break;
            case PokemonChoice::Squirtle:
                chosen_pokemon = Pokemon("Squirtle", PokemonType::Water, 100);
                break;
            default:
                chosen_pokemon = Pokemon("Pikachu", PokemonType::Electric, 100);
                break;
        }
    }
};

class ProfessorOak {
public:
    std::string name;

    ProfessorOak(std::string p_name) : name(p_name) {
    }

    ProfessorOak() : name("") {
    }

    void greetPlayer(Player &p) {
        std::cout << Utils::getPrintName(name) << "Hello there! Welcome to the world of Pokemon!";
        Utils::waitForEnter();
        std::cout << Utils::getPrintName(name) << "My name is Oak. People call me the Pokemon Professor!";
        Utils::waitForEnter();
        std::cout << Utils::getPrintName(name) << "But enough about me. Let's talk about you!";
        Utils::waitForEnter();
        std::cout << Utils::getPrintName(name) << "First, tell me, what’s your name?   [Please Enter Your Name]" <<
                std::endl;
        getline(std::cin, p.name);
        std::cout << Utils::getPrintName(name) << "Ah, " << p.name << "! What a fantastic name!";
        Utils::waitForEnter();
    }

    void offerPokemonChoices(Player &p) {
        std::cout << Utils::getPrintName(name) <<
                "You must be eager to start your adventure. But first, you’ll need a Pokemon of your own!";
        Utils::waitForEnter();
        std::cout << Utils::getPrintName(name) << "I have three Pokemon here with me. They’re all quite feisty!";
        Utils::waitForEnter();
        std::cout << Utils::getPrintName(name) << "Choose wisely..." << std::endl;
        std::cout << Utils::getPrintName(name) << "1) Charmander - The fire type. A real hothead!" << std::endl;
        std::cout << Utils::getPrintName(name) << "2) Bulbasaur  - The grass type. Calm and collected!" << std::endl;
        std::cout << Utils::getPrintName(name) << "3) Squirtle   - The water type. Cool as a cucumber!" << std::endl;
        std::cout << Utils::getPrintName(name) << "So, which one will it be? Enter the number of your choice: ";
        int choice;
        std::cin >> choice;
        p.choosePokemon(choice);

        switch ((PokemonChoice) choice) {
            case PokemonChoice::Charmander:
                std::cout << Utils::getPrintName(p.name) << "I want Charmander" << std::endl;
                std::cout << Utils::getPrintName(name) << "Charmander, an excellent choice!!" << std::endl;
                break;
            case PokemonChoice::Bulbasaur:
                std::cout << Utils::getPrintName(p.name) << "I want Bulbasaur" << std::endl;
                std::cout << Utils::getPrintName(name) << "Bulbasaur, humble and grounded!" << std::endl;
                break;
            case PokemonChoice::Squirtle:
                std::cout << Utils::getPrintName(p.name) << "I want Squirtle" << std::endl;
                std::cout << Utils::getPrintName(name) << "Squirtle, your personal water gun!!" << std::endl;
                break;
            default:
                std::cout << Utils::getPrintName(p.name) << "I am not able to choose, can you help me?" << std::endl;
                std::cout << Utils::getPrintName(name) <<
                        "Well, lets see, Ahhh.... here it is, take Pikachu, an electric Pokemon" << std::endl;
                break;
        }
    }

    void explainMainQuest(const Player &p) {
        std::cin.ignore();
        std::cout << Utils::getPrintName(name) << "Oak-ay " << p.name <<
                ", I am about to explain you about your upcoming grand adventure.";
        Utils::waitForEnter();
        std::cout << Utils::getPrintName(name) <<
                "You see, becoming a Pokémon Master is no easy feat. It takes courage, wisdom, and a bit of luck.";
        Utils::waitForEnter();
        std::cout << Utils::getPrintName(name) <<
                "Your mission, should you choose to accept it (and trust me, you really don’t have a choice) is to collect all the Pokémon Badges and conquer the Pokémon League. ";
        Utils::waitForEnter();
        std::cout << Utils::getPrintName(p.name) <<
                "Wait... that sounds a lot like every other Pokémon game out there.";
        Utils::waitForEnter();
        std::cout << Utils::getPrintName(name) << "Shhh! Don't break the fourth wall " << p.name <<
                "! This is serious business.";
        Utils::waitForEnter();
        std::cout << Utils::getPrintName(name) <<
                "To achieve this, you’ll need to battle wild Pokémon, challenge gym leaders, and of course, keep your Pokémon healthy at the PokeCenter.";
        Utils::waitForEnter();
        std::cout << Utils::getPrintName(name) <<
                "Along the way, you'll capture new Pokémon to strengthen your team. Just remember—there’s a limit to how many Pokémon you can carry, so choose wisely!";
        Utils::waitForEnter();
        std::cout << Utils::getPrintName(p.name) << "Sounds like a walk in the park... right?";
        Utils::waitForEnter();
        std::cout << Utils::getPrintName(name) <<
                "Hah! That’s what they all say! But beware, young Trainer, the path to victory is fraught with challenges. And if you lose a battle... well, let’s just say you'll be starting from square one.";
        Utils::waitForEnter();
        std::cout << Utils::getPrintName(name) <<
                "So, what do you say? Are you ready to become the next Pokémon Champion?";
        Utils::waitForEnter();
        std::cout << Utils::getPrintName(p.name) << "Ready as I’ll ever be, Professor!";
        Utils::waitForEnter();
        std::cout << Utils::getPrintName(name) << "That’s the spirit! Now, your journey begins.";
        Utils::waitForEnter();
        std::cout << Utils::getPrintName(name) <<
                "But first... let's just pretend I didn't forget to set up the actual game loop... Ahem, onwards!";
        Utils::waitForEnter();
    }
};

void gameLoop(Player &player) {
    int choice;
    bool keepPlaying = true;

    while (keepPlaying) {
        // Clear console before showing options
        Utils::clearScreen();

        // Display options to the player
        std::cout << "\nWhat would you like to do next, " << player.name << "?\n";
        std::cout << "1. Battle Wild Pokémon\n";
        std::cout << "2. Visit PokeCenter\n";
        std::cout << "3. Challenge Gyms\n";
        std::cout << "4. Enter Pokémon League\n";
        std::cout << "5. Quit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        // Process the player's choice and display the corresponding message
        switch (choice) {
            case 1:
                std::cout << "You look around... but all the wild Pokémon are on vacation. Maybe try again later?" <<
                        std::endl;
                break;
            case 2:
                std::cout <<
                        "You head to the PokeCenter, but Nurse Joy is out on a coffee break. Guess your Pokémon will have to tough it out for now!"
                        << std::endl;
                break;
            case 3:
                std::cout <<
                        "You march up to the Gym, but it's closed for renovations. Seems like even Gym Leaders need a break!"
                        << std::endl;
                break;
            case 4:
                std::cout <<
                        "You boldly step towards the Pokémon League... but the gatekeeper laughs and says, 'Maybe next time, champ!'"
                        << std::endl;
                break;
            case 5:
                std::cout <<
                        "You try to quit, but Professor Oak's voice echoes: 'There's no quitting in Pokémon training!'"
                        << std::endl;
                std::cout << "Are you sure you want to quit? (y/n): ";
                char quitChoice;
                std::cin >> quitChoice;
                if (quitChoice == 'y' || quitChoice == 'Y') {
                    keepPlaying = false;
                }
                break;
            default:
                std::cout << "That's not a valid choice. Try again!\n";
                break;
        }

        // Wait for Enter key before the screen is cleared and the menu is shown
        // again
        Utils::waitForEnter();
    }

    std::cout << "Goodbye, " << player.name << "! Thanks for playing!\n";
}

int main() {
    Pokemon charmander("Charmander", PokemonType::Fire, 100); // Using parameterized constructor
    ProfessorOak professor("Professor Oak");
    Player player("Ash", charmander);
    professor.greetPlayer(player);
    professor.offerPokemonChoices(player);
    professor.explainMainQuest(player);
    gameLoop(player);
    return 0;
#include "header.h"
