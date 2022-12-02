
#pragma once

#include "player.hxx"
#include "move.hxx"
#include "piece.hxx"
#include <ge211.hxx>
#include "tile.hxx"

#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>


/// Represents the state of the board.
class Board
{




public:

    using Position = ge211::Posn<int>;

    //Board constructor: creates a board and adds all the pieces in their starting positions
    Board();

    //returns the actual piece at a given position
    Piece get_piece(Position pos);

    //returns the player at a given position
    Player get_player(Position pos);

    void board_set(Position pos, Piece p);
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

    //The 2D array of Tiles
    Piece grid [][];



};