#include <iostream>

int main()
{
    int *ptr1;
    char *ptr2;
    float *ptr3;

    std::cout << sizeof(ptr1) << ' ' << sizeof(ptr2) << ' ' << sizeof(ptr3) << '\n';
    
    return 0;
}