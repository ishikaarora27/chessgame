
#include <ge211.hxx>
#include "tile.hxx"
#include "board.hxx"
#include "piece.hxx"




class Move
{

    using Position = ge211::Posn<int>;
public:

    enum MoveType : int {
        Standard = 0,
        Capture = 1,
        Promotion = 2
    };

    //constructor with positions only
    Move(Position initial, Position final);

    Move(Position initial, Position final, MoveType type);

   // Player player_at_end(ge211::Posn<int> pos);

    // adds a type to a move
    void add_type(MoveType type);
    // checks if a move is of a given type
    bool is_type(MoveType type) const;
    // Returns a pointer to the captured piece if the move is a capture.
    // If not it returns a nullptr
    Piece* get_captured_piece() const;

private:
    //the starting position
    Position start;

    //the ending position
    Position end;

    //is the move valid?
    bool valid;

};



