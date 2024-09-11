#include <iostream>

int main()
{
  int enemyHealth;

  std::cout << "Set enemy health: ";
  std::cin >> enemyHealth;

  int *p{&enemyHealth};
  int *q{&enemyHealth};

  std::cout << "p: " << p << std::endl;
  std::cout << "q: " << q << std::endl;

  std::cout << "enemyHealth: " << enemyHealth << std::endl;
  std::cout << "*p: " << *p << std::endl;
  std::cout << "*q: " << *q << std::endl;

  std::cout << "Set enemy health again: ";
  std::cin >> enemyHealth;

  std::cout << "p: " << p << std::endl;
  std::cout << "q: " << q << std::endl;

  std::cout << "enemyHealth: " << enemyHealth << std::endl;
  std::cout << "*p: " << *p << std::endl;
  std::cout << "*q: " << *q << std::endl;
}