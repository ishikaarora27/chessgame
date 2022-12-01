#include "controller.hxx"


Controller::Controller()
        : view_(model_)
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
