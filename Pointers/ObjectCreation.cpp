#include <iostream>

class Player
{
private:
  int playerHealth;

public:
  void SetHealth(int value)
  {
    playerHealth = value;
  }

  int GetHealth()
  {
    return playerHealth;
  }
};

int main() 
{
  Player* player = new Player();
  player->SetHealth(100);

  std::cout << "Player health is: " << player->GetHealth() << std::endl;

  delete player;
}