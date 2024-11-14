#include <iostream>

void modifyWithPointer(int* p)
{
    *p = 100;
}

void modifyWithReference(int& r)
{
    r = 200;
}

int main()
{
    int x = 10;
    std::cout << "Initial value of x: " << x << std::endl;

    modifyWithPointer(&x); // Passing pointer to function
    std::cout << "After modifyWithPointer(&x): " << x << std::endl;

    modifyWithReference(x); // Passing reference to function
    std::cout << "After modifyWithReference(x): " << x << std::endl;

    return 0;
}