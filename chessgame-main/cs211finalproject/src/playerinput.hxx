#ifndef PLAYERINPUT_HXX
#define PLAYERINPUT_HXX

#include "move.hxx"

class PlayerInput {
public:
    enum InputType { MoveInput, Load, Save, Quit, Undo, Invalid};
    // constructor to set type of action
    PlayerInput(InputType type);
    // constructor when type is a move
    PlayerInput(Move *move);
    // deletes the type
    ~PlayerInput();
    // type getter
    InputType get_type() const;
    // move getter
    Move* get_move() const;

private:
    const InputType type;
    Move *move;
};
#endif