#ifndef PAWN_HXX
#define PAWN_HXX

#include "piece.hxx"

class Pawn : public Piece {
public:
    // constructor for the pawn
    Pawn(Piece::Player player, Tile tile);
    // copy constructor.
    virtual Piece* clone() const;
    // returns all possible moves
    virtual std::list<Move> get_possible_moves(const Board &board) const;
};
#endif