#ifndef MOVE_HXX
#define MOVE_HXX

#include "tile.hxx"
#include "piece.hxx"

class Piece;

class Move {
public:
    enum MoveType : int {
        Standard = 0,
        Capture = 1,
        Promotion = 2
    };
    // move constructor with a source position and a destination position
    Move(Tile src, Tile dst);
    // move constructor with an additional type parameter
    Move(Tile src, Tile dst, MoveType type);
    // Copy constructor
    Move(const Move &move);
    //deletes everything including the taken piece if not null ptr
    ~Move();
    // source move getter
    Tile get_move_src() const;
    // destination move getter
    Tile get_move_dst() const;
    // adds a type to a move
    void add_type(MoveType type);
    // checks if a move is of a given type
    bool is_type(MoveType type) const;
    // Returns a pointer to the captured piece if the move is a capture.
    // If not it returns a nullptr
    Piece* get_captured_piece() const;
    //Adds the type capture to the move and stores the given piece pointer.
    void set_taken_move(Piece *piece);

    bool operator==(const Move &toCompare);
private:
    Tile src;
    Tile dst;
    int type;
    Piece *taken;
};
#endif
