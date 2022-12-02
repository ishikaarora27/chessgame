#include "pawn.hxx"
#include "../board.hxx"

Pawn::Pawn(Piece::Player player, Tile tile)
        : Piece(player, tile) {
    this->type = Piece::Pawn;
}

Piece* Pawn::clone() const {
    return new Pawn(*this);
}

std::list<Move> Pawn::get_possible_moves(const Board &board) const {
    std::list<Move> moves;
    if (!is_taken()) {
        int x = this->tile.get_x();
        int y = this->tile.get_y();
        if (this->player == Piece::Player::White) {
            if (board.get_piece(Tile(x + 1, y)) == nullptr)
            { moves.push_back(Move(Tile(x, y), Tile(x + 1, y))); }
            //can move 2 fields!
            if (x == 1) {
                if (board.get_piece(Tile(x + 1, y)) == nullptr &&
                    board.get_piece(Tile(x + 2, y)) == nullptr) {
                    moves.push_back(Move(Tile(x, y), Tile(x + 2, y)));
                }
            }
            if(0 <= y - 1 && board.get_piece(Position(x + 1, y - 1)) != nullptr) {
                moves.push_back(Move(Tile(x, y), Tile(x + 1, y - 1)));
            }
            if(y + 1 < 8 && board.get_piece(Tile(x + 1, y + 1)) != nullptr) {
                moves.push_back(Move(Tile(x, y), Tile(x + 1, y + 1)));
            }
        } else {
            if (board.get_piece(Tile(x - 1, y)) == nullptr) {
                moves.push_back(Move(Tile(x, y), Tile(x - 1, y)));
            }
            //can move 2 fields!
            if (x == 6) {
                if (board.get_piece(Tile(x - 1, y)) == nullptr &&
                    board.get_piece(Tile(x - 2, y)) == nullptr)
                { moves.push_back(Move(Tile(x, y), Tile(x - 2, y))); }
            }
            if(0 <= y - 1 && board.get_piece(Tile(x - 1, y - 1)) != nullptr) {
                moves.push_back(Move(Tile(x, y), Tile(x - 1, y - 1)));
            }
            if(y + 1 < 8 && board.get_piece(Tile(x - 1, y + 1)) != nullptr) {
                moves.push_back(Move(Tile(x, y), Tile(x - 1, y + 1)));
            }
        }
    }
    return moves;
}