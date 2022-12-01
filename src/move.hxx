
#include <ge211.hxx>
#include "tile.hxx"
#include "board.hxx"
#include "piece.hxx"




class Move
{

public:

    Move(ge211::Posn<int> initial, ge211::Posn<int> final);

   // Player player_at_end(ge211::Posn<int> pos);

private:
    //the starting position
    ge211::Posn<int> start;

    //the ending position
    ge211::Posn<int> end;

    //is the move valid?
    bool valid;

};



