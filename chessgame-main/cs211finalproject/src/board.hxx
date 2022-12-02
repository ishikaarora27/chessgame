#ifndef BOARD_HXX
#define BOARD_HXX

#include <list>
#include <iostream>

#include "piece.hxx"

class Board {
public:
    // board constructor
    Board();
    // Creates board with a list of moves
    Board(std::list<Move*> moves);
    // Copy constructor
    Board(const Board &b);
    // deletes each piece of the board and previous moves
    ~Board();
    // returns all possible moves for a given player
    std::list<Move> get_possible_moves(Piece::Player player) const;
    // returns all previous moves in a list of move pointer
    std::list<Move*> get_previous_moves() const;
    // returns pointer of a piece at a given tile (returns null ptr if there is no piece
    Piece *get_piece(Tile) const;
    // applies move to board
    // checks if move is valid with all possible moves
    // checks if player is still in check after the move
    // after successful move, current player is changed
    bool move_piece(Move *move);
    // promotes the piece(pawn)
    void promote_piece(Move *move, Piece::PieceType type);
    // undoes the last move
    void undo_move();
    // checks if piece is in check by:
    // checking if one move can capture king
    // returns true if the current player is in check
    bool in_check() const;
    // checks if piece is in checkmate by:
    // applying each possible move to a copy of the board
    // then checking if the piece is still in check after its move
    // returns true if the player is in checkmate
    bool in_checkmate() const;
    // checks for a draw
    // if there is no possible move for the current player
    // returns true it is a draw
    bool is_draw() const;
    // checks if move is a promotion
    // returns true if promotion
    bool is_promotion(Move *move) const;

private:
    Piece ** *board;
    Piece::Player currentPlayer;

    // creates new board and initialise it with each tile and piece
    // returns pointer to the new board
    Piece ** *create_new_board();
    // applies the actual move
    void move(Move *move);
    // changes the player
    void other_player();

    std::list<Piece *> taken;
    std::list<Move *> previous_moves;

};
#endif