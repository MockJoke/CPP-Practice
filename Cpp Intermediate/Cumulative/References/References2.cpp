#include <iostream>

int main()
{
    int x = 10;
    int y = 20;
    int &ref = x; // Reference to x

    std::cout << "Reference must be initialized and cannot be changed:" << std::endl;
    std::cout << "Initial values - x: " << x << ", y: " << y << std::endl;
    std::cout << "ref (initially bound to x): " << ref << std::endl;

    ref = y; // This changes the value of x, not the reference itself
    std::cout << "After ref = y;" << std::endl;
    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;
    std::cout << "ref (still bound to x): " << ref << std::endl;

    return 0;
}
