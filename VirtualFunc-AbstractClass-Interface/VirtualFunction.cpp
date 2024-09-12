#include<iostream>

class Weapon 
{
public:
    virtual void attack() 
    {
        std::cout << "Weapon performed attack" << std::endl;
    }

    void info()
    {
        std::cout << "Weapon info:" << std::endl;
    }
};

class RangedWeapon : public Weapon
{
public:
    void attack() 
    {
        std::cout << "RangedWeapon attack" << std::endl;
    }

    void info()
    {
        std::cout << "RangedWeapon info:" << std::endl;
    }
};

int main()
{
    Weapon *weapon;

    RangedWeapon rangedWeapon;

    weapon = &rangedWeapon;

    weapon->attack();
    weapon->info();

    return 0;
}