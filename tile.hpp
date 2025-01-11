#ifndef TILE_HPP
#define TILE_HPP

#include "piece.hpp"
#include <iostream>

constexpr const char* colorReset{"\x1b[0m"};
constexpr const char* colorWhite{"\x1b[1;37m"}; // White
constexpr const char* colorBlack{"\x1b[1;31m"}; // Red

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
        void pieceMoveOn(Piece*);
        void pieceMoveOff();
        bool tileContainsPiece(Piece);
        void displayFileAndRank();
        friend std::ostream& operator<<(std::ostream& out, const Tile& tile)
        {
            if(tile.piece)
            {
                out << colorReset << '[' << (tile.piece->color ? colorWhite : colorBlack) <<
                tile.piece->piece_type << colorReset << ']';
            }
            else
            {
                out << "[ ]";
            }
            return out;
        }
};

#endif