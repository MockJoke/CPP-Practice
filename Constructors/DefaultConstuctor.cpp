#include <iostream>

class Player
{
private:
    int health;
    int score;
    std::string name;

public:
    Player()
    {
        health = 100;
        score = 0;
        name = "DefaultPlayer";

        std::cout << "Hi, I am a default constructor of Class Player, basically developers use me to initialize important variables/parameters of the player." << std::endl;
    }

    int GetHealth()
    {
        return health;
    }

    int GetScore()
    {
        return score;
    }

    std::string GetName()
    {
        return name;
    }
};

int main()
{
    Player player;

    std::cout << "Player created with stats: " << std::endl;
    std::cout << "Health: " << player.GetHealth() << std::endl;
    std::cout << "Score: " << player.GetScore() << std::endl;
    std::cout << "Name: " << player.GetName() << std::endl;
}