cmake_minimum_required(VERSION 3.3)

# TODO: Change “game” to the name of your game (no spaces!):
set(GAME_EXE game)

project(${GAME_EXE} CXX)
include("cmake/CMakeLists.txt")

# TODO: PUT ADDITIONAL MODEL .cxx FILES IN THIS LIST:
set(MODEL_SRC
        "../../Downloads/final_project 5/src/model.cxx")

# TODO: PUT ADDITIONAL NON-MODEL (UI) .cxx FILES IN THIS LIST:
add_program(${GAME_EXE}
        ${MODEL_SRC}
        "src/view.cxx"
        "src/controller.cxx"
        "src/main.cxx"
        "src/board.cxx"
        "src/player.cxx"
        "src/move.cxx"
        "src/piece.cxx"
        "src/pawn.cxx"
        "src/king.cxx"
        "src/queen.cxx"
        "src/rook.cxx"
        "src/bishop.cxx"
        "src/knight.cxx")
target_link_libraries(${GAME_EXE} ge211)

add_test_program(model_test
        ${MODEL_SRC}
        "../../Downloads/final_project 5/test/model_test.cxx")
target_link_libraries(model_test ge211)

# vim: ft=cmake
