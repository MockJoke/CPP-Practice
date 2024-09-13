#include <iostream>

template <typename T1, typename T2>
void sum(T1 a, T2 b)
{
    std::cout << a + b << ' ';
}

int main()
{
    sum('d', 100.01);
    sum('d', 100.1);
    
    return 0;
}