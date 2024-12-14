#ifndef TILE_HPP
#define TILE_HPP

#include "piece.hpp"

class Tile
{
    private:
        bool contains_piece;
        char file;
        int rank;
    public:
        Tile();
        Tile(char, int);
        void pieceMoveOn();
        void pieceMoveOff();
        bool tileContainsPiece(Piece);

        void TESTFCN();
};

#endif