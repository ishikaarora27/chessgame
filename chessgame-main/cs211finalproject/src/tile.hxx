#ifndef TILE_HXX
#define TILE_HXX

#include <iostream>

// this class will act as the positions on the board
class Tile {
public:
    // tile constructor
    Tile();
    // constructs tile with the given values
    Tile(int x, int y);
    // because the moves are text based, we need to convert them to actual coordinates
    Tile(std::string y);
    // Copy constructor for tile
    Tile(const Tile &other) = default;
    //getter for the X coordinate
    int get_x() const;
    // getter for y coordinate
    int get_y() const;
    // checks if coordinates are in range
    bool valid_tile() const;

    bool operator==(const Tile &toCompare);

private:
    int x;
    int y;
};
#endif