#include <iostream>

class Player
{
public:
    Player()
    {
        std::cout << "I am a player DEFAULT. I just got spawned in the game world because my developer created the player's object.\nAgggh! boring life begins, fight, die, respawn. Huh I am gonna kill that bastard if I get out of this game" << std::endl;
    }

    ~Player()
    {
        std::cout << "See?? that C++ destroyed my object and now I died." << std::endl;
    }
};

int main()
{
    Player player;
}