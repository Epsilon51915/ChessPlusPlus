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
}  

void Tile::displayFileAndRank()
{
    cout << file << rank;
}

bool Tile::empty()
{
    return !piece;
}

char Tile::pieceType()
{
    return piece->piece_type;
}

void Tile::pieceMoveOn(Piece * newPiece)
{
    piece = newPiece;
}