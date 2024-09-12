#include <iostream>

class Game
{
public:
    virtual void game_type()
    {
        std::cout << "1 ";
    }
};

class OutscalGame : public Game
{
public:
    void game_type()
    {
        std::cout << "2 ";
    }
};

int main()
{
    Game *game;
    Game game1;
    OutscalGame *outscalgame;
    OutscalGame outscalgame1;

    game = &game1;
    game->game_type();
    game = &outscalgame1;
    game->game_type();

    return 0;
}