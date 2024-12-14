#include "color.hpp"

Color::Color() {}

Color::Color(bool isWhite)
{
    white = isWhite;
    for(int i = 0; i < 8; i++)
    {
        *pieces[i] = Pawn(isWhite, i+1);
    }
    *pieces[8] = Rook(isWhite, 1);
    *pieces[9] = Knight(isWhite, 2);
    *pieces[10] = Bishop(isWhite, 3);
    *pieces[11] = Queen(isWhite);
    *pieces[12] = King(isWhite);
    *pieces[13] = Bishop(isWhite, 6);
    *pieces[14] = Knight(isWhite, 7);
    *pieces[15] = Rook(isWhite, 8);
}