#include "tile.hxx"

Tile::Tile()
    : x(-1), y(-1) {
}

Tile::Tile(int x, int y)
    : x(x), y(y) {
}

Tile::Tile(std::string str) {
    this->y = toupper(str[0]) - 'A';
    this->x = (str[1] - '0') - 1;
}

int Tile::get_x() const {
    return this->x;
}

int Tile::get_y() const {
    return this->y;
}

bool Tile::valid_tile() const {
    return this->x >= 0 && this->x < 8 && this->y >= 0 && this->y < 8;
}

bool Tile::operator==(const Tile &toCompare) {
    return this->get_x() == toCompare.get_x() && this->get_y() == toCompare.get_y();
}