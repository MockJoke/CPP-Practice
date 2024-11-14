#include <iostream>

int main()
{
    int tool1 = 15;
    int tool2 = 30;

    int* compartment1 = &tool1;
    int* compartment2 = &tool2;

    std::cout << "Address of tool1: " << compartment1 << "\n";
    std::cout << "Address of tool2: " << compartment2 << "\n";

    std::cout << "Value of tool1: " << *compartment1 << "\n";
    std::cout << "Value of tool2: " << *compartment2 << "\n";

    return 0;
}