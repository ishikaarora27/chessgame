#pragma once

#include <ge211.hxx>
#include "player.hxx"
#include "piece.hxx"
#include "board.hxx"
#include "move.hxx"


class Model
{


public:


    void create_move(ge211::Posn<int> start, ge211::Posn<int> end);

private:

    Player turn_;
    Board board_;

    void calculate_valid_moves(Piece p);


};
