#include "playerinput.hxx"

PlayerInput::PlayerInput(InputType type)
        : type(type), move(nullptr) {

}
PlayerInput::PlayerInput(Move *move)
        : type(PlayerInput::MoveInput), move(move){

}
PlayerInput::~PlayerInput() {
    delete this->move;
}

PlayerInput::InputType PlayerInput::get_type() const {
    return this->type;
}

Move* PlayerInput::get_move() const {
    return this->move;
}