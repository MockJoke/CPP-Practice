#include <iostream>

void print(double x)
{
    std::cout << "double: " << x << std::endl;
}

void print(int x)
{
    std::cout << "int: " << x << std::endl;
}

int main()
{
    float val = 3.5f;
    print(val);
    
    return 0;
}