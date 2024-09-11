#include <iostream>

void increase(int x)
{
    x = x + 5;
    x *= 2;
}

int main()
{
    int x = 5;

    increase(x);
    
    std::cout << x;

    return 0;
}