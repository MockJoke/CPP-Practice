#include <iostream>

class Game
{
public:
    virtual void game_type() = 0;
};

int main()
{
    Game *game;
    // Game game1;

    return 0;
}

// Cannot create object of a pure abstract class/interface