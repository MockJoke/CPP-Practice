#include <iostream>

int main()
{
    int a = 5, b = 10;
    int& ref = a;
    int* ptr = &a;

    ref = b;  // Reassign value of b to a (reference cannot be reassigned)
    ptr = &b; // Reassign pointer to point to b

    std::cout << "a: " << a << ", b: " << b << std::endl;
    
    return 0;
}