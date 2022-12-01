//
// Created by ISHIKA ARORA on 11/20/22.
//

#include "move.hxx"
#include "tile.hxx"
#include "board.hxx"
#include "piece.hxx"


Move::Move(ge211::Posn<int> start, ge211::Posn<int> end)

    : this.start(start),
    this.end(end)
        {}


/*
Player player_at_end(){
        return board.get_player(this.end);
    }*/
