// #include <iostream>
// using namespace std;

// class Pokemon
// {
// public:
//     void attack()
//     {
//         cout << "Pokemon attack!" << endl;
//     }
// };

// class Pikachu : Pokemon
// {
// public:
//     void thunderbolt()
//     {
//         cout << "Pikachu uses Thunderbolt!" << endl;
//     }
// };

// int main()
// {
//     Pikachu pika;
//     pika.thunderbolt();
//     pika.attack();
//     return 0;
// }

#include <iostream>
using namespace std;

class Pokemon
{
public:
    void attack()
    {
        cout << "Pokemon attack!" << endl;
    }
};

class Pikachu : public Pokemon
{
public:
    void thunderbolt()
    {
        cout << "Pikachu uses Thunderbolt!" << endl;
    }
};

int main()
{
    Pikachu pika;
    pika.thunderbolt();
    pika.attack();
    
    return 0;
}