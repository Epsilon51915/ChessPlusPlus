#include "color.hpp"

#include <iostream>

using namespace std;
Color::Color() {}

Color::Color(bool isWhite)
{
    white = isWhite;
    for(int i = 0; i < 8; i++)
    {
        pieces[i] = new Pawn(isWhite);
    }
    pieces[8] = new Rook(isWhite);
    pieces[9] = new Knight(isWhite);
    pieces[10] = new Bishop(isWhite);
    pieces[11] = new Queen(isWhite);
    pieces[12] = new King(isWhite);
    pieces[13] = new Bishop(isWhite);
    pieces[14] = new Knight(isWhite);
    pieces[15] = new Rook(isWhite);
    
}

Color::~Color()
{
    for(int i = 0; i < 16; i++)
    {
        delete pieces[i];
    }
}