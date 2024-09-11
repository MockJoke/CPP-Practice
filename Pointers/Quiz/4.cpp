// #include <iostream>

// int main()
// {
//     int x = 5;

//     int *ptr;
    
//     *ptr = x;

//     std::cout << *ptr << ' ';
    
//     x = 20;
    
//     std::cout << *ptr << '\n';
    
//     return 0;
// }

// Here int *ptr; - it's an uninitialised pointer and later on at *ptr = x; - that uninitialised pointer is getting assigned some value.
// it's assigning a value to the memory location *ptr without first allocating or pointing ptr to a valid memory address

#include <iostream>

int main()
{
    int x = 5;

    int *ptr = new int;
    
    *ptr = x;

    std::cout << *ptr << ' ';
    
    x = 20;
    
    std::cout << *ptr << '\n';
    
    delete ptr;

    return 0;
}