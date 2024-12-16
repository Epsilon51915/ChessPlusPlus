#ifndef BOARD_HPP
#define BOARD_HPP

#include "color.hpp"
#include "tile.hpp"

class Board
{
    private:
        Color black;
        Color white;
        Tile board[8][8];
    public:
        Board();
        void display();

};

#endif