#pragma once

#include "player.hxx"
#include "move.hxx"
#include "piece.hxx"
#include <ge211.hxx>
#include "tile.hxx"
#include "board.hxx"

#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>


Board::Board()
: grid[8][8] {
    //add the chess pieces

}

Piece get_piece(ge211::Posn<int> pos) {
    return grid[pos.x][pos.y].return_piece();
    //return the piece at the tile
}

Player get_player(ge211::Posn<int> pos) {
    return grid[pos.x][pos.y].return_player();
    //return the player at the tile
}

void board_set(ge211::Posn<int> pos, Piece p){
    grid[pos.x][pos.y].set(p);
    return;
}






