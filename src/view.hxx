#pragma once

#include "model.hxx"

class View
{
public:

    /// View dimensions will use `int` coordinates.
    using Dimensions = ge211::Dims<int>;

    /// View positions will use `int` coordinates.
    using Position = ge211::Posn<int>;

    explicit View(Model const& model, const char* filenames[12]);

    void draw(ge211::Sprite_set& set, View::Position pos);

    Dimensions initial_window_dimensions() const;

    std::string initial_window_title() const;

    // Converts an abstract board position to a concrete screen
    // position.
    Position
    board_to_screen(Model::Position board_pos) const;

    // Converts a concrete screen (pixel) position to an abstract board
    // position.
    Model::Position
    screen_to_board(Position screen_pos) const;



private:
    Model const& model_;


    ge211::sprites::Image_sprite white_pawn;
    ge211::sprites::Image_sprite white_knight;
    ge211::sprites::Image_sprite white_bishop;
    ge211::sprites::Image_sprite white_rook;
    ge211::sprites::Image_sprite white_queen;
    ge211::sprites::Image_sprite white_king;
    ge211::sprites::Image_sprite black_pawn;
    ge211::sprites::Image_sprite black_knight;
    ge211::sprites::Image_sprite black_bishop;
    ge211::sprites::Image_sprite black_rook;
    ge211::sprites::Image_sprite black_queen;
    ge211::sprites::Image_sprite black_king;


    ge211::Rectangle_sprite const green_square;
    ge211::Rectangle_sprite const white_square;


    void
    add_player_sprite_(ge211::Sprite_set&, Player, Position, int z) const;

    void
    draw_grid (ge211::Sprite_set& set, ge211::Rectangle_sprite rec1,
               ge211::Rectange_sprite rec2, int z);
    //just do this manually: do set.add (green_square) and set.add (white_square) at all necessary positions

    //helper alternator function
    //different starting sprites


    void
    draw_pieces (Model model, ge211::Sprite_set& set);
    //iterate through each position in the board, match the piece and player type to the filename, then
   // set.add the necessary image sprite
};
