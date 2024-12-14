#ifndef GAME_HPP
#define GAME_HPP

#include "board.hpp"

class Game
{
    private:
        Board board;
    public:
        Game();
        void setup();
        bool gameLoop();
};

#endif