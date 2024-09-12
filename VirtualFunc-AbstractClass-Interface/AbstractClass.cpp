#include <iostream>

class Enemy
{
public:
    virtual void attack() = 0;
};

class BossEnemy : public Enemy
{
    void attack()
    {
        std::cout << "BossEnemy is attacking" << std::endl;
    }
};

int main()
{
    Enemy *e;
    BossEnemy be;

    e = &be;

    e->attack();
}