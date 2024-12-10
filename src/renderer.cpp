#include "board.h"
#include "renderer.h"

board* buffer_board;

void render_to_buffer(board* game_board){
  
  buffer_board = game_board;
}

void display_buffer(){
  
}
