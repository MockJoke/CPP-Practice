#include <iostream>
#include <memory>

class Player
{
    std::string c;

public:
    Player(std::string p)
    {
        c= p;
        std::cout << "Creating object: " << p << std::endl;
    }

    ~Player()
    {
        std::cout << "Deleting object: " << c << std::endl;
    }
};

void CreateObjects()
{
    Player p("NormalObjectPtr");
    Player *p1 = &p;
    // std::cout << p1 << std::endl;

    Player *p2 = new Player("RegularPtr");
    delete p2;

    std::unique_ptr<Player> p3(new Player("SmartPtr"));
}

int main()
{
    CreateObjects();
}