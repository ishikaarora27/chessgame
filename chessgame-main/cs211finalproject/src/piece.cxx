#include "board.hxx"
#include "piece.hxx"
#include "ge211.hxx"

Piece::Piece(Player player, Position pos, Points points)
: player(player), taken(false), position(pos), points(points) {}

Piece::Player Piece::get_player() const {
    return player;
}

void Piece::capture() {
    this->taken = true;
}

void Piece::undo_capture() {
    this->taken = false;
}

bool Piece::was_captured() {
    return taken;
}

Piece::Type Piece::get_type() const {
    return this->type;
}

Piece::Points Piece::get_points() const {
    return this->points;
}

Piece::Position get_position() const {
    return this->position;
}

void Piece::set_position(Position pos) {
    this->position = pos;
}

/*
bool Piece::valid_move(const Board &board, const Move &move) const {
    std::list<Move> moves = this->get_possible_moves(board);
    for (std::list<Move>::iterator it = moves.begin(); it != moves.end(); it++) {
        if (*it == move)
        { return true; }
    }
    return false;
}
 */

bool valid_move(Position start, Position end, Piece p) {

}


Piece::Player operator!(Piece::Player player) {
    return static_cast<Piece::Player>(! static_cast<bool>(player));
}

