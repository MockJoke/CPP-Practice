#include <iostream>

class Player
{
private:
    int health;
    int score;
    std::string name;

public:
    Player(int h, int s, std::string n)
    {
        health = h;
        score = s;
        name = n;
        std::cout << "Hi, I am a custom constructor of Class Player, some call me parameterized constructor as well. Basically, developers use me to set the specific values to the variables." << std::endl;
    }

    int GetHealth()
    {
        return health;
    }
};

int main()
{
    int hp;

    std::cout << "Set player health: ";
    std::cin >> hp;

    Player player(hp, 0, "Player");

    std::cout << "Player health: " << player.GetHealth();
}