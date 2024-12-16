#include "board.hpp"
#include <iostream>

using namespace std;

Board::Board()
{
    for(int i = 0; i < 64; i++)
    {
        board[i/8][i%8] = Tile(static_cast<char>(97 + (i/8)), (i%8) + 1);
    }
    // white = Color(true);
    // black = Color(false);
}

void Board::display()
{
    for(int i = 0; i < 64; i++)
    {
        if(i % 8 == 0)
        {
            cout << endl;
        }
        cout << "[";
        board[i%8][(63-i)/8].displayFileAndRank();
        cout << "] ";
    }
    cout << endl;
}