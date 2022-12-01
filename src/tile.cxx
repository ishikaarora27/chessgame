#pragma once

#include "move.hxx"
#include "piece.hxx"
#include <ge211.hxx>

#include "move.hxx"
#include "piece.hxx"
#include <ge211.hxx>
#include <string>




Tile::Tile(Piece piece, ge211::Posn<int> position)
{}
    //returns whether the tile is occupied
    bool occupied(){
        if(piece != null){
            return true;
        }
        else{
            return false;
        }
    }

    //clear the tile of any pieces
    void clear(){
        piece = NULL;
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



