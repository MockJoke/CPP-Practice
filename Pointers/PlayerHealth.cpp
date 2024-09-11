#include <iostream>

int main()
{
    int playerHealth;

    std::cout << "Set player health: ";
    std::cin >> playerHealth;

    int *p{&playerHealth};

    std::cout << "The memory address at which playerHealth is stored (using pointer): " << p << std::endl;
    std::cout << "The value stored as playerHealth is (using deference operator): " << *p << std::endl;
    std::cout << "The value stored as playerHealth is (using variable directly): " << playerHealth << std::endl;

    std::cout << "Set player health again: ";
    std::cin >> *p;

    std::cout << "The memory address at which playerHealth is stored (using pointer): " << p << std::endl;
    std::cout << "The value stored as playerHealth is (using deference operator): " << *p << std::endl;
    std::cout << "The value stored as playerHealth is (using variable directly): " << playerHealth << std::endl;
}