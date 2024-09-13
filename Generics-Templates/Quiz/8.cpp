// #include <iostream>

// int main()
// {
//     int num = 111;
//     void *ptr = &num;
//     std::cout << (int)*ptr;

//     return 0;
// }

// ptr is a void pointer pointing to the address of num
// Void pointers are generic pointers that can hold the address of any type, 
// but they cannot be directly dereferenced or used in arithmetic without first being cast to a specific pointer type.

// The line std::cout << (int)*ptr; attempts to dereference the void pointer directly, 
// which is illegal and results in a compilation error.
// You cannot dereference a void* without casting it to the appropriate pointer type first.

#include <iostream>

int main()
{
    int num = 111;
    void *ptr = &num;
    std::cout << *(int *)ptr;

    return 0;
}