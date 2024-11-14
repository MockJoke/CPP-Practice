#include <iostream>

int main()
{
    int x = 10;
    int& ref = x;
    int* ptr = &x;

    std::cout << "Address of x: " << &x << std::endl;
    std::cout << "Address of ref: " << &ref << std::endl;
    std::cout << "Address stored in ptr: " << ptr << std::endl;

    return 0;
}