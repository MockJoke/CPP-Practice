// #include <iostream>

// class Game
// {
//     int x;
    
//     Game() 
//     { 
//         x = 5; 
//     }
// };

// int main()
// {
//     Game *game = new Game;
//     std::cout << game->x;
//     return 0;
// }

// In the above program, the Game() constructor & x variable are using default access modifier (i.e. private)
// so both of them are not accessible outside of the Game class

#include <iostream>

class Game
{
public:
    int x;
    
    Game() 
    { 
        x = 5; 
    }
};

int main()
{
    Game *game = new Game;
    std::cout << game->x;
    return 0;
}