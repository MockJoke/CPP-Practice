// #include <iostream>
// using namespace std;

// class Pokemon
// {
// public:
//     void attack()
//     {
//         cout << "I attack" << endl;
//     }
// };

// class Charmander : public Pokemon
// {
// };

// class Squirtle : public Pokemon
// {
// };

// class Volcanion : public Charmander, public Squirtle
// {
// };

// int main()
// {
//     Volcanion vol;
//     vol.attack();
//     return 0;
// }

#include <iostream>
using namespace std;

class Pokemon
{
public:
    void attack()
    {
        cout << "I attack" << endl;
    }
};

class Charmander : virtual public Pokemon
{
};

class Squirtle : virtual public Pokemon
{
};

class Volcanion : public Charmander, public Squirtle
{
};

int main()
{
    Volcanion vol;
    vol.attack();
    
    return 0;
}