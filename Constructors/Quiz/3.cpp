// #include <iostream>
// using namespace std;

// class A
// {
//     A()
//     {
//         cout << "Constructor called";
//     }
// };

// int main(int argc, char const *argv[])
// {
//     A a;
//     return 0;
// }

// The given code will produce a compilation error because the constructor of class A is private by default. 
// In C++, if no access specifier is mentioned, members of a class are private by default. 
// Thus, the constructor A() is private, and an attempt to create an object A a; 
// in the main function will fail as it tries to access a private constructor.

#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout << "Constructor called";
    }
};

int main(int argc, char const *argv[])
{
    A a;
    return 0;
}