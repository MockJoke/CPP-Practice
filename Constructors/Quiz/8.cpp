// #include <iostream>

// class Outscal
// {
//     std::string name;
//     int rank;

// public:
//     Outscal(const Outscal &outscal)
//     {
//         name = outscal.name;
//         rank = outscal.rank;
//     }

//     std::string getName()
//     {
//         return name;
//     }

//     int getRank()
//     {
//         return rank;
//     }
// };

// int main()
// {
//     Outscal clan1;
//     Outscal clan2 = clan1;

//     std::cout << clan2.getName() << " " << clan2.getRank() << '\n';

//     return 0;
// }

// The given code will produce a compilation error because there is no default constructor defined for the Outscal class.
// When you try to create Outscal clan1;, the compiler looks for a default constructor (a constructor that takes no arguments),
// but none is provided.

#include <iostream>

class Outscal
{
    std::string name;
    int rank;

public:
    // Default constructor
    Outscal()
    {
        name = "Default Name";
        rank = 0;
    }

    // Copy constructor
    Outscal(const Outscal &outscal)
    {
        name = outscal.name;
        rank = outscal.rank;
    }

    // Getters
    std::string getName()
    {
        return name;
    }

    int getRank()
    {
        return rank;
    }
};

int main()
{
    Outscal clan1;                                                  // Default constructor called
    Outscal clan2 = clan1;                                          // Copy constructor called
    
    std::cout << clan2.getName() << " " << clan2.getRank() << '\n'; // Output: Default Name 0
    
    return 0;
}
