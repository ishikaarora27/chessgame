
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

    //Board constructor: creates a board and adds all the pieces in their starting positions
    Board();

    //returns the actual piece at a given position
    Piece get_piece(ge211::Posn<int> pos);

    //returns the player at a given position
    Player get_player(ge211::Posn<int> pos);

    void board_set(ge211::Posn<int> pos, Piece p);


private:

    //The 2D array of Tiles
    Tile grid [][];



};