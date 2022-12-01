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
        "../../Downloads/final_project 5/src/view.cxx"
        "../../Downloads/final_project 5/src/controller.cxx"
        "../../Downloads/final_project 5/src/main.cxx"
        "../../Downloads/final_project 5/src/board.cxx"
        "../../Downloads/final_project 5/src/player.cxx"
        "../../Downloads/final_project 5/src/move.cxx"
        "../../Downloads/final_project 5/src/piece.cxx"
        "../../Downloads/final_project 5/src/pawn.cxx"
        "../../Downloads/final_project 5/src/king.cxx"
        "../../Downloads/final_project 5/src/queen.cxx"
        "../../Downloads/final_project 5/src/rook.cxx"
        "../../Downloads/final_project 5/src/bishop.cxx"
        "../../Downloads/final_project 5/src/knight.cxx")
target_link_libraries(${GAME_EXE} ge211)

add_test_program(model_test
        ${MODEL_SRC}
        "../../Downloads/final_project 5/test/model_test.cxx")
target_link_libraries(model_test ge211)

# vim: ft=cmake
