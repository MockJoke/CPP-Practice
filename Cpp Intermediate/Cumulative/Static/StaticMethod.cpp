#include <iostream>
using namespace std;

class Pokemon
{
public:
    static void attack()
    {
        cout << "I attack";
    }
};

int main()
{
    Pokemon::attack(); // Make sure no invisible characters are here
}