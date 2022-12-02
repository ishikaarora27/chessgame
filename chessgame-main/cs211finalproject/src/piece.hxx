#ifndef PIECE_HXX
#define PIECE_HXX

#include <list>

#include "move.hxx"
#include "tile.hxx"
#include "ge211.hxx"

class Board;
class Tile;

class Piece {


public:

    using Position=ge211::Posn<int>;

    enum Type {King, Queen, Bishop, Knight, Rook, Pawn};
    enum Player : bool {Black, White};
    enum Points : int {1, 3, 5, 9};
    // each piece has three values: it's type of piece, its color, and its point value
    Piece(Player player, Position pos, Points points);
    // returns a pointer to the new copied piece
    virtual Piece* clone() const = 0;
    // destructor for the piece
    virtual ~Piece() = default;
    //returns the player color: either black or white
    Player get_player() const;
    // returns the current position of the piece
    Position get_position() const;
    // sets the position of a piece
    void set_position(Position pos);
    // gets the type of piece
    Type get_type() const;
    // gets the point value of a piece
    Points get_points() const;
    // sets the captured value of a piece
    void capture();
    // if a capture is invalid we need to undo the capture
    void undo_capture();
    // gets the captured value of a piece
    bool was_captured() const;
    // checks if the move is valid with a given board and set of moves of a piece
    // this function will call get possible moves within it
//    bool valid_move(const Board &board, const Move &move) const;
    bool valid_move(Position start, Position end, Piece p);
    // calculates possible moves in a given board (implemented for every piece)
    virtual std::list<Move> get_possible_moves(const Board &board) const = 0;



private:

    //the number of points a piece is worth (doesn't change)
    Points points const;
    // the player (white or black)
    Player player;
    // the type of piece it is (doesn't change)
    Type type const;
    // current position
    Position position;
    /*Tile tile;*/

    bool taken;

    void set_position(Position pos);
};

Piece::Player operator!(Piece:: Player player)
#endif

