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

static int const board_size = 8;


Board::Board()
: grid[board_size][board_size] {

    for (int i = 0; i < board_size; i++) {
        for(int j = 0; j < board_size; j++){
            grid[i][j] = new Tile({i,j});
        }
    }

}

void
Board::fill_with_pieces(){

    for (int i = 0; i < board_size; i++) {
        grid[1][i].set(new Pawn(Piece::Player::White, (1, i)));
        grid[6][i].set(new Pawn(Piece::Player::Black, (6, i)));
    }
    grid[0][0].set(new Rook(Piece::Player::White,  (0, 0)));
    grid[0][7].set(new Rook(Piece::Player::White,  (0, 7)));
    grid[7][0].set(new Rook(Piece::Player::Black,  (7, 0)));
    grid[7][7].set(new Rook(Piece::Player::Black,  (7, 7)));
    grid[0][1].set(new Knight(Piece::Player::White,  (0, 1)));
    grid[0][6].set(new Knight(Piece::Player::White,  (0, 6)));
    grid[7][1].set(new Knight(Piece::Player::Black,  (7, 1)));
    grid[7][6].set(new Knight(Piece::Player::Black, (7, 6)));
    grid[0][2].set(new Bishop(Piece::Player::White,  (0, 2)));
    grid[0][5].set(new Bishop(Piece::Player::White,  (0, 5)));
    grid[7][2].set(new Bishop(Piece::Player::Black, (7, 2)));
    grid[7][5].set(new Bishop(Piece::Player::Black, (7, 5)));
    grid[0][3].set(new Queen(Piece::Player::White,  (0, 4)));
    grid[7][3].set(new Queen(Piece::Player::Black, (7, 3)));
    grid[0][4].set(new King(Piece::Player::White, (0, 3)));
    grid[7][4].set(new King(Piece::Player::Black, (7, 4)));
}

Piece get_piece(Position pos) {
    return grid[pos.x][pos.y].return_piece();
    //return the piece at the tile
}

Player get_player(Position pos) {
    return grid[pos.x][pos.y].return_player();
    //return the player at the tile
}

void board_set(Position pos, Piece p){
    grid[pos.x][pos.y].set(p);
    return;
}








