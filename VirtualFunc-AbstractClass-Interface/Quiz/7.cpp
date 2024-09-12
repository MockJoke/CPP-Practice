#include <iostream>

class Game
{
public:
    Game()
    {
        std::cout << "1 ";
    }

    virtual ~Game()
    {
        std::cout << "2 ";
    }
};

class OutscalGame : public Game
{
public:
    OutscalGame()
    {
        std::cout << "3 ";
    }

    ~OutscalGame()
    {
        std::cout << "4 ";
    }
};

int main()
{
    Game *game = new OutscalGame;
    delete game;
    
    return 0;
}