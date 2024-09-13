#include <iostream>

template <class T>
T minn(T &a, T &b)
{
    std::cout << "\nGeneric Template: ";

    return (a > b) ? a : b;
}

template <>
int minn<int>(int &a, int &b)
{
    std::cout << "\nInteger Template: ";

    return (a < b) ? a : b;
}

int main()
{
    int x = 100, y = 200;
    std::cout << minn(x, y) << ' ';

    char ch1 = 'a', ch2 = 'b';
    std::cout << minn(ch1, ch2);

    return 0;
}