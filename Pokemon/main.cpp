#include <iostream>

enum class  PokemonChoice {
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


class Pokemon {
public:
    std::string name;
    PokemonType type;
    int health;

    Pokemon() : type(PokemonType::Normal), health(0) {}
    Pokemon(std::string p_name, PokemonType p_type, int p_health) : name(p_name), type(p_type), health(p_health) {}

    void attack() const {
        std::cout << "attacks with a powerful move!" << std::endl;
    }
};

class Player {
public:
    std::string name;
    Pokemon chosen_pokemon;

    Player(std::string p_name, Pokemon p_chosen_pokemon): name(p_name), chosen_pokemon(p_chosen_pokemon) {}
    Player(): name(""), chosen_pokemon(Pokemon()) {}

    void choosePokemon(int choice) {
        switch ((PokemonChoice)choice) {
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
    void greetPlayer(Player& p) {
        std::cout << "["<< name << "]" << " Ah, " << p.name << "!" << std::endl;
        std::cout << "["<< name << "]" << " Welcome to the world of Pokémon!" << std::endl;
        std::cout << "["<< name << "]" << " Today is a momentous day—you’ll be choosing your very first Pokémon." << std::endl;
        std::cout << "["<< name << "]" << " Every great Trainer remembers this moment for the rest of their lives." << std::endl;
        std::cout << "["<< name << "]" << " So, choose wisely, young one!" << std::endl;
    }

    void offerPokemonChoices(Player& p) {
        std::cout << "[Professor Oak] What should the world call you? ";
        getline(std::cin, p.name);
        std::cout << "[" << p.name << "] My name is " << p.name << std::endl;
        std::cout << "["<< name << "]" << " 1) Bulbasaur - The grass type. Calm and collected! " << std::endl;
        std::cout << "["<< name << "]" << " 2) Charmander - The fire type. A real hothead! " << std::endl;
        std::cout << "["<< name << "]" << " 3) Squirtle - The water type. Cool as a cucumber! " << std::endl;
        std::cout << "Enter the number: ";
        int choice;
        std::cin >> choice;
        p.choosePokemon(choice);

        switch ((PokemonChoice)choice) {
            case PokemonChoice::Charmander:
                std::cout << "[" << p.name << "] I want Charmander" << std::endl;
                std::cout << "[" << name << "] Charmander, an excellent choice!!" << std::endl;
                break;
            case PokemonChoice::Bulbasaur:
                std::cout << "[" << p.name << "] I want Bulbasaur" << std::endl;
                std::cout << "[" << name << "] Bulbasaur, humble and grounded!" << std::endl;
                break;
            case PokemonChoice::Squirtle:
                std::cout << "[" << p.name << "] I want Squirtle" << std::endl;
                std::cout << "[" << name << "] Squirtle, your personal water gun!!" << std::endl;
                break;
            default:
                std::cout << "[" << p.name << "] I am not able to choose, can you help me?" << std::endl;
                std::cout << "[" << name << "] Well, lets see, Ahhh.... here it is, take Pikachu, an electric Pokemon" << std::endl;
                break;
        }
    }
};

int main() {
    Player player;
    ProfessorOak professorOak;
    Pokemon placeholder_pokemon;
    placeholder_pokemon.name = "Pikachu";
    placeholder_pokemon.type = PokemonType::Electric;
    placeholder_pokemon.health = 40;
    player.name = "Trainer";
    professorOak.name = "Professor Oak";
    professorOak.greetPlayer(player);
    professorOak.offerPokemonChoices(player);
    std::cout << "[" << professorOak.name << "] " << player.chosen_pokemon.name << " and you, " << player.name << ", are going to be the best of friends!\n";
    std::cout << "[" << professorOak.name << "] " << "Your journey begins now! Get ready to explore the vast world of Pokemon!\n";
    return 0;
}
