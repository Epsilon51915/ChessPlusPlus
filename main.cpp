#include <iostream>
#include "game.hpp"

using namespace std;

int main()
{
    cout << "Hello, world!" << endl;
    Game game;
    game.setup();
    game.gameLoop();
    return 0;
}