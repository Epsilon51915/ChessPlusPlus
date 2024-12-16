#ifndef GAME_HPP
#define GAME_HPP

#include "board.hpp"

class Game
{
    private:
        // Curly braces automatically construct board
        Board board{};
    public:
        Game();
        void setup();
        bool gameLoop();
};

#endif