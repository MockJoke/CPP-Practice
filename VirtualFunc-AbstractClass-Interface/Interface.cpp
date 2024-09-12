#include <iostream>

class PlayerInterface
{
public:
    virtual void DoubleJump() = 0;
    virtual void Fire() = 0;
};

class Player : public PlayerInterface
{
public:
    void DoubleJump()
    {
        std::cout << "DoubleJump() is overriden" << std::endl;
    }

    void Fire()
    {
        std::cout << "Fire() is overriden" << std::endl;
    }
};

int main()
{
    Player p;

    p.DoubleJump();
    p.Fire();
}