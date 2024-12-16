#ifndef PIECE_HPP
#define PIECE_HPP

class Piece
{
    public:
    int rank; // Rows 1-8
    int file; // Cols a-h
    char piece_type;
    virtual void move() = 0;
    virtual bool move_valid() = 0;
};

class Pawn : public virtual Piece
{
    private:
        bool moved;

    public:
        Pawn(bool, int);
        void move();
        bool move_valid();
};

class Rook : public virtual Piece
{
    private:
        bool moved;
    public:
        Rook(bool, int);
        void move();
        bool move_valid();
};

class Knight : public virtual Piece
{
    private:

    public:
        Knight(bool, int);
        void move();
        bool move_valid();
};

class Bishop : public virtual Piece
{
    private:

    public:
        Bishop(bool, int);
        void move();
        bool move_valid();
};

class Queen : public virtual Piece
{
    private:

    public:
        Queen(bool);
        void move();
        bool move_valid();
};

class King : public virtual Piece
{
    private:
        bool moved;
    public:
        King(bool);
        void move();
        bool move_valid();
};

#endif