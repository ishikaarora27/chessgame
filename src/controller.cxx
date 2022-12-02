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
    if(start_position.empty()){
        start_position = position;
    }
    else if(start_position, )




}
