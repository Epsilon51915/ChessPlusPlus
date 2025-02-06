#include "piece.hpp"
#include <iostream>

using namespace std;

Pawn::Pawn(bool isWhite)
{
    //cout << "Pawn" << endl;
    color = isWhite;
    moved = false;
    piece_type = 'P';
}

Pawn::~Pawn()
{
    //cout << "Deleted Pawn" << endl;
}

void Pawn::move() {}
bool Pawn::move_valid() {return true;}

Rook::Rook(bool isWhite)
{
    //cout << "Rook" << endl;
    color = isWhite;
    moved = false;
    piece_type = 'R';
}

Rook::~Rook()
{
    //cout << "Deleted Rook" << endl;
}

void Rook::move() {}
bool Rook::move_valid() {return true;}

Knight::Knight(bool isWhite)
{
    //cout << "Knight" << endl;
    color = isWhite;
    piece_type = 'N';
}

Knight::~Knight()
{
    //cout << "Deleted Knight" << endl;
}

void Knight::move() {}
bool Knight::move_valid() {return true;}

Bishop::Bishop(bool isWhite)
{
    //cout << "Bishop" << endl;
    color = isWhite;
    piece_type = 'B';
}

Bishop::~Bishop()
{
    //cout << "Deleted Bishop" << endl;
}

void Bishop::move() {}
bool Bishop::move_valid() {return true;}

Queen::Queen(bool isWhite)
{
    //cout << "Queen" << endl;
    color = isWhite;
    piece_type = 'Q';
}

Queen::~Queen()
{
    //cout << "Deleted Queen" << endl;
}

void Queen::move() {}
bool Queen::move_valid() {return true;}

King::King(bool isWhite)
{
    //cout << "King" << endl;
    color = isWhite;
    piece_type = 'K';
    moved = false;
}

King::~King()
{
    //cout << "Deleted King" << endl;
}

void King::move() {}
bool King::move_valid() {return true;}