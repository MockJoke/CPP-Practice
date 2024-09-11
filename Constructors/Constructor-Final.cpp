#include <iostream>

class Player
{
private:
    int health;
    int lives;

public:
    Player(int h, int l)
    {
        health = h;
        lives = l;

        std::cout << "I am a player, I just got spawned with health: " << health << std::endl;
    }

    ~Player()
    {
        std::cout << "I am a player and I died with health: " << health << std::endl;
    }

    int GetHealth()
    {
        return health;
    }
};

class FastPlayer : public Player
{
private:
    int speed;

public:
    FastPlayer(int h, int l, int s) : Player(h, l)
    {
        speed = s;

        std::cout << "I am a fast player, I just got spawned with health: " << GetHealth() << std::endl;
    }

    ~FastPlayer()
    {
        std::cout << "I am a fast player and I died with health: " << GetHealth() << std::endl;
    }
};

void localObjects()
{
    Player *player = new Player(150, 5);
    FastPlayer *fastPlayer = new FastPlayer(250, 4, 100);

    delete player;
    delete fastPlayer;
}

int main()
{
    Player *player1 = new Player(100, 3);
    Player *player2 = new Player(200, 5);
    Player *player3 = new Player(300, 7);

    localObjects();

    delete player1;
    delete player2;
    delete player3;
}