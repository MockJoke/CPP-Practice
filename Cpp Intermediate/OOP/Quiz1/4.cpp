// #include <iostream>

// void increment(int &x) 
// {
//     x++;
// }

// int main() 
// {
//     int a = 1;
//     increment(a++);
//     std::cout << a;

//     return 0;
// }

#include <iostream>

void increment(int &x) 
{
    x++;
}

int main() 
{
    int a = 1;
    increment(a);
    a++;
    std::cout << a;
    
    return 0;
}