#include "board.hpp"
#include <iostream>

using namespace std;


/*
    (0,0) is bottom left of board, (7,7) is top right of board
*/
Board::Board()
{
    for(int i = 0; i < 64; i++)
    {
        board[i/8][i%8] = Tile(static_cast<char>(97 + (i/8)), (i%8) + 1);
    }
    for(int i = 0; i < 8; i++)
    {
        pieces[i] = new Pawn(true); // 0-7 = White Pawns
        pieces[16+i] = new Pawn(false); // 16-23 = Black Pawns
    }
    pieces[8] = new Rook(true);
    pieces[9] = new Rook(true);
    pieces[10] = new Knight(true);
    pieces[11] = new Knight(true);
    pieces[12] = new Bishop(true);
    pieces[13] = new Bishop(true);
    pieces[14] = new Queen(true);
    pieces[15] = new King(true);
    pieces[24] = new Rook(false);
    pieces[25] = new Rook(false);
    pieces[26] = new Knight(false);
    pieces[27] = new Knight(false);
    pieces[28] = new Bishop(false);
    pieces[29] = new Bishop(false);
    pieces[30] = new Queen(false);
    pieces[31] = new King(false);
}

Board::~Board()
{
    for(int i = 0; i < 32; i++)
    {
        delete pieces[i];
        //cout << i << endl;
    }
}

void Board::setup()
{
    for(int i = 0; i < 8; i++)
    {
        board[6][i].pieceMoveOn(pieces[16 + i]); // Black pieces on top
        board[1][i].pieceMoveOn(pieces[i]); // White pieces on bottom 
    }
    board[0][0].pieceMoveOn(pieces[8]);
    board[0][7].pieceMoveOn(pieces[9]);
    board[0][1].pieceMoveOn(pieces[10]);
    board[0][6].pieceMoveOn(pieces[11]);
    board[0][2].pieceMoveOn(pieces[12]);
    board[0][5].pieceMoveOn(pieces[13]);
    board[0][3].pieceMoveOn(pieces[14]);
    board[0][4].pieceMoveOn(pieces[15]);

    board[7][0].pieceMoveOn(pieces[24]);
    board[7][7].pieceMoveOn(pieces[25]);
    board[7][1].pieceMoveOn(pieces[26]);
    board[7][6].pieceMoveOn(pieces[27]);
    board[7][2].pieceMoveOn(pieces[28]);
    board[7][5].pieceMoveOn(pieces[29]);
    board[7][3].pieceMoveOn(pieces[30]);
    board[7][4].pieceMoveOn(pieces[31]);
}

void Board::display()
{
    cout << "*-----*-----*-----*-----*-----*";
    char file;
    for(int i = 0; i < 64; i++)
    {
        if(i % 8 == 0)
        {
            cout << endl;
            file = static_cast<char>(72 - (i/8));
            cout << file << " ";
        }
        cout << board[(63-i)/8][i%8];
    }
    cout << endl << "   1  2  3  4  5  6  7  8";
    cout << endl << "*-----*-----*-----*-----*-----*" << endl << endl << endl;
}

bool Board::viewTile(int rank, int file)
{
    return board[rank][file].empty();
}