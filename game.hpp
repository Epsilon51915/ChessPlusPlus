#ifndef GAME_HPP
#define GAME_HPP

#include "board.hpp"
#include <string>

class Game
{
    private:
        // Curly braces automatically construct board
        bool whiteTurn = false;
        Board board{};
    public:
        Game();
        ~Game();
        void setup();
        void move_parser(std::string);
        bool gameLoop();
};

#endif