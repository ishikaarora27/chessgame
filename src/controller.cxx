#include "controller.hxx"


Controller::Controller(const char* filenames[12])
        : view_(model_, filenames)
{ }

void
Controller::draw(ge211::Sprite_set& set)
{
    view_.draw(set);
}

void
Controller::on_mouse_down(ge211::Mouse_button button, View::Position position) {
    //empty: this only happens the first time ig
    if(start_position.empty() && end_position.empty()){
        start_position = position;
    }
    else if(!start_position.empty() && end_position.empty()){
        end_position = position;
        //call a model function that creates a move with those two positions, sees if it is valid,
        //and executes it
    }
    //if both are full, it means this is a new move, so reset end and set start to pos
    else if (!start_position.empty() && !end_position.empty()){
        start_position = position;
        end_position = NULL;
    }


}
