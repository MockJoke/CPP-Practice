#include <iostream>
class Outscal
{
public:
    Outscal()
    {
        std::cout << "Constructor Called \n";
    }
};

int main()
{
    Outscal clan;
    Outscal *clanptr;
    return 0;
}

// Outscal clan; - This line creates an object clan of the class Outscal. 
// When this object is created, the constructor Outscal() is called, which prints "Constructor Called \n".

// Outscal *clanptr; - This line declares a pointer clanptr to an Outscal object. 
// However, it does not create an Outscal object; it merely creates a pointer variable that can point to an Outscal object in the future. 
// Since no new object is created here, the constructor is not called.