#include <iostream>

class Game
{
public:
    virtual void game_type() = 0;
};

class OutscalGame : public Game
{
public:
};

int main()
{
    Game *game;
    // OutscalGame outscalgame;
    return 0;
}

// Game is an interface/pure abstract class, it has a pure virtual function,
// OutscalGame is inheriting from Game but it doesn't have an overridden implementation of game_type(),
// so OutscalGame is also an interface/pure abstract class at the moment.