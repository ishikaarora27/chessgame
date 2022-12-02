#pragma once

#include "move.hxx"
#include "piece.hxx"
#include <ge211.hxx>
#include "player.hxx"

#include "move.hxx"
#include "piece.hxx"
#include <ge211.hxx>

class Tile{

public:
//constructor

    Tile(Piece piece, Position pos);
    //constructor with pos only
    Tile(Position pos);
    //returns whether the tile is occupied
    bool occupied();

    //clear the tile of any pieces
    void clear();

    //set the piece field to p
    void set (Piece p);

    //get the piece at a certain tile
    Piece return_piece();


    //get the player at this tile
    Player return_player();

private:

    //the specific piece at the tile
    Piece piece;

    //represents the color of the tile: 0 = dark color, 1 = light color
    bool color;

    //the positiion of the top left corner of the tile
    ge211::Posn<int> position;


};