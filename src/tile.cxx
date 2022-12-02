#pragma once

#include "move.hxx"
#include "piece.hxx"
#include <ge211.hxx>

#include "move.hxx"
#include "piece.hxx"
#include <ge211.hxx>
#include <string>


Tile::Tile(Piece piece, Position position)
: piece(piece),
position(position)
{

}


Tile::Tile(Position pos)
: position(pos)
{}


    //returns whether the tile is occupied
    bool occupied(){
        if(&piece != nullptr){
            return true;
        }
        else{
            return false;
        }
    }

    //clear the tile of any pieces
    void clear(){
        &piece = nullptr;
    }



    //set the piece field to p
    void set (Piece p){
        piece = p;
    }

Piece return_piece(){
    return this.piece;
}

    //get the player at the tile
    Player return_player(){
        return piece.get_player();
    }



