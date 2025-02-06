#include "game.hpp"
#include <iostream>
#include <string>

using namespace std;

Game::Game() {}

Game::~Game() {}

void Game::setup()
{
    cout << "Setting up..." << endl;
    board.setup();
    cout << "Setup complete!" << endl;
}

bool Game::gameLoop()
{
    string move;
    board.display();
    cout << endl << "What would you like to do?" << endl << "[ENTER MOVE IN ALGEBRAIC CHESS NOTATION, I.E: Nxe5 or Bc3]" << endl;
    getline(cin, move);
    
    move_parser(move);

    if(whiteTurn)
    {
        whiteTurn = false;
    }
    else
    {
        whiteTurn = true;
    }
    return true;
}

/*
    Parse through player move, figure out:
    1. Which piece is being discused
        1b: If there is a piece of the correct color still on the board
    2. If there is a capture or not
        2b: If there is a piece on the destination square to capture
        2c: If the move is a check or a checkmate
    3. Where to move the piece
        3b: If the piece can move from its current square to the destination square correctly
*/

void Game::move_parser(string move)
{
    int length = move.length() - 1;
    char info = move.at(length);
    
    // if(info == '!' || info == '#')
    // {
    //     // Confirm check/checkmate
    //     // If checkmate, end game, congratulate winner, ask to play again(?)
    //     length--;
    // }

    int rank = move.at(length) - 48;
    length--;
    char file = move.at(length);
    length--;

    cout << "Rank: " << rank << " File: " << file <<endl;

    if(rank < 1 || rank > 8 || file < 97 || file > 103)
    {
        cout << "Invalid rank or file, please select again" << endl;
        return;
    }
    
    board.viewTile(rank, file - 97); // Views destination tile
    
    //info = move.at(0);

    // switch(info)
    // {
    //     case 'R':
    //         break;

    //     case 'N':
    //         break;

    //     case 'B':
    //         break;

    //     case 'Q':
    //         break;

    //     case 'K':
    //         break;

    //     default:
    //         break;
    // }
}