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

    for (int i = 0; i < 8; i++) {
        grid[1][i] = new Pawn(Piece::Player::White, (1, i));
        grid[6][i] = new Pawn(Piece::Player::Black, (6, i));
    }
    grid[0][0] = new Rook(Piece::Player::White, (0, 0));
    grid[0][7] = new Rook(Piece::Player::White, (0, 7));
    grid[7][0] = new Rook(Piece::Player::Black, (7, 0));
    grid[7][7] = new Rook(Piece::Player::Black, (7, 7));
    grid[0][1] = new Knight(Piece::Player::White, (0, 1));
    grid[0][6] = new Knight(Piece::Player::White, (0, 6));
    grid[7][1] = new Knight(Piece::Player::Black, (7, 1));
    grid[7][6] = new Knight(Piece::Player::Black, (7, 6));
    grid[0][2] = new Bishop(Piece::Player::White, (0, 2));
    grid[0][5] = new Bishop(Piece::Player::White, (0, 5));
    grid[7][2] = new Bishop(Piece::Player::Black, (7, 2));
    grid[7][5] = new Bishop(Piece::Player::Black, (7, 5));
    grid[0][3] = new Queen(Piece::Player::White,  (0, 3));
    grid[7][3] = new Queen(Piece::Player::Black, (7, 3));
    grid[0][4] = new King(Piece::Player::White, (0, 4));
    grid[7][4] = new King(Piece::Player::Black, (7, 4));

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








