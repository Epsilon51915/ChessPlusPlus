#include "tile.hpp"
#include <iostream>

using namespace std;

Tile::Tile()
{
    file = 'z';
    rank = 0;
    // piece->piece_type = 'Z';
}

Tile::Tile(char file_, int rank_)
{
    file = file_;
    rank = rank_;
}  

void Tile::displayFileAndRank()
{
    cout << file << rank;
}