#include <iostream>
#include <memory>

class Outscal
{
public:
    Outscal()
    {
        std::cout << "Creating object \n";
    }
    ~Outscal()
    {
        std::cout << "Deleting object \n";
    }
};

void test()
{
    std::unique_ptr<Outscal> object1(new Outscal());
}

int main()
{
    test();
    Outscal obj;
    
    return 0;
}