#include <iostream>

template <typename T>
class SpecialAbility
{
    T attackStrength;

public:
    void PerformSpecialAbility()
    {
        std::cout << "\nAttack Strength: " << attackStrength;
    }

    void SetAttackStrength(T a) 
    {
        attackStrength = a;
    }
};

int main()
{
    SpecialAbility<int> ability1;
    int a1;

    std::cout << "Set attack strength as an int number: ";
    std::cin >> a1;
    
    ability1.SetAttackStrength(a1);
    ability1.PerformSpecialAbility();

    SpecialAbility<float> ability2;
    float a2;

    std::cout << "\nSet attack strength as a float number: ";
    std::cin >> a2;
    
    ability2.SetAttackStrength(a2);
    ability2.PerformSpecialAbility();
}