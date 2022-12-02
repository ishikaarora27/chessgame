#include "view.hxx"

View::View(Model const& model, const char* filenames[12])
        : model_(model)
{ //maybe make all this another constructor
    for(int i = 0; i<12; i++){
        if(filenames[i].compare("white pawn.png") == 0){
            white_pawn(filenames[i]);
        }
        else if(filenames[i].compare("white knight.png") == 0){
            white_knight(filenames[i]);
        }
        else if(filenames[i].compare("white bishop.png") == 0){
            white_bishop(filenames[i]);
        }
        else if(filenames[i].compare("white rook.png") == 0){
            white_rook(filenames[i]);
        }
        else if(filenames[i].compare("white queen.png") == 0){
            white_queen(filenames[i]);
        }
        else if(filenames[i].compare("white king.png") == 0){
            white_king(filenames[i]);
        }
        else if(filenames[i].compare("black pawn.png") == 0){
            black_pawn(filenames[i]);
        }
        else if(filenames[i].compare("black knight.png") == 0){
            black_knight(filenames[i]);
        }
        else if(filenames[i].compare("black bishop.png") == 0){
            black_bishop(filenames[i]);
        }
        else if(filenames[i].compare("black rook.png") == 0){
            black_rook(filenames[i]);
        }
        else if(filenames[i].compare("black queen.png") == 0){
            black_queen(filenames[i])
        }
        else if(filenames[i].compare("black king.png") == 0){
            black_king(filenames[i]);
        }
    }
}

static int const tile_size = 100;

void
View::draw(ge211::Sprite_set& set)
{
    draw_grid(set, green_square, white_square, 0);
}


View::Dimensions
View::initial_window_dimensions() const
{
    // You can change this if you want:
    return (grid_size + margin) * model_.board().dimensions();
}

std::string
View::initial_window_title() const
{
    // You can change this if you want:
    return "chess";
}


void
add_player_sprite_(ge211::Sprite_set&, Player, Position, int z) {

}

void
draw_grid (ge211::Sprite_set& set, int z) {
    //overwrite model
    model[]

}
//just do this manually: do set.add (green_square) and set.add (white_square) at all necessary positions


void draw_grid(ge211::Sprite_set& set,
                ge211::Rectangle_sprite rect1,
                ge211::Rectangle_sprite rect2,
                int z) {
    for(int i = 0; i<model.board().board_size, i++){
        if(i % 2 == 0) {
            for (int j = 0; j < board().board_size; j++) {
                if (j % 2 == 0) {
                    Position pos = {i, j};
                    pos = board_to_screen(pos);
                    set.add_sprite(rect1, pos, z);
                } else {
                    Position pos = {i, j};
                    pos = board_to_screen(pos);
                    set.add_sprite(rect2, pos, z);
                }
            }
        }
        else{
                for(int j = 0; j < board().board_size; j++){
                    if(j % 2 == 0){
                        Position pos = {i,j};
                        pos = board_to_screen(pos);
                        set.add_sprite(rect2,  pos, z);
                    }
                    else{
                        Position pos = {i,j};
                        pos = board_to_screen(pos);
                        set.add_sprite(rect1,  pos, z);
                    }
            }
        }
    }
}




void
draw_pieces (Model model, ge211::Sprite_set& set);
//iterate through each position in the board, match the piece and player type to the filename, then
// set.add the necessary image sprite
