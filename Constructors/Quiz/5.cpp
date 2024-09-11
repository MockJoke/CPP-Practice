#include <iostream>

class OutscalClan
{
    std::string name;
    int rank;

public:
    OutscalClan()
    {
        name = "David";
        rank = 1;
    }

    std::string getName()
    {
        return name;
    }
    
    int getRank()
    {
        return rank;
    }
};

int main()
{
    OutscalClan clan1;
    OutscalClan clan2 = clan1;

    std::cout << clan1.getName() << " " << clan1.getRank() << '\n';
    std::cout << clan2.getName() << " " << clan2.getRank() << '\n';

    return 0;
}