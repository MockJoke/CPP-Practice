#include <iostream>

int main()
{
    int x = 50;
    int* ptr = &x;
    int& ref = *ptr;

    ref = 100;

    std::cout << "x: " << x << ", ref: " << ref << std::endl;
    return 0;
}