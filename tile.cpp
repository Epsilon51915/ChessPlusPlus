#include "tile.hpp"
#include <iostream>

using namespace std;

Tile::Tile()
{
    file = 'z';
    rank = 0;
}

Tile::Tile(char file_, int rank_)
{
    file = file_;
    rank = rank_;
    TESTFCN();
}  

void Tile::TESTFCN()
{
    cout << file << rank << endl;
}