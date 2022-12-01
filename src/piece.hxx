#pragma once

#include <string>
#include "ge211.hxx"
#include "player.hxx"

class Piece {

public:

    Piece(Player p){}

    //the set of positions available for the piece to move to.
    std::vector<ge211::Posn<int>> moves;
    //returns the player that this piece belongs to: either black or white
    Player get_player();






private:

    //the number of points a piece is worth
    int points const;


    //the player that the piece belongs to. Does not change
    Player player;


    //the different directions that the piece can travel in
    std::vector<ge211::Posn<int>> directions;

}

