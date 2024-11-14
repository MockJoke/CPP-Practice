#include <iostream>
using namespace std;

class Pokemon
{
public:
    static int health;
};

int Pokemon::health = 100; // Initialization of the static variable

class Pikachu : public Pokemon
{
};

int main()
{
    Pokemon Charmander;
    Pikachu Pika;
    // Accessing static variable via base class
    cout << "Pokemon health:" << Pokemon::health << endl;

    // Accessing static variable via derived class
    cout << "Pikachu health: " << Pikachu::health << endl;

    cout << "Charmander health: " << Charmander.health << endl;
    cout << "Pika health: " << Pika.health << endl;

    // Modifying static variable via base class
    Pika.health = 20;

    cout << "Pokemon health after modification:" << Pokemon::health << endl;
    cout << "Pikachu health after modification: " << Pikachu::health << endl;
    cout << "Charmander health after modification: " << Charmander.health << endl;
    cout << "Pika health after modification: " << Pika.health << endl;

    return 0;
}