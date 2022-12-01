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
    }//


}

private:

    void calculate_valid_moves(Piece p){
    //iterate through the directions
    // ge211:Posn<int> current = the piece's current position
    // current = current + dir (direction)
    // if(board[current].occupied by your piece, don't add, otherwise add it to piece.moves

}
