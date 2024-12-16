#include "piece.hpp"

Pawn::Pawn(bool isWhite, int file_)
{
    moved = false;
    piece_type = 'P';
    if(isWhite)
    {
        rank = 2;
    }
    else
    {
        rank = 7;
    }
    file = file_;
}

void Pawn::move() {}
bool Pawn::move_valid() {return true;}

Rook::Rook(bool isWhite, int file_)
{
    moved = false;
    piece_type = 'R';
    if(isWhite)
    {
        rank = 1;
    }
    else
    {
        rank = 8;
    }
    file = file_;
}

void Rook::move() {}
bool Rook::move_valid() {return true;}

Knight::Knight(bool isWhite, int file_)
{
    piece_type = 'N';
    if(isWhite)
    {
        rank = 1;
    }
    else
    {
        rank = 8;
    }
    file = file_; 
}

void Knight::move() {}
bool Knight::move_valid() {return true;}

Bishop::Bishop(bool isWhite, int file_)
{
    piece_type = 'B';
    if(isWhite)
    {
        rank = 1;
    }
    else
    {
        rank = 8;
    }
    file = file_;
}

void Bishop::move() {}
bool Bishop::move_valid() {return true;}

Queen::Queen(bool isWhite)
{
    piece_type = 'Q';
    if(isWhite)
    {
        rank = 1;
    }
    else
    {
        rank = 8;
    }
    file = 4;
}

void Queen::move() {}
bool Queen::move_valid() {return true;}

King::King(bool isWhite)
{
    piece_type = 'K';
    moved = false;
    if(isWhite)
    {
        rank = 1;
    }
    else
    {
        rank = 8;
    }
    file = 5;
}

void King::move() {}
bool King::move_valid() {return true;}