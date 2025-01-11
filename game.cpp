#include "game.hpp"
#include <iostream>

using namespace std;

Game::Game() {}

void Game::setup()
{
    cout << "Setting up..." << endl;
    board.setup();
    cout << "Setup complete!" << endl;
}

bool Game::gameLoop()
{
    board.display();
    return true;
}