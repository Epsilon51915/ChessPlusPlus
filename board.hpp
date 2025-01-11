#ifndef BOARD_HPP
#define BOARD_HPP

#include "color.hpp"
#include "tile.hpp"

class Board
{
    private:
        Color black{false};
        Color white{true};
        Tile board[8][8];
        Piece *pieces[32];
    public:
        Board();
        ~Board();
        void display();
        void setup();
};

#endif