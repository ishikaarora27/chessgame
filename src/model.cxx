#pragma once
#include "model.hxx"


void create_move(ge211::Posn<int> start, ge211::Posn<int> end){

    if(board_.get_player(start) != turn_){
        return;
    }
    Move m = Move(start, end);
    if(board_.get_piece(end) == NULL || ){
        //board.set
    }
    else if(board_.get_piece(end).get_player() = other_player(turn_)){
        //board.remove
        //board.set
    }


}
