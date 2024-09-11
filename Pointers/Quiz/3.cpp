#include <iostream>

int main()
{
    int x = 5;

    int *ptr;
    ptr = &x;
    
    std::cout << *ptr << ' ';
    
    x = 20;
    
    std::cout << *ptr << '\n';

    return 0;
}