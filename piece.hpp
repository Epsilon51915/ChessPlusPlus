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

class Blank : public virtual Piece
{
    
};

class Pawn : public virtual Piece
{
    private:
        bool moved;

    public:
        Pawn(bool);
        virtual void move() override;
        virtual bool move_valid() override;
};

class Rook : public virtual Piece
{
    private:
        bool moved;
    public:
        Rook(bool);
        virtual void move() override;
        virtual bool move_valid() override;
};

class Knight : public virtual Piece
{
    private:

    public:
        Knight(bool);
        virtual void move() override;
        virtual bool move_valid() override;
};

class Bishop : public virtual Piece
{
    private:

    public:
        Bishop(bool);
        virtual void move() override;
        virtual bool move_valid() override;
};

class Queen : public virtual Piece
{
    private:

    public:
        Queen(bool);
        virtual void move() override;
        virtual bool move_valid() override;
};

class King : public virtual Piece
{
    private:
        bool moved;
    public:
        King(bool);
        virtual void move() override;
        virtual bool move_valid() override;
};

#endif