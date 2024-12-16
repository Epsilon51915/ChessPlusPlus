#ifndef TILE_HPP
#define TILE_HPP

#include "piece.hpp"

class Tile
{
    private:
        char file;
        int rank;
        Piece * piece = nullptr;
    public:
        Tile();
        Tile(char, int);
        bool empty();
        char pieceType();
        void pieceMoveOn();
        void pieceMoveOff();
        bool tileContainsPiece(Piece);
        void displayFileAndRank();
};

#endif