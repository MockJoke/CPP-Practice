#include <iostream>
using namespace std;

class Pokemon
{
public:
    int health; // Declaring health as a member variable

    Pokemon() : health(100) // Initializing health
    {
        cout << "Inside the constructor" << endl;
    }

    ~Pokemon()
    {
        cout << "Inside the destructor" << endl;
    }
};

int main()
{
    if (true)
    {
        Pokemon charmander;  // Local object, will be destroyed when out of scope
        static Pokemon Pika; // Static object, will live until the end of the program
    }

    cout << "End of the program" << endl;

    return 0;
}