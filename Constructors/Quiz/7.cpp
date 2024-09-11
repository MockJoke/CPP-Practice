#include <iostream>

class Oustcal
{
private:
    int score;

public:
    Oustcal()
    {
        std::cout << "Constructor Called\n";
    }
    
    ~Oustcal()
    {
        std::cout << "Destructor Called\n";
    }
};

int main()
{
    Oustcal *game = new Oustcal;
    delete game;

    return 0;
}