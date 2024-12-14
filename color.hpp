#ifndef COLOR_HPP
#define COLOR_HPP

#include "piece.hpp"

class Color
{
    private:
        bool white;
        Piece *pieces[16];
    public:
        Color();
        Color(bool);
    
};

#endif