#include "piece.hpp"
#include <iostream>

using namespace std;

Pawn::Pawn(bool isWhite)
{
    cout << "Pawn" << endl;
    moved = false;
    piece_type = 'P';
}

void Pawn::move() {}
bool Pawn::move_valid() {return true;}

Rook::Rook(bool isWhite)
{
    cout << "Rook" << endl;
    moved = false;
    piece_type = 'R';
}

void Rook::move() {}
bool Rook::move_valid() {return true;}

Knight::Knight(bool isWhite)
{
    cout << "Knight" << endl;
    piece_type = 'N';
}

void Knight::move() {}
bool Knight::move_valid() {return true;}

Bishop::Bishop(bool isWhite)
{
    cout << "Bishop" << endl;
    piece_type = 'B';
}

void Bishop::move() {}
bool Bishop::move_valid() {return true;}

Queen::Queen(bool isWhite)
{
    cout << "Queen" << endl;
    piece_type = 'Q';
}

void Queen::move() {}
bool Queen::move_valid() {return true;}

King::King(bool isWhite)
{
    cout << "King" << endl;
    piece_type = 'K';
    moved = false;
}

void King::move() {}
bool King::move_valid() {return true;}