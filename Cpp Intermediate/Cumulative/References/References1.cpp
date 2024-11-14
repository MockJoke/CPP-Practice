#include <iostream>

int main()
{
    int x = 10;
    int &ref = x; // Reference to x

    std::cout << "Reference example:" << std::endl;
    std::cout << "x: " << x << std::endl;
    std::cout << "ref: " << ref << std::endl;

    ref = 30; // Change the value of x through the reference
    std::cout << "After ref = 30;" << std::endl;
    std::cout << "x: " << x << std::endl;
    std::cout << "ref: " << ref << std::endl;

    return 0;
}