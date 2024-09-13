#include <iostream>

template <class T1>
class outscal
{
    T1 x;
    static int score;
};

int main()
{
    outscal<int> game;
    std::cout << sizeof(game);
    
    return 0;
}