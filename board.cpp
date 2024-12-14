#include "board.hpp"
#include <iostream>

using namespace std;

Board::Board()
{
    for(int i = 0; i < 64; i++)
    {
        board[i/8][i%8] = Tile(static_cast<char>(97 + (i/8)), (i%8) + 1);
    }
    white = Color(true);
    black = Color(false);
}