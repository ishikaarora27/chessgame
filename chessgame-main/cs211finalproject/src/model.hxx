#pragma once

#include <ge211.hxx>
#include "piece.hxx"
#include "board.hxx"
#include "move.hxx"


class Model
{


public:

    Model();

    void create_move(ge211::Posn<int> start, ge211::Posn<int> end);

    void set_game_over();

private:

    Piece::Player turn_;
    Piece::Type type;
    Move move_attempt;
    Board board_;

    void calculate_valid_moves(Piece p);


};
