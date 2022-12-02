#ifndef CONTROLLER_HXX
#define CONTROLLER_HXX

#include "board.hxx"
#include "view.hxx"
#include "move.hxx"
#include "model.hxx"
#include "view.hxx"
#include <ge211.hxx>
#include "playerinput.hxx"

class Controller : public ge211::Abstract_game
{
public:
    Controller();

protected:
    void draw(ge211::Sprite_set& set) override;

private:
    Model model_;
    View view_;
    View::Position start_position;
    View::Position end_position;


    void on_mouse_down(ge211::Mouse_button button, View::Position position) override;
};