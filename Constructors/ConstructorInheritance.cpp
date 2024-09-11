#include <iostream>

class Player
{
public:
    Player()
    {
        std::cout << "Creating an object of class Player." << std::endl;
    }

    ~Player()
    {
        std::cout << "Deleting object of class Player." << std::endl;
    }
};

class StrongPlayer : public Player
{
public:
    StrongPlayer()
    {
        std::cout << "Creating object of class StrongPlayer." << std::endl;
    }

    ~StrongPlayer()
    {
        std::cout << "Deleting object of class StrongPlayer." << std::endl;
    }
};

int main()
{
    StrongPlayer strongPlayer;
}